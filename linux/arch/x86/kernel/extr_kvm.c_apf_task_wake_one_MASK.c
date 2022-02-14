
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_task_sleep_node {int wq; int cpu; scalar_t__ halted; int link; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct kvm_task_sleep_node *VAR_0)
{
 FUNC_0(&VAR_0->link);
 if (VAR_0->halted)
  FUNC_1(VAR_0->cpu);
 else if (FUNC_3(&VAR_0->wq))
  FUNC_2(&VAR_0->wq);
}
