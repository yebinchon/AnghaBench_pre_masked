
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unwind_frame_info {int dummy; } ;
struct task_struct {int dummy; } ;
struct pt_regs {int dummy; } ;


 int FUNC_0 (struct unwind_frame_info*) ;
 int FUNC_1 (struct unwind_frame_info*,struct task_struct*,struct pt_regs*) ;

__attribute__((used)) static void FUNC_2(struct task_struct *VAR_0,
 struct pt_regs *VAR_1)
{
 struct unwind_frame_info VAR_2;

 FUNC_1(&VAR_2, VAR_0, VAR_1);

 FUNC_0(&VAR_2);
}
