
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_desc {int dummy; } ;
struct fpga_irq_data {int domain; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct irq_desc*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 struct fpga_irq_data* FUNC_3 (struct irq_desc*) ;
 int FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct irq_desc *VAR_1)
{
 struct fpga_irq_data *VAR_2 = FUNC_3(VAR_1);
 u32 VAR_3 = FUNC_5(VAR_2->base + VAR_0);

 if (VAR_3 == 0) {
  FUNC_0(VAR_1);
  return;
 }

 do {
  unsigned int VAR_4 = FUNC_1(VAR_3) - 1;

  VAR_3 &= ~(1 << VAR_4);
  FUNC_2(FUNC_4(VAR_2->domain, VAR_4));
 } while (VAR_3);
}
