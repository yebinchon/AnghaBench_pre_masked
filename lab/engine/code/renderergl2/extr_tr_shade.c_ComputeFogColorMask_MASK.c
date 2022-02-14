
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef float* vec4_t ;
struct TYPE_3__ {int adjustColorsForFog; } ;
typedef TYPE_1__ shaderStage_t ;






__attribute__((used)) static void FUNC_0( shaderStage_t *VAR_0, vec4_t VAR_1 )
{
 switch(VAR_0->adjustColorsForFog)
 {
  case 129:
   VAR_1[0] =
   VAR_1[1] =
   VAR_1[2] = 1.0f;
   VAR_1[3] = 0.0f;
   break;
  case 130:
   VAR_1[0] =
   VAR_1[1] =
   VAR_1[2] = 0.0f;
   VAR_1[3] = 1.0f;
   break;
  case 128:
   VAR_1[0] =
   VAR_1[1] =
   VAR_1[2] =
   VAR_1[3] = 1.0f;
   break;
  default:
   VAR_1[0] =
   VAR_1[1] =
   VAR_1[2] =
   VAR_1[3] = 0.0f;
   break;
 }
}
