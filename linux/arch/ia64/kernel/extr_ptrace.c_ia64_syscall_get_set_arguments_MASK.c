
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ufi ;
struct unw_frame_info {int dummy; } ;
struct task_struct {int dummy; } ;
struct syscall_get_set_args {int n; unsigned long* args; int rw; struct pt_regs* regs; int i; } ;
struct pt_regs {int dummy; } ;


 struct task_struct* VAR_0 ;
 int FUNC_0 (struct unw_frame_info*,int ,int) ;
 int FUNC_1 (struct unw_frame_info*,struct syscall_get_set_args*) ;
 int FUNC_2 (struct unw_frame_info*,struct task_struct*) ;
 int FUNC_3 (int (*) (struct unw_frame_info*,struct syscall_get_set_args*),struct syscall_get_set_args*) ;

void FUNC_4(struct task_struct *VAR_1,
 struct pt_regs *VAR_2, unsigned long *VAR_3, int VAR_4)
{
 struct syscall_get_set_args VAR_5 = {
  .i = 0,
  .n = 6,
  .args = VAR_3,
  .regs = VAR_2,
  .rw = VAR_4,
 };

 if (VAR_1 == VAR_0)
  FUNC_3(FUNC_1, &VAR_5);
 else {
  struct unw_frame_info VAR_6;
  FUNC_0(&VAR_6, 0, sizeof(VAR_6));
  FUNC_2(&VAR_6, VAR_1);
  FUNC_1(&VAR_6, &VAR_5);
 }
}
