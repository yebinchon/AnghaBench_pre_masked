
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cec_adapter {int is_configuring; int lock; int config_completion; int * kthread_config; int name; scalar_t__ is_configured; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,struct cec_adapter*,char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct cec_adapter *VAR_1, bool VAR_2)
{
 if (FUNC_1(VAR_1->is_configuring || VAR_1->is_configured))
  return;

 FUNC_2(&VAR_1->config_completion);


 VAR_1->is_configuring = 1;
 VAR_1->kthread_config = FUNC_3(VAR_0, VAR_1,
        "ceccfg-%s", VAR_1->name);
 if (FUNC_0(VAR_1->kthread_config)) {
  VAR_1->kthread_config = ((void*)0);
 } else if (VAR_2) {
  FUNC_5(&VAR_1->lock);
  FUNC_6(&VAR_1->config_completion);
  FUNC_4(&VAR_1->lock);
 }
}
