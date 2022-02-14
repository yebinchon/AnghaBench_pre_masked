
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct guc_policy {scalar_t__ policy_flags; int fault_time; int preemption_time; int execution_quantum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct guc_policy *VAR_3)
{
 VAR_3->execution_quantum = VAR_0;
 VAR_3->preemption_time = VAR_2;
 VAR_3->fault_time = VAR_1;
 VAR_3->policy_flags = 0;
}
