
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvebu_sei {scalar_t__ base; } ;
struct irq_data {int hwirq; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct mvebu_sei* FUNC_4 (struct irq_data*) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct irq_data *VAR_0)
{
 struct mvebu_sei *VAR_1 = FUNC_4(VAR_0);
 u32 VAR_2 = FUNC_3(VAR_0->hwirq);

 FUNC_5(FUNC_0(FUNC_2(VAR_0->hwirq)),
         VAR_1->base + FUNC_1(VAR_2));
}
