
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int * vec5_t ;
struct TYPE_5__ {int func; int frequency; int phase; int amplitude; int base; } ;
struct TYPE_6__ {int deformation; int bulgeSpeed; int bulgeWidth; int bulgeHeight; int deformationSpread; TYPE_1__ deformationWave; } ;
typedef TYPE_2__ deformStage_t ;
struct TYPE_8__ {TYPE_2__* deforms; } ;
struct TYPE_7__ {TYPE_4__* shader; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static void FUNC_1(int *VAR_3, vec5_t VAR_4)
{

 *VAR_3 = VAR_1;
 if(!FUNC_0(VAR_2.shader))
 {
  deformStage_t *VAR_5;


  VAR_5 = &VAR_2.shader->deforms[0];

  switch (VAR_5->deformation)
  {
   case 128:
    *VAR_3 = VAR_5->deformationWave.func;

    VAR_4[0] = VAR_5->deformationWave.base;
    VAR_4[1] = VAR_5->deformationWave.amplitude;
    VAR_4[2] = VAR_5->deformationWave.phase;
    VAR_4[3] = VAR_5->deformationWave.frequency;
    VAR_4[4] = VAR_5->deformationSpread;
    break;

   case 129:
    *VAR_3 = VAR_0;

    VAR_4[0] = 0;
    VAR_4[1] = VAR_5->bulgeHeight;
    VAR_4[2] = VAR_5->bulgeWidth;
    VAR_4[3] = VAR_5->bulgeSpeed;
    VAR_4[4] = 0;
    break;

   default:
    break;
  }
 }
}
