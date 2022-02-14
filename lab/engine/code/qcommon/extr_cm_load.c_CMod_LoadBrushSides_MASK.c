
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int filelen; scalar_t__ fileofs; } ;
typedef TYPE_2__ lump_t ;
struct TYPE_10__ {int shaderNum; int planeNum; } ;
typedef TYPE_3__ dbrushside_t ;
struct TYPE_11__ {size_t shaderNum; int surfaceFlags; int * plane; } ;
typedef TYPE_4__ cbrushside_t ;
struct TYPE_12__ {int numBrushSides; size_t numShaders; TYPE_1__* shaders; int * planes; TYPE_4__* brushsides; } ;
struct TYPE_8__ {int surfaceFlags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 TYPE_4__* FUNC_1 (int,int ) ;
 void* FUNC_2 (int ) ;
 TYPE_5__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

void FUNC_3 (lump_t *VAR_5)
{
 int VAR_6;
 cbrushside_t *VAR_7;
 dbrushside_t *VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_8 = (void *)(VAR_3 + VAR_5->fileofs);
 if ( VAR_5->filelen % sizeof(*VAR_8) ) {
  FUNC_0 (VAR_1, "MOD_LoadBmodel: funny lump size");
 }
 VAR_9 = VAR_5->filelen / sizeof(*VAR_8);

 VAR_2.brushsides = FUNC_1( ( VAR_0 + VAR_9 ) * sizeof( *VAR_2.brushsides ), VAR_4 );
 VAR_2.numBrushSides = VAR_9;

 VAR_7 = VAR_2.brushsides;

 for ( VAR_6=0 ; VAR_6<VAR_9 ; VAR_6++, VAR_8++, VAR_7++) {
  VAR_10 = FUNC_2( VAR_8->planeNum );
  VAR_7->plane = &VAR_2.planes[VAR_10];
  VAR_7->shaderNum = FUNC_2( VAR_8->shaderNum );
  if ( VAR_7->shaderNum < 0 || VAR_7->shaderNum >= VAR_2.numShaders ) {
   FUNC_0( VAR_1, "CMod_LoadBrushSides: bad shaderNum: %i", VAR_7->shaderNum );
  }
  VAR_7->surfaceFlags = VAR_2.shaders[VAR_7->shaderNum].surfaceFlags;
 }
}
