
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mxc_gpio_port {scalar_t__ base; } ;
struct irq_desc {int dummy; } ;
struct irq_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_1 (struct irq_chip*,struct irq_desc*) ;
 struct irq_chip* FUNC_2 (struct irq_desc*) ;
 struct mxc_gpio_port* FUNC_3 (struct irq_desc*) ;
 int FUNC_4 (struct mxc_gpio_port*,int) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct irq_desc *VAR_2)
{
 u32 VAR_3;
 struct mxc_gpio_port *VAR_4 = FUNC_3(VAR_2);
 struct irq_chip *VAR_5 = FUNC_2(VAR_2);

 FUNC_0(VAR_5, VAR_2);

 VAR_3 = FUNC_5(VAR_4->base + VAR_1) & FUNC_5(VAR_4->base + VAR_0);

 FUNC_4(VAR_4, VAR_3);

 FUNC_1(VAR_5, VAR_2);
}
