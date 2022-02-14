
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct reg_window32 {int * locals; } ;
struct reg_window {unsigned long* locals; } ;
struct pt_regs {unsigned long* u_regs; int tstate; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (unsigned long) ;

__attribute__((used)) static unsigned long *FUNC_1(unsigned int VAR_3, struct pt_regs *VAR_4)
{
 unsigned long VAR_5;

 if (VAR_3 < 16)
  return &VAR_4->u_regs[VAR_3];

 VAR_5 = VAR_4->u_regs[VAR_2];

 if (VAR_4->tstate & VAR_1) {
  struct reg_window *VAR_6;
  VAR_6 = (struct reg_window *)(VAR_5 + VAR_0);
  return &VAR_6->locals[VAR_3 - 16];
 } else if (!FUNC_0(VAR_5)) {
  struct reg_window32 *VAR_7;
  VAR_7 = (struct reg_window32 *)((unsigned long)((u32)VAR_5));
  return (unsigned long *)&VAR_7->locals[VAR_3 - 16];
 } else {
  struct reg_window *VAR_8;
  VAR_8 = (struct reg_window *)(VAR_5 + VAR_0);
  return &VAR_8->locals[VAR_3 - 16];
 }
}
