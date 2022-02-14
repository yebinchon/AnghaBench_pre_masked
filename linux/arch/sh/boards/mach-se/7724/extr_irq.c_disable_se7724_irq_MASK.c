
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {unsigned int irq; } ;
struct fpga_irq {unsigned int base; int mraddr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (unsigned int) ;
 struct fpga_irq FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_0)
{
 unsigned int VAR_1 = VAR_0->irq;
 struct fpga_irq VAR_2 = FUNC_3(FUNC_2(VAR_1));
 unsigned int VAR_3 = VAR_1 - VAR_2.base;
 FUNC_1(FUNC_0(VAR_2.mraddr) | 0x0001 << VAR_3, VAR_2.mraddr);
}
