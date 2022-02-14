
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stp_policy {struct stm_device* stm; } ;
struct stm_device {int pdrv; int * policy; int policy_mutex; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct stm_device*) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct stp_policy *VAR_0)
{
 struct stm_device *VAR_1 = VAR_0->stm;






 if (FUNC_0(!VAR_0->stm))
  return;

 FUNC_1(&VAR_1->policy_mutex);

 VAR_1->policy = ((void*)0);
 VAR_0->stm = ((void*)0);

 FUNC_3(VAR_1->pdrv);
 FUNC_2(VAR_1);
}
