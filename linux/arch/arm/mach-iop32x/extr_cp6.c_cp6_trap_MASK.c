
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_regs {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct pt_regs *VAR_0, unsigned int VAR_1)
{
 u32 VAR_2;


        asm volatile (
  "mrc	p15, 0, %0, c15, c1, 0\n\t"
  "orr	%0, %0, #(1 << 6)\n\t"
  "mcr	p15, 0, %0, c15, c1, 0\n\t"
  : "=r"(VAR_2));

 return 0;
}
