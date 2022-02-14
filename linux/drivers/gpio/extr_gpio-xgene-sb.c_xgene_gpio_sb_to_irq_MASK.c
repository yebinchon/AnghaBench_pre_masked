
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct xgene_gpio_sb {scalar_t__ irq_start; int nirq; } ;
struct irq_fwspec {int param_count; int * param; int fwnode; } ;
struct gpio_chip {TYPE_1__* parent; } ;
struct TYPE_2__ {int fwnode; } ;


 int VAR_0 ;
 int FUNC_0 (struct xgene_gpio_sb*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct xgene_gpio_sb*,int ) ;
 int VAR_1 ;
 struct xgene_gpio_sb* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (struct irq_fwspec*) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_2, u32 VAR_3)
{
 struct xgene_gpio_sb *VAR_4 = FUNC_2(VAR_2);
 struct irq_fwspec VAR_5;

 if ((VAR_3 < VAR_4->irq_start) ||
   (VAR_3 > FUNC_1(VAR_4, VAR_4->nirq)))
  return -VAR_0;

 VAR_5.fwnode = VAR_2->parent->fwnode;
 VAR_5.param_count = 2;
 VAR_5.param[0] = FUNC_0(VAR_4, VAR_3);
 VAR_5.param[1] = VAR_1;
 return FUNC_3(&VAR_5);
}
