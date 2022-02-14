
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int numIndexes; int* indexes; TYPE_1__* shaderInfo; } ;
typedef TYPE_2__ mapDrawSurface_t ;
struct TYPE_4__ {scalar_t__ autosprite; } ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int*,int) ;
 int* FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3( mapDrawSurface_t *VAR_1 ){
 int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10[ VAR_0 + 1 ];
 int *VAR_11;



 if ( VAR_1->numIndexes <= VAR_0 ||
   VAR_1->shaderInfo->autosprite ) {
  return;
 }


 VAR_11 = FUNC_2( VAR_1->numIndexes * sizeof( *VAR_11 ) );
 FUNC_1( VAR_11, VAR_1->indexes, VAR_1->numIndexes * sizeof( *VAR_11 ) );


 for ( VAR_2 = 0; VAR_2 <= VAR_0 && VAR_2 < VAR_1->numIndexes; VAR_2++ )
  VAR_10[ VAR_2 ] = VAR_11[ VAR_2 ];


 for ( VAR_2 = 0; VAR_2 < VAR_1->numIndexes; VAR_2 += 3 )
 {

  VAR_6 = -1;
  VAR_7 = -1;
  VAR_8 = -1;
  for ( VAR_3 = 0; VAR_3 < VAR_1->numIndexes; VAR_3 += 3 )
  {

   if ( VAR_11[ VAR_3 ] != -1 ) {

    if ( VAR_6 < 0 ) {
     VAR_6 = VAR_3;
    }


    VAR_9 = 0;
    for ( VAR_4 = 0; VAR_4 < VAR_0; VAR_4++ )
    {
     if ( VAR_11[ VAR_3 ] == VAR_10[ VAR_4 ] || VAR_11[ VAR_3 + 1 ] == VAR_10[ VAR_4 ] || VAR_11[ VAR_3 + 2 ] == VAR_10[ VAR_4 ] ) {
      VAR_9++;
     }
    }


    if ( VAR_9 > VAR_8 ) {
     VAR_8 = VAR_9;
     VAR_7 = VAR_3;
    }


    if ( VAR_9 == 3 ) {
     break;
    }
   }
  }


  if ( VAR_7 < 0 ) {
   VAR_7 = VAR_6;
  }


  if ( VAR_7 >= 0 ) {

   for ( VAR_3 = 0; VAR_3 < 3; VAR_3++ )
   {
    for ( VAR_4 = 0; VAR_4 < VAR_0; VAR_4++ )
    {
     if ( VAR_11[ VAR_7 + VAR_3 ] == VAR_10[ VAR_4 ] ) {
      break;
     }
    }

    if ( VAR_4 >= VAR_0 ) {

     for ( VAR_4 = VAR_0; VAR_4 > 0; VAR_4-- )
      VAR_10[ VAR_4 ] = VAR_10[ VAR_4 - 1 ];


     VAR_10[ 0 ] = VAR_11[ VAR_7 + VAR_3 ];
    }
   }


   VAR_1->indexes[ VAR_2 ] = VAR_11[ VAR_7 ];
   VAR_1->indexes[ VAR_2 + 1 ] = VAR_11[ VAR_7 + 1 ];
   VAR_1->indexes[ VAR_2 + 2 ] = VAR_11[ VAR_7 + 2 ];


   VAR_11[ VAR_7 ] = -1;
   VAR_11[ VAR_7 + 1 ] = -1;
   VAR_11[ VAR_7 + 2 ] = -1;


   while ( VAR_1->indexes[ VAR_2 ] > VAR_1->indexes[ VAR_2 + 1 ] || VAR_1->indexes[ VAR_2 ] > VAR_1->indexes[ VAR_2 + 2 ] )
   {
    VAR_5 = VAR_1->indexes[ VAR_2 ];
    VAR_1->indexes[ VAR_2 ] = VAR_1->indexes[ VAR_2 + 1 ];
    VAR_1->indexes[ VAR_2 + 1 ] = VAR_1->indexes[ VAR_2 + 2 ];
    VAR_1->indexes[ VAR_2 + 2 ] = VAR_5;
   }
  }
 }


 FUNC_0( VAR_11 );
}
