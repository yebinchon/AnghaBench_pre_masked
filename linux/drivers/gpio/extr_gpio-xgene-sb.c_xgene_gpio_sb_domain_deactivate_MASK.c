
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_gpio_sb {scalar_t__ regs; int gc; } ;
struct irq_domain {struct xgene_gpio_sb* host_data; } ;
struct irq_data {int hwirq; } ;


 int FUNC_0 (struct xgene_gpio_sb*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,scalar_t__,int,int ) ;

__attribute__((used)) static void FUNC_3(struct irq_domain *VAR_1,
  struct irq_data *VAR_2)
{
 struct xgene_gpio_sb *VAR_3 = VAR_1->host_data;
 u32 VAR_4 = FUNC_0(VAR_3, VAR_2->hwirq);

 FUNC_1(&VAR_3->gc, VAR_4);
 FUNC_2(&VAR_3->gc, VAR_3->regs + VAR_0,
   VAR_4 * 2, 0);
}
