
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int parent; } ;
struct xgene_gpio_sb {scalar_t__ regs; TYPE_1__ gc; } ;
struct irq_domain {struct xgene_gpio_sb* host_data; } ;
struct irq_data {int hwirq; } ;


 int FUNC_0 (struct xgene_gpio_sb*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_4(struct irq_domain *VAR_1,
      struct irq_data *VAR_2,
      bool VAR_3)
{
 struct xgene_gpio_sb *VAR_4 = VAR_1->host_data;
 u32 VAR_5 = FUNC_0(VAR_4, VAR_2->hwirq);
 int VAR_6;

 VAR_6 = FUNC_2(&VAR_4->gc, VAR_5);
 if (VAR_6) {
  FUNC_1(VAR_4->gc.parent,
  "Unable to configure XGene GPIO standby pin %d as IRQ\n",
    VAR_5);
  return VAR_6;
 }

 FUNC_3(&VAR_4->gc, VAR_4->regs + VAR_0,
   VAR_5 * 2, 1);
 return 0;
}
