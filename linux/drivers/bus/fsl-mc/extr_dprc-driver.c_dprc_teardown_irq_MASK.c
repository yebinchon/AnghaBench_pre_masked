
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_mc_device_irq {TYPE_1__* msi_desc; } ;
struct fsl_mc_device {int dev; struct fsl_mc_device_irq** irqs; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (struct fsl_mc_device*) ;
 int FUNC_2 (struct fsl_mc_device*) ;

__attribute__((used)) static void FUNC_3(struct fsl_mc_device *VAR_0)
{
 struct fsl_mc_device_irq *VAR_1 = VAR_0->irqs[0];

 (void)FUNC_1(VAR_0);

 FUNC_0(&VAR_0->dev, VAR_1->msi_desc->irq, &VAR_0->dev);

 FUNC_2(VAR_0);
}
