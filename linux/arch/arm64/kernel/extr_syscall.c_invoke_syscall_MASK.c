
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int syscall_fn_t ;
struct pt_regs {long* regs; } ;


 long FUNC_0 (struct pt_regs*,int ) ;
 size_t FUNC_1 (unsigned int,unsigned int) ;
 long FUNC_2 (struct pt_regs*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct pt_regs *VAR_0, unsigned int VAR_1,
      unsigned int VAR_2,
      const syscall_fn_t VAR_3[])
{
 long VAR_4;

 if (VAR_1 < VAR_2) {
  syscall_fn_t VAR_5;
  VAR_5 = VAR_3[FUNC_1(VAR_1, VAR_2)];
  VAR_4 = FUNC_0(VAR_0, VAR_5);
 } else {
  VAR_4 = FUNC_2(VAR_0, VAR_1);
 }

 VAR_0->regs[0] = VAR_4;
}
