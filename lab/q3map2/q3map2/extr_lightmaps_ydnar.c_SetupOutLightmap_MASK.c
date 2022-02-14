
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ customWidth; scalar_t__ customHeight; } ;
typedef TYPE_1__ rawLightmap_t ;
struct TYPE_7__ {int lightmapNum; int extLightmapNum; scalar_t__ customWidth; scalar_t__ customHeight; int freeLuxels; void* bspDirBytes; void* bspLightBytes; void* lightBits; scalar_t__ numShaders; scalar_t__ numLightmaps; } ;
typedef TYPE_2__ outLightmap_t ;
struct TYPE_8__ {scalar_t__ lightmapSize; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (void*,int ,int) ;
 int VAR_3 ;
 void* FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2( rawLightmap_t *VAR_4, outLightmap_t *VAR_5 ){

 if ( VAR_4 == ((void*)0) || VAR_5 == ((void*)0) ) {
  return;
 }


 if ( ( VAR_4->customWidth == VAR_2->lightmapSize && VAR_4->customHeight == VAR_2->lightmapSize ) || VAR_1 ) {
  VAR_5->lightmapNum = VAR_3;
  VAR_3++;


  if ( VAR_0 ) {
   VAR_3++;
  }
 }
 else{
  VAR_5->lightmapNum = -3;
 }


 VAR_5->extLightmapNum = -1;


 VAR_5->numLightmaps = 0;
 VAR_5->customWidth = VAR_4->customWidth;
 VAR_5->customHeight = VAR_4->customHeight;
 VAR_5->freeLuxels = VAR_5->customWidth * VAR_5->customHeight;
 VAR_5->numShaders = 0;


 VAR_5->lightBits = FUNC_1( ( VAR_5->customWidth * VAR_5->customHeight / 8 ) + 8 );
 FUNC_0( VAR_5->lightBits, 0, ( VAR_5->customWidth * VAR_5->customHeight / 8 ) + 8 );
 VAR_5->bspLightBytes = FUNC_1( VAR_5->customWidth * VAR_5->customHeight * 3 );
 FUNC_0( VAR_5->bspLightBytes, 0, VAR_5->customWidth * VAR_5->customHeight * 3 );
 if ( VAR_0 ) {
  VAR_5->bspDirBytes = FUNC_1( VAR_5->customWidth * VAR_5->customHeight * 3 );
  FUNC_0( VAR_5->bspDirBytes, 0, VAR_5->customWidth * VAR_5->customHeight * 3 );
 }
}
