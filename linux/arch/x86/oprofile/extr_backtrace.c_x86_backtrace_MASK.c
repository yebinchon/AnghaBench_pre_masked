
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unwind_state {int dummy; } ;
struct stack_frame {int dummy; } ;
struct pt_regs {unsigned long ip; } ;


 int VAR_0 ;
 struct stack_frame* FUNC_0 (struct stack_frame*) ;
 scalar_t__ FUNC_1 (struct pt_regs* const) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct unwind_state*) ;
 unsigned long FUNC_4 (struct unwind_state*) ;
 int FUNC_5 (struct unwind_state*) ;
 int FUNC_6 (struct unwind_state*,int ,struct pt_regs* const,int *) ;
 int FUNC_7 (struct pt_regs* const) ;
 scalar_t__ FUNC_8 (struct pt_regs* const,unsigned int) ;

void
FUNC_9(struct pt_regs * const VAR_1, unsigned int VAR_2)
{
 struct stack_frame *VAR_3 = (struct stack_frame *)FUNC_1(VAR_1);

 if (!FUNC_7(VAR_1)) {
  struct unwind_state VAR_4;
  unsigned long VAR_5;

  if (!VAR_2)
   return;

  FUNC_2(VAR_1->ip);

  if (!--VAR_2)
   return;

  for (FUNC_6(&VAR_4, VAR_0, VAR_1, ((void*)0));
       !FUNC_3(&VAR_4); FUNC_5(&VAR_4)) {
   VAR_5 = FUNC_4(&VAR_4);
   if (!VAR_5)
    break;

   FUNC_2(VAR_5);

   if (!--VAR_2)
    break;
  }

  return;
 }

 if (FUNC_8(VAR_1, VAR_2))
  return;

 while (VAR_2-- && VAR_3)
  VAR_3 = FUNC_0(VAR_3);
}
