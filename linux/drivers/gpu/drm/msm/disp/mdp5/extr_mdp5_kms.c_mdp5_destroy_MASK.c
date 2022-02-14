
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct mdp5_kms {int num_intfs; int glob_state_lock; int glob_state; scalar_t__ rpm_enabled; int * intfs; scalar_t__ cfg; scalar_t__ smp; scalar_t__ ctlm; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 struct mdp5_kms* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct platform_device *VAR_0)
{
 struct mdp5_kms *VAR_1 = FUNC_6(VAR_0);
 int VAR_2;

 if (VAR_1->ctlm)
  FUNC_4(VAR_1->ctlm);
 if (VAR_1->smp)
  FUNC_5(VAR_1->smp);
 if (VAR_1->cfg)
  FUNC_3(VAR_1->cfg);

 for (VAR_2 = 0; VAR_2 < VAR_1->num_intfs; VAR_2++)
  FUNC_2(VAR_1->intfs[VAR_2]);

 if (VAR_1->rpm_enabled)
  FUNC_7(&VAR_0->dev);

 FUNC_0(&VAR_1->glob_state);
 FUNC_1(&VAR_1->glob_state_lock);
}
