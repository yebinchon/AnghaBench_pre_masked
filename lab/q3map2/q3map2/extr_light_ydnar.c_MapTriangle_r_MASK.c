
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int vec4_t ;
typedef int vec3_t ;
typedef int surfaceInfo_t ;
typedef int rawLightmap_t ;
struct TYPE_9__ {float** lightmap; } ;
typedef TYPE_1__ bspDrawVert_t ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (int *,int *,TYPE_1__*,int ,int,int *,int *) ;
 int FUNC_2 (TYPE_1__**,TYPE_1__**) ;
 float VAR_0 ;

__attribute__((used)) static void FUNC_3( rawLightmap_t *VAR_1, surfaceInfo_t *VAR_2, bspDrawVert_t *VAR_3[ 3 ], vec4_t VAR_4, vec3_t VAR_5[ 3 ], vec3_t VAR_6[ 3 ] ){
 bspDrawVert_t VAR_7, *VAR_8[ 3 ];
 int VAR_9;
 {
  int VAR_10;
  float *VAR_11, *VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;



  VAR_9 = -1;
  VAR_16 = 0;
  for ( VAR_10 = 0; VAR_10 < 3; VAR_10++ )
  {

   VAR_11 = VAR_3[ VAR_10 ]->lightmap[ 0 ];
   VAR_12 = VAR_3[ ( VAR_10 + 1 ) % 3 ]->lightmap[ 0 ];


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


 FUNC_0( VAR_3[ VAR_9 ], VAR_3[ ( VAR_9 + 1 ) % 3 ], &VAR_7 );
 FUNC_1( VAR_1, VAR_2, &VAR_7, VAR_4, 1, VAR_5, VAR_6 );





 FUNC_2( VAR_3, VAR_8 );
 VAR_8[ VAR_9 ] = &VAR_7;
 FUNC_3( VAR_1, VAR_2, VAR_8, VAR_4, VAR_5, VAR_6 );


 FUNC_2( VAR_3, VAR_8 );
 VAR_8[ ( VAR_9 + 1 ) % 3 ] = &VAR_7;
 FUNC_3( VAR_1, VAR_2, VAR_8, VAR_4, VAR_5, VAR_6 );
}
