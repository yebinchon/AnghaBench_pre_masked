
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long* uregs; unsigned long fp; unsigned long sp; } ;



__attribute__((used)) static inline unsigned long *FUNC_0(struct pt_regs *VAR_0, int VAR_1)
{

 if (VAR_1 >= 0 && VAR_1 <= 25)
  return &VAR_0->uregs[0] + VAR_1;
 else if (VAR_1 >= 28 && VAR_1 <= 30)
  return &VAR_0->fp + (VAR_1 - 28);
 else if (VAR_1 == 31)
  return &VAR_0->sp;
 else
  return ((void*)0);
}
