
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t facing; int i2; } ;
struct TYPE_3__ {int numIndexes; int* indexes; int numVertexes; int * xyz; } ;


 int VAR_0 ;
 TYPE_2__** VAR_1 ;
 int * VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int * VAR_4 ;
 TYPE_1__ VAR_5 ;

void FUNC_3( void ) {
 int VAR_6;
 int VAR_7, VAR_8;
 int VAR_9, VAR_10;
 int VAR_11;
 int VAR_12, VAR_13;
 int VAR_14[2];





 VAR_12 = 0;
 VAR_13 = 0;

 for ( VAR_6 = 0 ; VAR_6 < VAR_5.numVertexes ; VAR_6++ ) {
  VAR_7 = VAR_3[ VAR_6 ];
  for ( VAR_9 = 0 ; VAR_9 < VAR_7 ; VAR_9++ ) {
   if ( !VAR_1[ VAR_6 ][ VAR_9 ].facing ) {
    continue;
   }

   VAR_14[0] = 0;
   VAR_14[1] = 0;

   VAR_11 = VAR_1[ VAR_6 ][ VAR_9 ].i2;
   VAR_8 = VAR_3[ VAR_11 ];
   for ( VAR_10 = 0 ; VAR_10 < VAR_8 ; VAR_10++ ) {
    if ( VAR_1[ VAR_11 ][ VAR_10 ].i2 == VAR_6 ) {
     VAR_14[ VAR_1[ VAR_11 ][ VAR_10 ].facing ]++;
    }
   }



   if ( VAR_14[ 1 ] == 0 ) {
    FUNC_0( VAR_0 );
    FUNC_2( VAR_5.xyz[ VAR_6 ] );
    FUNC_2( VAR_4[ VAR_6 ] );
    FUNC_2( VAR_5.xyz[ VAR_11 ] );
    FUNC_2( VAR_4[ VAR_11 ] );
    FUNC_1();
    VAR_12++;
   } else {
    VAR_13++;
   }
  }
 }

}
