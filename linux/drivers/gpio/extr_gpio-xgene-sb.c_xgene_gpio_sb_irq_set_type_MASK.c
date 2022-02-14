
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_gpio_sb {scalar_t__ regs; int gc; } ;
struct irq_data {int hwirq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xgene_gpio_sb*,int) ;
 unsigned int VAR_2 ;




 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct irq_data*,int const) ;
 struct xgene_gpio_sb* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (int *,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_4(struct irq_data *VAR_6, unsigned int VAR_7)
{
 struct xgene_gpio_sb *VAR_8 = FUNC_2(VAR_6);
 int VAR_9 = FUNC_0(VAR_8, VAR_6->hwirq);
 int VAR_10 = VAR_0;

 switch (VAR_7 & VAR_3) {
 case 130:
 case 129:
  VAR_10 = VAR_0;
  break;
 case 131:
 case 128:
  VAR_10 = VAR_1;
  break;
 default:
  break;
 }

 FUNC_3(&VAR_8->gc, VAR_8->regs + VAR_5,
   VAR_9 * 2, 1);
 FUNC_3(&VAR_8->gc, VAR_8->regs + VAR_4,
   VAR_6->hwirq, VAR_10);


 if (VAR_7 & VAR_2)
  return FUNC_1(VAR_6, 130);
 else
  return FUNC_1(VAR_6, 129);
}
