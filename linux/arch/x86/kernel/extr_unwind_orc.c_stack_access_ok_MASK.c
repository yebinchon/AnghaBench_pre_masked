
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack_info {int dummy; } ;
struct unwind_state {int stack_mask; int task; struct stack_info stack_info; } ;


 scalar_t__ FUNC_0 (void*,int ,struct stack_info*,int *) ;
 int FUNC_1 (struct stack_info*,void*,size_t) ;

__attribute__((used)) static bool FUNC_2(struct unwind_state *VAR_0, unsigned long VAR_1,
       size_t VAR_2)
{
 struct stack_info *VAR_3 = &VAR_0->stack_info;
 void *VAR_4 = (void *)VAR_1;

 if (!FUNC_1(VAR_3, VAR_4, VAR_2) &&
     (FUNC_0(VAR_4, VAR_0->task, VAR_3, &VAR_0->stack_mask)))
  return 0;

 return 1;
}
