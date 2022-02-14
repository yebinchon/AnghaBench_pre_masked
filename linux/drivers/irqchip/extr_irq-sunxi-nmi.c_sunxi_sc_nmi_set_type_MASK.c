
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct irq_data {int irq; } ;
struct TYPE_2__ {unsigned int type; } ;
struct irq_chip_type {unsigned int type; TYPE_1__ regs; } ;
struct irq_chip_generic {unsigned int num_ct; struct irq_chip_type* chip_types; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;





 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 struct irq_chip_generic* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct irq_chip_generic*) ;
 int FUNC_2 (struct irq_chip_generic*) ;
 int FUNC_3 (struct irq_data*,unsigned int) ;
 int FUNC_4 (struct irq_data*,unsigned int) ;
 int FUNC_5 (char*,int ) ;
 unsigned int FUNC_6 (struct irq_chip_generic*,unsigned int) ;
 int FUNC_7 (struct irq_chip_generic*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct irq_data *VAR_8, unsigned int VAR_9)
{
 struct irq_chip_generic *VAR_10 = FUNC_0(VAR_8);
 struct irq_chip_type *VAR_11 = VAR_10->chip_types;
 u32 VAR_12;
 u32 VAR_13 = VAR_11->regs.type;
 unsigned int VAR_14;
 unsigned int VAR_15;

 FUNC_1(VAR_10);

 switch (VAR_9 & VAR_1) {
 case 132:
  VAR_14 = VAR_4;
  break;
 case 131:
  VAR_14 = VAR_5;
  break;
 case 130:
  VAR_14 = VAR_6;
  break;
 case 128:
 case 129:
  VAR_14 = VAR_7;
  break;
 default:
  FUNC_2(VAR_10);
  FUNC_5("Cannot assign multiple trigger modes to IRQ %d.\n",
   VAR_8->irq);
  return -VAR_0;
 }

 FUNC_4(VAR_8, VAR_9);
 FUNC_3(VAR_8, VAR_9);

 for (VAR_15 = 0; VAR_15 < VAR_10->num_ct; VAR_15++, VAR_11++)
  if (VAR_11->type & VAR_9)
   VAR_13 = VAR_11->regs.type;

 VAR_12 = FUNC_6(VAR_10, VAR_13);
 VAR_12 &= ~VAR_3;
 VAR_12 |= VAR_14;
 FUNC_7(VAR_10, VAR_13, VAR_12);

 FUNC_2(VAR_10);

 return VAR_2;
}
