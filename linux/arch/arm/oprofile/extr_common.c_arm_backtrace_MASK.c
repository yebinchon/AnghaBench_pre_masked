
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stackframe {int dummy; } ;
struct pt_regs {scalar_t__ ARM_fp; } ;
struct frame_tail {int dummy; } ;


 int FUNC_0 (struct pt_regs* const,struct stackframe*) ;
 int VAR_0 ;
 struct frame_tail* FUNC_1 (struct frame_tail*) ;
 int FUNC_2 (struct pt_regs* const) ;
 int FUNC_3 (struct stackframe*,int ,unsigned int*) ;

__attribute__((used)) static void FUNC_4(struct pt_regs * const VAR_1, unsigned int VAR_2)
{
 struct frame_tail *VAR_3 = ((struct frame_tail *) VAR_1->ARM_fp) - 1;

 if (!FUNC_2(VAR_1)) {
  struct stackframe VAR_4;
  FUNC_0(VAR_1, &VAR_4);
  FUNC_3(&VAR_4, VAR_0, &VAR_2);
  return;
 }

 while (VAR_2-- && VAR_3 && !((unsigned long) VAR_3 & 3))
  VAR_3 = FUNC_1(VAR_3);
}
