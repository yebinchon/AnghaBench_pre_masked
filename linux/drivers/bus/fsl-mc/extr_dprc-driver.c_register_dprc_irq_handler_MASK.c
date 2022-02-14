
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_mc_device_irq {TYPE_1__* msi_desc; } ;
struct fsl_mc_device {int dev; struct fsl_mc_device_irq** irqs; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int ,int,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct fsl_mc_device *VAR_4)
{
 int VAR_5;
 struct fsl_mc_device_irq *VAR_6 = VAR_4->irqs[0];





 VAR_5 = FUNC_2(&VAR_4->dev,
       VAR_6->msi_desc->irq,
       VAR_2,
       VAR_3,
       VAR_0 | VAR_1,
       FUNC_1(&VAR_4->dev),
       &VAR_4->dev);
 if (VAR_5 < 0) {
  FUNC_0(&VAR_4->dev,
   "devm_request_threaded_irq() failed: %d\n",
   VAR_5);
  return VAR_5;
 }

 return 0;
}
