
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tangox_irq_chip {int dummy; } ;
struct irq_data {int irq; int mask; } ;
struct irq_chip_regs {scalar_t__ type; } ;
struct irq_chip_generic {TYPE_2__* chip_types; TYPE_1__* domain; } ;
struct TYPE_4__ {struct irq_chip_regs regs; } ;
struct TYPE_3__ {struct tangox_irq_chip* host_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;




 unsigned int VAR_5 ;
 int FUNC_0 (struct tangox_irq_chip*,scalar_t__,int ) ;
 struct irq_chip_generic* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct irq_data*,unsigned int) ;
 int FUNC_3 (char*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_4(struct irq_data *VAR_6, unsigned int VAR_7)
{
 struct irq_chip_generic *VAR_8 = FUNC_1(VAR_6);
 struct tangox_irq_chip *VAR_9 = VAR_8->domain->host_data;
 struct irq_chip_regs *VAR_10 = &VAR_8->chip_types[0].regs;

 switch (VAR_7 & VAR_5) {
 case 130:
  FUNC_0(VAR_9, VAR_10->type + VAR_3, VAR_6->mask);
  FUNC_0(VAR_9, VAR_10->type + VAR_0, VAR_6->mask);
  break;

 case 131:
  FUNC_0(VAR_9, VAR_10->type + VAR_2, VAR_6->mask);
  FUNC_0(VAR_9, VAR_10->type + VAR_1, VAR_6->mask);
  break;

 case 129:
  FUNC_0(VAR_9, VAR_10->type + VAR_2, VAR_6->mask);
  FUNC_0(VAR_9, VAR_10->type + VAR_0, VAR_6->mask);
  break;

 case 128:
  FUNC_0(VAR_9, VAR_10->type + VAR_3, VAR_6->mask);
  FUNC_0(VAR_9, VAR_10->type + VAR_1, VAR_6->mask);
  break;

 default:
  FUNC_3("Invalid trigger mode %x for IRQ %d\n",
         VAR_7, VAR_6->irq);
  return -VAR_4;
 }

 return FUNC_2(VAR_6, VAR_7);
}
