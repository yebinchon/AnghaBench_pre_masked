
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int * vec4_t ;
typedef int vec3_t ;
struct TYPE_16__ {TYPE_1__* si; } ;
typedef TYPE_2__ surfaceInfo_t ;
struct TYPE_17__ {int * plane; } ;
typedef TYPE_3__ rawLightmap_t ;
typedef scalar_t__ qboolean ;
struct TYPE_18__ {float** lightmap; int xyz; } ;
typedef TYPE_4__ bspDrawVert_t ;
struct TYPE_15__ {int * normalImage; } ;


 scalar_t__ FUNC_0 (int,TYPE_4__**,int *,int *) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,TYPE_4__*,int *,int,int *,int *) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,TYPE_4__**,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *,int *) ;
 float FUNC_5 (float) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static qboolean FUNC_6( rawLightmap_t *VAR_2, surfaceInfo_t *VAR_3, bspDrawVert_t *VAR_4[ 3 ], qboolean VAR_5 ){
 int VAR_6;
 vec4_t VAR_7;
 vec3_t *VAR_8, *VAR_9, VAR_10[ 3 ], VAR_11[ 3 ];



 if ( VAR_2->plane != ((void*)0) ) {
  FUNC_4( VAR_2->plane, VAR_7 );
  VAR_7[ 3 ] = VAR_2->plane[ 3 ];
 }


 else if ( FUNC_3( VAR_7, VAR_4[ 0 ]->xyz, VAR_4[ 1 ]->xyz, VAR_4[ 2 ]->xyz ) == VAR_0 ) {
  return VAR_0;
 }


 if ( VAR_3->si->normalImage != ((void*)0) && FUNC_0( 3, VAR_4, VAR_10, VAR_11 ) ) {
  VAR_8 = VAR_10;
  VAR_9 = VAR_11;
 }
 else
 {
  VAR_8 = ((void*)0);
  VAR_9 = ((void*)0);
 }


 FUNC_1( VAR_2, VAR_3, VAR_4[ 0 ], VAR_7, 1, VAR_8, VAR_9 );
 FUNC_1( VAR_2, VAR_3, VAR_4[ 1 ], VAR_7, 1, VAR_8, VAR_9 );
 FUNC_1( VAR_2, VAR_3, VAR_4[ 2 ], VAR_7, 1, VAR_8, VAR_9 );


 if ( VAR_5 ) {

  FUNC_2( VAR_2, VAR_3, VAR_4, VAR_7, VAR_8, VAR_9 );
  return VAR_1;
 }

 for ( VAR_6 = 0; VAR_6 < 3; VAR_6++ )
 {
  float *VAR_12, *VAR_13;
  bspDrawVert_t *VAR_14[ 3 ];



  VAR_12 = VAR_4[ VAR_6 ]->lightmap[ 0 ];
  VAR_13 = VAR_4[ ( VAR_6 + 1 ) % 3 ]->lightmap[ 0 ];


  if ( FUNC_5( VAR_12[ 0 ] - VAR_13[ 0 ] ) < 0.01f || FUNC_5( VAR_12[ 1 ] - VAR_13[ 1 ] ) < 0.01f ) {
   VAR_14[ 0 ] = VAR_4[ VAR_6 ];
   VAR_14[ 1 ] = VAR_4[ ( VAR_6 + 1 ) % 3 ];
   VAR_14[ 2 ] = VAR_4[ ( VAR_6 + 1 ) % 3 ];


   FUNC_2( VAR_2, VAR_3, VAR_14, VAR_7, VAR_8, VAR_9 );
  }
 }

 return VAR_1;
}
