
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int rgbGen; int alphaGen; TYPE_1__* bundle; scalar_t__ adjustColorsForFog; } ;
typedef TYPE_2__ shaderStage_t ;
typedef int shaderProgram_t ;
struct TYPE_12__ {scalar_t__ numDeforms; } ;
struct TYPE_11__ {scalar_t__ boneAnimation; scalar_t__ vertexAnimation; } ;
struct TYPE_10__ {TYPE_6__* shader; scalar_t__ fogNum; TYPE_2__** xstages; } ;
struct TYPE_9__ {int * genericShader; } ;
struct TYPE_7__ {scalar_t__ tcGen; scalar_t__ numTexMods; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_6__*) ;
 scalar_t__ VAR_6 ;
 TYPE_5__ VAR_7 ;
 TYPE_4__ VAR_8 ;
 TYPE_3__ VAR_9 ;

shaderProgram_t *FUNC_1(int VAR_10)
{
 shaderStage_t *VAR_11 = VAR_8.xstages[VAR_10];
 int VAR_12 = 0;

 if (VAR_8.fogNum && VAR_11->adjustColorsForFog)
 {
  VAR_12 |= VAR_2;
 }

 switch (VAR_11->rgbGen)
 {
  case 128:
   VAR_12 |= VAR_3;
   break;
  default:
   break;
 }

 switch (VAR_11->alphaGen)
 {
  case 130:
  case 129:
   VAR_12 |= VAR_3;
   break;
  default:
   break;
 }

 if (VAR_11->bundle[0].tcGen != VAR_6)
 {
  VAR_12 |= VAR_4;
 }

 if (VAR_8.shader->numDeforms && !FUNC_0(VAR_8.shader))
 {
  VAR_12 |= VAR_1;
 }

 if (VAR_7.vertexAnimation)
 {
  VAR_12 |= VAR_5;
 }
 else if (VAR_7.boneAnimation)
 {
  VAR_12 |= VAR_0;
 }

 if (VAR_11->bundle[0].numTexMods)
 {
  VAR_12 |= VAR_4;
 }

 return &VAR_9.genericShader[VAR_12];
}
