
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int hwirq; } ;
struct hlwd_gpio {scalar_t__ regs; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 struct hlwd_gpio* FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct irq_data*) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_1)
{
 struct hlwd_gpio *VAR_2 =
  FUNC_1(FUNC_3(VAR_1));

 FUNC_2(FUNC_0(VAR_1->hwirq), VAR_2->regs + VAR_0);
}
