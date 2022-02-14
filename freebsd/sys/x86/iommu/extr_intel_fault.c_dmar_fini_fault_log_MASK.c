
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_unit {scalar_t__ fault_log_tail; scalar_t__ fault_log_head; int * fault_log; int fault_lock; int * fault_taskqueue; int fault_task; } ;


 int FUNC_0 (struct dmar_unit*) ;
 int FUNC_1 (struct dmar_unit*) ;
 int VAR_0 ;
 int FUNC_2 (struct dmar_unit*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(struct dmar_unit *VAR_1)
{

 if (VAR_1->fault_taskqueue == ((void*)0))
  return;

 FUNC_0(VAR_1);
 FUNC_2(VAR_1);
 FUNC_1(VAR_1);

 FUNC_5(VAR_1->fault_taskqueue, &VAR_1->fault_task);
 FUNC_6(VAR_1->fault_taskqueue);
 VAR_1->fault_taskqueue = ((void*)0);
 FUNC_4(&VAR_1->fault_lock);

 FUNC_3(VAR_1->fault_log, VAR_0);
 VAR_1->fault_log = ((void*)0);
 VAR_1->fault_log_head = VAR_1->fault_log_tail = 0;
}
