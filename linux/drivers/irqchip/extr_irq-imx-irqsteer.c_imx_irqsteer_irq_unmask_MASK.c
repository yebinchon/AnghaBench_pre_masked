
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irqsteer_data {int lock; int reg_num; scalar_t__ regs; } ;
struct irq_data {int hwirq; struct irqsteer_data* chip_data; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (struct irqsteer_data*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct irq_data *VAR_0)
{
 struct irqsteer_data *VAR_1 = VAR_0->chip_data;
 int VAR_2 = FUNC_2(VAR_1, VAR_0->hwirq);
 unsigned long VAR_3;
 u32 VAR_4;

 FUNC_3(&VAR_1->lock, VAR_3);
 VAR_4 = FUNC_5(VAR_1->regs + FUNC_1(VAR_2, VAR_1->reg_num));
 VAR_4 |= FUNC_0(VAR_0->hwirq % 32);
 FUNC_6(VAR_4, VAR_1->regs + FUNC_1(VAR_2, VAR_1->reg_num));
 FUNC_4(&VAR_1->lock, VAR_3);
}
