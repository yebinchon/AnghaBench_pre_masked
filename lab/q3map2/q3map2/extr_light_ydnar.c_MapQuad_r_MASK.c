
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int vec4_t ;
typedef int vec3_t ;
typedef int surfaceInfo_t ;
typedef int rawLightmap_t ;
struct TYPE_7__ {float** lightmap; } ;
typedef TYPE_1__ bspDrawVert_t ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (int *,int *,TYPE_1__*,int ,int,int *,int *) ;
 float VAR_0 ;

__attribute__((used)) static void FUNC_2( rawLightmap_t *VAR_1, surfaceInfo_t *VAR_2, bspDrawVert_t *VAR_3[ 4 ], vec4_t VAR_4, vec3_t VAR_5[ 4 ], vec3_t VAR_6[ 4 ] ){
 bspDrawVert_t VAR_7[ 2 ], *VAR_8[ 4 ];
 int VAR_9;



 {
  int VAR_10;
  float *VAR_11, *VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;



  VAR_9 = -1;
  VAR_16 = 0;
  for ( VAR_10 = 0; VAR_10 < 4; VAR_10++ )
  {

   VAR_11 = VAR_3[ VAR_10 ]->lightmap[ 0 ];
   VAR_12 = VAR_3[ ( VAR_10 + 1 ) % 4 ]->lightmap[ 0 ];


   VAR_13 = VAR_11[ 0 ] - VAR_12[ 0 ];
   VAR_14 = VAR_11[ 1 ] - VAR_12[ 1 ];
   VAR_15 = ( VAR_13 * VAR_13 ) + ( VAR_14 * VAR_14 );


   if ( VAR_15 > VAR_16 ) {
    VAR_16 = VAR_15;
    VAR_9 = VAR_10;
   }
  }


  if ( VAR_9 < 0 || VAR_16 <= VAR_0 ) {
   return;
  }
 }


 VAR_9 &= 1;


 FUNC_0( VAR_3[ VAR_9 ], VAR_3[ ( VAR_9 + 1 ) % 4 ], &VAR_7[ 0 ] );
 FUNC_0( VAR_3[ VAR_9 + 2 ], VAR_3[ ( VAR_9 + 3 ) % 4 ], &VAR_7[ 1 ] );


 FUNC_1( VAR_1, VAR_2, &VAR_7[ 0 ], VAR_4, 1, VAR_5, VAR_6 );
 FUNC_1( VAR_1, VAR_2, &VAR_7[ 1 ], VAR_4, 1, VAR_5, VAR_6 );


 if ( VAR_9 == 0 ) {

  VAR_8[ 0 ] = VAR_3[ 0 ];
  VAR_8[ 1 ] = &VAR_7[ 0 ];
  VAR_8[ 2 ] = &VAR_7[ 1 ];
  VAR_8[ 3 ] = VAR_3[ 3 ];
  FUNC_2( VAR_1, VAR_2, VAR_8, VAR_4, VAR_5, VAR_6 );


  VAR_8[ 0 ] = &VAR_7[ 0 ];
  VAR_8[ 1 ] = VAR_3[ 1 ];
  VAR_8[ 2 ] = VAR_3[ 2 ];
  VAR_8[ 3 ] = &VAR_7[ 1 ];
  FUNC_2( VAR_1, VAR_2, VAR_8, VAR_4, VAR_5, VAR_6 );
 }


 else
 {

  VAR_8[ 0 ] = VAR_3[ 0 ];
  VAR_8[ 1 ] = VAR_3[ 1 ];
  VAR_8[ 2 ] = &VAR_7[ 0 ];
  VAR_8[ 3 ] = &VAR_7[ 1 ];
  FUNC_2( VAR_1, VAR_2, VAR_8, VAR_4, VAR_5, VAR_6 );


  VAR_8[ 0 ] = &VAR_7[ 1 ];
  VAR_8[ 1 ] = &VAR_7[ 0 ];
  VAR_8[ 2 ] = VAR_3[ 2 ];
  VAR_8[ 3 ] = VAR_3[ 3 ];
  FUNC_2( VAR_1, VAR_2, VAR_8, VAR_4, VAR_5, VAR_6 );
 }
}
