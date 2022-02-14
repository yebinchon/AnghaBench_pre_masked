
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;
struct fpga_irq {unsigned int base; unsigned short mask; int sraddr; } ;


 unsigned short FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 struct fpga_irq FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (struct irq_desc*) ;

__attribute__((used)) static void FUNC_4(struct irq_desc *VAR_0)
{
 unsigned int VAR_1 = FUNC_3(VAR_0);
 struct fpga_irq VAR_2 = FUNC_2(VAR_1);
 unsigned short VAR_3 = FUNC_0(VAR_2.sraddr);
 unsigned int VAR_4 = VAR_2.base;

 VAR_3 &= VAR_2.mask;

 for (; VAR_3; VAR_3 >>= 1, VAR_4++) {
  if (!(VAR_3 & 1))
   continue;

  FUNC_1(VAR_4);
 }
}
