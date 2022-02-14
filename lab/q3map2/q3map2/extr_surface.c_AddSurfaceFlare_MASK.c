
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int * vec3_t ;
struct TYPE_7__ {int numVerts; TYPE_2__* shaderInfo; int * lightmapVecs; int entityNum; TYPE_1__* verts; } ;
typedef TYPE_3__ mapDrawSurface_t ;
struct TYPE_6__ {int lightStyle; int flareShader; int color; } ;
struct TYPE_5__ {int * xyz; } ;


 int FUNC_0 (int ,int *,int ,int ,int ,int ) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,float,int ,int *) ;
 int FUNC_4 (int *,float,int *) ;

__attribute__((used)) static void FUNC_5( mapDrawSurface_t *VAR_0, vec3_t VAR_1 ){
 vec3_t VAR_2;
 int VAR_3;



 FUNC_2( VAR_2 );
 for ( VAR_3 = 0; VAR_3 < VAR_0->numVerts; VAR_3++ )
  FUNC_1( VAR_2, VAR_0->verts[ VAR_3 ].xyz, VAR_2 );
 FUNC_4( VAR_2, ( 1.0f / VAR_0->numVerts ), VAR_2 );
 if ( VAR_1 != ((void*)0) ) {
  FUNC_1( VAR_2, VAR_1, VAR_2 );
 }


 FUNC_3( VAR_2, 2.0f, VAR_0->lightmapVecs[ 2 ], VAR_2 );


 FUNC_0( VAR_0->entityNum, VAR_2, VAR_0->lightmapVecs[ 2 ], VAR_0->shaderInfo->color, VAR_0->shaderInfo->flareShader, VAR_0->shaderInfo->lightStyle );
}
