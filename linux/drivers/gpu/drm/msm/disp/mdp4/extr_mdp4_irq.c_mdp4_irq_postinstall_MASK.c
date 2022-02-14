
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_kms {int dummy; } ;
struct mdp_kms {int dummy; } ;
struct mdp_irq {int irqmask; int irq; } ;
struct mdp4_kms {struct mdp_irq error_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mdp_kms*,struct mdp_irq*) ;
 struct mdp4_kms* FUNC_1 (struct mdp_kms*) ;
 struct mdp_kms* FUNC_2 (struct msm_kms*) ;

int FUNC_3(struct msm_kms *VAR_3)
{
 struct mdp_kms *VAR_4 = FUNC_2(VAR_3);
 struct mdp4_kms *VAR_5 = FUNC_1(VAR_4);
 struct mdp_irq *VAR_6 = &VAR_5->error_handler;

 VAR_6->irq = VAR_2;
 VAR_6->irqmask = VAR_1 |
   VAR_0;

 FUNC_0(VAR_4, VAR_6);

 return 0;
}
