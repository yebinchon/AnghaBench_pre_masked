
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack_info {int dummy; } ;
struct unwind_state {unsigned long stack_mask; int task; struct stack_info stack_info; } ;
struct stack_frame {int dummy; } ;


 scalar_t__ FUNC_0 (unsigned long,int ,struct stack_info*,unsigned long*) ;
 int FUNC_1 (struct stack_info*,unsigned long,int) ;

__attribute__((used)) static bool FUNC_2(struct unwind_state *VAR_0, unsigned long VAR_1)
{
 struct stack_info *VAR_2 = &VAR_0->stack_info;
 unsigned long *VAR_3 = &VAR_0->stack_mask;


 if (FUNC_0(VAR_1, VAR_0->task, VAR_2, VAR_3) != 0 ||
     !FUNC_1(VAR_2, VAR_1, sizeof(struct stack_frame)))

  return 0;
 return 1;
}
