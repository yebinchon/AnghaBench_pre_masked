
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_dcu_drm_device {int regmap; TYPE_1__* soc; } ;
struct drm_device {struct fsl_dcu_drm_device* dev_private; } ;
struct TYPE_2__ {int total_layer; int layer_regs; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,int ) ;

void FUNC_2(struct drm_device *VAR_0)
{
 struct fsl_dcu_drm_device *VAR_1 = VAR_0->dev_private;
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->soc->total_layer; VAR_2++) {
  for (VAR_3 = 1; VAR_3 <= VAR_1->soc->layer_regs; VAR_3++)
   FUNC_1(VAR_1->regmap, FUNC_0(VAR_2, VAR_3), 0);
 }
}
