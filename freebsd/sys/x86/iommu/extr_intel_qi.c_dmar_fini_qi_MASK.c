
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_unit {scalar_t__ inv_seq_waiters; scalar_t__ qi_enabled; scalar_t__ inv_queue_size; scalar_t__ inv_queue; int unit; int * qi_taskqueue; int qi_task; } ;
struct dmar_qi_genseq {int dummy; } ;


 int FUNC_0 (struct dmar_unit*) ;
 int FUNC_1 (struct dmar_unit*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct dmar_unit*) ;
 int FUNC_4 (struct dmar_unit*) ;
 int FUNC_5 (struct dmar_unit*) ;
 int FUNC_6 (struct dmar_unit*,struct dmar_qi_genseq*,int) ;
 int FUNC_7 (struct dmar_unit*,int) ;
 int FUNC_8 (struct dmar_unit*,struct dmar_qi_genseq*,int) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;

void
FUNC_12(struct dmar_unit *VAR_0)
{
 struct dmar_qi_genseq VAR_1;

 if (!VAR_0->qi_enabled)
  return;
 FUNC_10(VAR_0->qi_taskqueue, &VAR_0->qi_task);
 FUNC_11(VAR_0->qi_taskqueue);
 VAR_0->qi_taskqueue = ((void*)0);

 FUNC_0(VAR_0);

 FUNC_7(VAR_0, 1);
 FUNC_6(VAR_0, &VAR_1, 1);
 FUNC_5(VAR_0);
 FUNC_8(VAR_0, &VAR_1, 0);

 FUNC_4(VAR_0);
 FUNC_3(VAR_0);
 FUNC_2(VAR_0->inv_seq_waiters == 0,
     ("dmar%d: waiters on disabled queue", VAR_0->unit));
 FUNC_1(VAR_0);

 FUNC_9(VAR_0->inv_queue, VAR_0->inv_queue_size);
 VAR_0->inv_queue = 0;
 VAR_0->inv_queue_size = 0;
 VAR_0->qi_enabled = 0;
}
