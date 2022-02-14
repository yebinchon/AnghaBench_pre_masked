
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callout_run {int index; int co_number_callouts; int co_return_npa; int co_completed; int drain_calls; int cnt_zero; int cnt_one; } ;


 int FUNC_0 (char*,int,...) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
 struct callout_run *VAR_1;

 VAR_1 = (struct callout_run *)VAR_0;
 FUNC_0("The callout test is now complete for thread %d\n",
     VAR_1->index);
 FUNC_0("number_callouts:%d\n",
     VAR_1->co_number_callouts);
 FUNC_0("Callouts that bailed (Not PENDING or ACTIVE cleared):%d\n",
     VAR_1->co_return_npa);
 FUNC_0("Callouts that completed:%d\n", VAR_1->co_completed);
 FUNC_0("Drain calls:%d\n", VAR_1->drain_calls);
 FUNC_0("Zero returns:%d non-zero:%d\n",
     VAR_1->cnt_zero,
     VAR_1->cnt_one);

}
