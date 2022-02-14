
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ timeOffset; scalar_t__ clampTime; int optimalStageIteratorFunc; int numUnfoggedPasses; int stages; struct TYPE_9__* remappedShader; } ;
typedef TYPE_3__ shader_t ;
struct TYPE_8__ {int flags; } ;
struct TYPE_7__ {scalar_t__ floatTime; } ;
struct TYPE_11__ {TYPE_2__ viewParms; TYPE_1__ refdef; } ;
struct TYPE_10__ {int fogNum; int cubemapIndex; scalar_t__ shaderTime; int currentStageIteratorFunc; TYPE_3__* shader; int useCacheVao; int useInternalVao; int numPasses; int xstages; scalar_t__ pshadowBits; scalar_t__ dlightBits; scalar_t__ numVertexes; scalar_t__ firstIndex; scalar_t__ numIndexes; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__ VAR_5 ;

void FUNC_0( shader_t *VAR_6, int VAR_7, int VAR_8 ) {

 shader_t *VAR_9 = (VAR_6->remappedShader) ? VAR_6->remappedShader : VAR_6;

 VAR_5.numIndexes = 0;
 VAR_5.firstIndex = 0;
 VAR_5.numVertexes = 0;
 VAR_5.shader = VAR_9;
 VAR_5.fogNum = VAR_7;
 VAR_5.cubemapIndex = VAR_8;
 VAR_5.dlightBits = 0;
 VAR_5.pshadowBits = 0;
 VAR_5.xstages = VAR_9->stages;
 VAR_5.numPasses = VAR_9->numUnfoggedPasses;
 VAR_5.currentStageIteratorFunc = VAR_9->optimalStageIteratorFunc;
 VAR_5.useInternalVao = VAR_4;
 VAR_5.useCacheVao = VAR_3;

 VAR_5.shaderTime = VAR_2.refdef.floatTime - VAR_5.shader->timeOffset;
 if (VAR_5.shader->clampTime && VAR_5.shaderTime >= VAR_5.shader->clampTime) {
  VAR_5.shaderTime = VAR_5.shader->clampTime;
 }

 if (VAR_2.viewParms.flags & VAR_1)
 {
  VAR_5.currentStageIteratorFunc = VAR_0;
 }
}
