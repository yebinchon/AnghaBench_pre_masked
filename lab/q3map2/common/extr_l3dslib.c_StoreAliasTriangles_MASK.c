
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ** verts; } ;
struct TYPE_3__ {size_t* v; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int ** VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

void FUNC_1( void ){
 int VAR_8, VAR_9, VAR_10;

 if ( ( VAR_4 + VAR_2 ) > VAR_0 ) {
  FUNC_0( "Error: Too many triangles" );
 }

 for ( VAR_8 = 0; VAR_8 < VAR_2 ; VAR_8++ )
 {
  for ( VAR_9 = 0 ; VAR_9 < 3 ; VAR_9++ )
  {
   for ( VAR_10 = 0 ; VAR_10 < 3 ; VAR_10++ )
   {
    VAR_3[VAR_8 + VAR_4].verts[VAR_9][VAR_10] = VAR_1[VAR_5[VAR_8].v[VAR_9]][VAR_10];
   }
  }
 }

 VAR_4 += VAR_2;
 VAR_2 = 0;
 VAR_7 = 0;
 VAR_6 = 0;
}
