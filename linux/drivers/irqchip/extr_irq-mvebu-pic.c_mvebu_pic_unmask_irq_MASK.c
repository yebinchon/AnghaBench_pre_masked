
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvebu_pic {scalar_t__ base; } ;
struct irq_data {int hwirq; } ;


 scalar_t__ VAR_0 ;
 struct mvebu_pic* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_1)
{
 struct mvebu_pic *VAR_2 = FUNC_0(VAR_1);
 u32 VAR_3;

 VAR_3 = FUNC_1(VAR_2->base + VAR_0);
 VAR_3 &= ~(1 << VAR_1->hwirq);
 FUNC_2(VAR_3, VAR_2->base + VAR_0);
}
