
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef float* vec4_t ;
typedef int vec3_t ;
struct TYPE_16__ {TYPE_1__* si; } ;
typedef TYPE_2__ surfaceInfo_t ;
struct TYPE_17__ {float* plane; } ;
typedef TYPE_3__ rawLightmap_t ;
typedef scalar_t__ qboolean ;
struct TYPE_18__ {int xyz; } ;
typedef TYPE_4__ bspDrawVert_t ;
struct TYPE_15__ {int * normalImage; } ;


 scalar_t__ FUNC_0 (int,TYPE_4__**,int *,int *) ;
 float FUNC_1 (float*,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,TYPE_4__**,float*,int *,int *) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,TYPE_4__*,float*,int,int *,int *) ;
 scalar_t__ FUNC_4 (float*,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (float*,float*) ;
 scalar_t__ FUNC_6 (float) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static qboolean FUNC_7( rawLightmap_t *VAR_3, surfaceInfo_t *VAR_4, bspDrawVert_t *VAR_5[ 4 ] ){
 float VAR_6;
 vec4_t VAR_7;
 vec3_t *VAR_8, *VAR_9, VAR_10[ 4 ], VAR_11[ 4 ];



 if ( VAR_3->plane != ((void*)0) ) {
  FUNC_5( VAR_3->plane, VAR_7 );
  VAR_7[ 3 ] = VAR_3->plane[ 3 ];
 }


 else if ( FUNC_4( VAR_7, VAR_5[ 0 ]->xyz, VAR_5[ 1 ]->xyz, VAR_5[ 2 ]->xyz ) == VAR_1 ) {
  return VAR_1;
 }


 VAR_6 = FUNC_1( VAR_7, VAR_5[ 3 ]->xyz ) - VAR_7[ 3 ];
 if ( FUNC_6( VAR_6 ) > VAR_0 ) {
  return VAR_1;
 }


 if ( VAR_4->si->normalImage != ((void*)0) && FUNC_0( 4, VAR_5, VAR_10, VAR_11 ) ) {
  VAR_8 = VAR_10;
  VAR_9 = VAR_11;
 }
 else
 {
  VAR_8 = ((void*)0);
  VAR_9 = ((void*)0);
 }


 FUNC_3( VAR_3, VAR_4, VAR_5[ 0 ], VAR_7, 1, VAR_8, VAR_9 );
 FUNC_3( VAR_3, VAR_4, VAR_5[ 1 ], VAR_7, 1, VAR_8, VAR_9 );
 FUNC_3( VAR_3, VAR_4, VAR_5[ 2 ], VAR_7, 1, VAR_8, VAR_9 );
 FUNC_3( VAR_3, VAR_4, VAR_5[ 3 ], VAR_7, 1, VAR_8, VAR_9 );


 FUNC_2( VAR_3, VAR_4, VAR_5, VAR_7, VAR_8, VAR_9 );
 return VAR_2;
}
