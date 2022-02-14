
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct event_constraint {int dummy; } ;
struct cpu_hw_events {int * shared_regs; int * constraint_list; scalar_t__ excl_thread_id; int excl_cntrs; int pebs_record_size; } ;
struct TYPE_2__ {int flags; scalar_t__ lbr_sel_map; scalar_t__ extra_regs; int pebs_record_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (size_t,int ,int ) ;
 TYPE_1__ VAR_5 ;

int FUNC_5(struct cpu_hw_events *VAR_6, int VAR_7)
{
 VAR_6->pebs_record_size = VAR_5.pebs_record_size;

 if (VAR_5.extra_regs || VAR_5.lbr_sel_map) {
  VAR_6->shared_regs = FUNC_1(VAR_7);
  if (!VAR_6->shared_regs)
   goto err;
 }

 if (VAR_5.flags & (VAR_2 | VAR_3)) {
  size_t VAR_8 = VAR_4 * sizeof(struct event_constraint);

  VAR_6->constraint_list = FUNC_4(VAR_8, VAR_1, FUNC_2(VAR_7));
  if (!VAR_6->constraint_list)
   goto err_shared_regs;
 }

 if (VAR_5.flags & VAR_2) {
  VAR_6->excl_cntrs = FUNC_0(VAR_7);
  if (!VAR_6->excl_cntrs)
   goto err_constraint_list;

  VAR_6->excl_thread_id = 0;
 }

 return 0;

err_constraint_list:
 FUNC_3(VAR_6->constraint_list);
 VAR_6->constraint_list = ((void*)0);

err_shared_regs:
 FUNC_3(VAR_6->shared_regs);
 VAR_6->shared_regs = ((void*)0);

err:
 return -VAR_0;
}
