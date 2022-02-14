
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc32xx_irq_chip {int dummy; } ;
struct irq_data {int hwirq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct lpc32xx_irq_chip* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct lpc32xx_irq_chip*,int ) ;
 int FUNC_3 (struct lpc32xx_irq_chip*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_1)
{
 struct lpc32xx_irq_chip *VAR_2 = FUNC_1(VAR_1);
 u32 VAR_3, VAR_4 = FUNC_0(VAR_1->hwirq);

 VAR_3 = FUNC_2(VAR_2, VAR_0) & ~VAR_4;
 FUNC_3(VAR_2, VAR_0, VAR_3);
}
