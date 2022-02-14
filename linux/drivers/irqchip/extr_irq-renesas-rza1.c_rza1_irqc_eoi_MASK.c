
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rza1_irqc_priv {scalar_t__ base; } ;
struct irq_data {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct irq_data*) ;
 struct rza1_irqc_priv* FUNC_3 (struct irq_data*) ;
 int FUNC_4 (struct irq_data*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct irq_data *VAR_2)
{
 struct rza1_irqc_priv *VAR_3 = FUNC_3(VAR_2);
 u16 VAR_4 = FUNC_0(FUNC_4(VAR_2));
 u16 VAR_5;

 VAR_5 = FUNC_5(VAR_3->base + VAR_1);
 if (VAR_5 & VAR_4)
  FUNC_6(FUNC_1(VAR_0 - 1, 0) & ~VAR_4,
          VAR_3->base + VAR_1);

 FUNC_2(VAR_2);
}
