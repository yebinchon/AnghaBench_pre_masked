
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stp_policy {struct stm_device* stm; } ;
struct stm_device {int policy_mutex; } ;
struct config_item {int dummy; } ;


 int FUNC_0 (struct stp_policy*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct stp_policy*) ;
 struct stp_policy* FUNC_4 (struct config_item*) ;

__attribute__((used)) static void FUNC_5(struct config_item *VAR_0)
{
 struct stp_policy *VAR_1 = FUNC_4(VAR_0);
 struct stm_device *VAR_2 = VAR_1->stm;


 if (!VAR_2)
  return;

 FUNC_1(&VAR_2->policy_mutex);
 FUNC_3(VAR_1);
 FUNC_2(&VAR_2->policy_mutex);

 FUNC_0(VAR_1);
}
