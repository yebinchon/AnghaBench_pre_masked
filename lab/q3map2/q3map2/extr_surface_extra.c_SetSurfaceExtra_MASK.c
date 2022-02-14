
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int parentSurfaceNum; int lightmapAxis; int longestCurve; int sampleSize; int recvShadows; int castShadows; int entityNum; int si; TYPE_3__* mds; } ;
typedef TYPE_2__ surfaceExtra_t ;
struct TYPE_8__ {int lightmapAxis; int longestCurve; int sampleSize; int recvShadows; int castShadows; int entityNum; TYPE_1__* parent; int shaderInfo; } ;
typedef TYPE_3__ mapDrawSurface_t ;
struct TYPE_6__ {int outputNum; } ;


 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (int ,int ) ;

void FUNC_2( mapDrawSurface_t *VAR_0, int VAR_1 ){
 surfaceExtra_t *VAR_2;



 if ( VAR_0 == ((void*)0) || VAR_1 < 0 ) {
  return;
 }


 VAR_2 = FUNC_0();


 VAR_2->mds = VAR_0;
 VAR_2->si = VAR_0->shaderInfo;
 VAR_2->parentSurfaceNum = VAR_0->parent != ((void*)0) ? VAR_0->parent->outputNum : -1;
 VAR_2->entityNum = VAR_0->entityNum;
 VAR_2->castShadows = VAR_0->castShadows;
 VAR_2->recvShadows = VAR_0->recvShadows;
 VAR_2->sampleSize = VAR_0->sampleSize;
 VAR_2->longestCurve = VAR_0->longestCurve;
 FUNC_1( VAR_0->lightmapAxis, VAR_2->lightmapAxis );



}
