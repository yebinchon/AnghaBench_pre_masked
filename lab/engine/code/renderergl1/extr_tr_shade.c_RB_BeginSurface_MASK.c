
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ timeOffset; scalar_t__ clampTime; int optimalStageIteratorFunc; int numUnfoggedPasses; int stages; struct TYPE_7__* remappedShader; } ;
typedef TYPE_2__ shader_t ;
struct TYPE_6__ {scalar_t__ floatTime; } ;
struct TYPE_9__ {TYPE_1__ refdef; } ;
struct TYPE_8__ {int fogNum; scalar_t__ shaderTime; TYPE_2__* shader; int currentStageIteratorFunc; int numPasses; int xstages; scalar_t__ dlightBits; scalar_t__ numVertexes; scalar_t__ numIndexes; } ;


 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;

void FUNC_0( shader_t *VAR_2, int VAR_3 ) {

 shader_t *VAR_4 = (VAR_2->remappedShader) ? VAR_2->remappedShader : VAR_2;

 VAR_1.numIndexes = 0;
 VAR_1.numVertexes = 0;
 VAR_1.shader = VAR_4;
 VAR_1.fogNum = VAR_3;
 VAR_1.dlightBits = 0;
 VAR_1.xstages = VAR_4->stages;
 VAR_1.numPasses = VAR_4->numUnfoggedPasses;
 VAR_1.currentStageIteratorFunc = VAR_4->optimalStageIteratorFunc;

 VAR_1.shaderTime = VAR_0.refdef.floatTime - VAR_1.shader->timeOffset;
 if (VAR_1.shader->clampTime && VAR_1.shaderTime >= VAR_1.shader->clampTime) {
  VAR_1.shaderTime = VAR_1.shader->clampTime;
 }


}
