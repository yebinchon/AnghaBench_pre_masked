
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msi_msg {int dummy; } ;
struct TYPE_2__ {size_t msi_index; } ;
struct msi_desc {struct msi_msg msg; TYPE_1__ fsl_mc; int dev; } ;
struct irq_data {int dummy; } ;
struct fsl_mc_device_irq {int dummy; } ;
struct fsl_mc_device {int dummy; } ;
struct fsl_mc_bus {struct fsl_mc_device_irq* irq_resources; } ;


 int FUNC_0 (struct fsl_mc_device*,struct fsl_mc_device_irq*) ;
 struct msi_desc* FUNC_1 (struct irq_data*) ;
 struct fsl_mc_bus* FUNC_2 (struct fsl_mc_device*) ;
 struct fsl_mc_device* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_0,
     struct msi_msg *VAR_1)
{
 struct msi_desc *VAR_2 = FUNC_1(VAR_0);
 struct fsl_mc_device *VAR_3 = FUNC_3(VAR_2->dev);
 struct fsl_mc_bus *VAR_4 = FUNC_2(VAR_3);
 struct fsl_mc_device_irq *VAR_5 =
  &VAR_4->irq_resources[VAR_2->fsl_mc.msi_index];

 VAR_2->msg = *VAR_1;




 FUNC_0(VAR_3, VAR_5);
}
