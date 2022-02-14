
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_kms {int dummy; } ;
struct mdp_kms {int dummy; } ;
struct mdp_irq {int irqmask; int irq; } ;
struct mdp5_kms {struct mdp_irq error_handler; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mdp_kms*,struct mdp_irq*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 struct mdp5_kms* FUNC_3 (struct mdp_kms*) ;
 struct mdp_kms* FUNC_4 (struct msm_kms*) ;

int FUNC_5(struct msm_kms *VAR_5)
{
 struct mdp_kms *VAR_6 = FUNC_4(VAR_5);
 struct mdp5_kms *VAR_7 = FUNC_3(VAR_6);
 struct device *VAR_8 = &VAR_7->pdev->dev;
 struct mdp_irq *VAR_9 = &VAR_7->error_handler;

 VAR_9->irq = VAR_4;
 VAR_9->irqmask = VAR_0 |
   VAR_1 |
   VAR_2 |
   VAR_3;

 FUNC_1(VAR_8);
 FUNC_0(VAR_6, VAR_9);
 FUNC_2(VAR_8);

 return 0;
}
