
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zynq_gpio {scalar_t__ base_addr; } ;
struct irq_data {unsigned int hwirq; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 struct zynq_gpio* FUNC_2 (int ) ;
 int FUNC_3 (struct irq_data*) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (unsigned int,unsigned int*,unsigned int*,struct zynq_gpio*) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_0)
{
 unsigned int VAR_1, VAR_2, VAR_3;
 struct zynq_gpio *VAR_4 =
  FUNC_2(FUNC_3(VAR_0));

 VAR_1 = VAR_0->hwirq;
 FUNC_5(VAR_1, &VAR_2, &VAR_3, VAR_4);
 FUNC_4(FUNC_0(VAR_3),
         VAR_4->base_addr + FUNC_1(VAR_2));
}
