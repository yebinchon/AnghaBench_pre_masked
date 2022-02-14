
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct irq_chip {int * irq_set_wake; } ;
struct gpio_irq_chip {int num_parents; int first; int * parents; int default_type; int handler; struct irq_chip* chip; } ;
struct TYPE_7__ {char* label; int base; int * parent; struct gpio_irq_chip irq; scalar_t__ ngpio; int set_multiple; int set; int set_config; int direction_output; int get_multiple; int get; int direction_input; int get_direction; int free; int request; } ;
struct gpio_bank {scalar_t__ width; scalar_t__ is_mpuio; TYPE_3__ chip; int irq; TYPE_1__* regs; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {scalar_t__ wkup_en; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int ,scalar_t__,int ) ;
 char* FUNC_4 (int *,int ,char*,int,scalar_t__) ;
 int FUNC_5 (int *,int ,int ,int ,int ,struct gpio_bank*) ;
 int FUNC_6 (TYPE_3__*,struct gpio_bank*) ;
 int FUNC_7 (TYPE_3__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_2__ VAR_16 ;

__attribute__((used)) static int FUNC_8(struct gpio_bank *VAR_17, struct irq_chip *VAR_18)
{
 struct gpio_irq_chip *VAR_19;
 static int VAR_20;
 const char *VAR_21;
 int VAR_22 = 0;
 int VAR_23;





 VAR_17->chip.request = VAR_12;
 VAR_17->chip.free = VAR_5;
 VAR_17->chip.get_direction = VAR_7;
 VAR_17->chip.direction_input = VAR_9;
 VAR_17->chip.get = VAR_6;
 VAR_17->chip.get_multiple = VAR_8;
 VAR_17->chip.direction_output = VAR_11;
 VAR_17->chip.set_config = VAR_14;
 VAR_17->chip.set = VAR_13;
 VAR_17->chip.set_multiple = VAR_15;
 if (VAR_17->is_mpuio) {
  VAR_17->chip.label = "mpuio";
  if (VAR_17->regs->wkup_en)
   VAR_17->chip.parent = &VAR_16.dev;
  VAR_17->chip.base = FUNC_0(0);
 } else {
  VAR_21 = FUNC_4(VAR_17->chip.parent, VAR_2, "gpio-%d-%d",
           VAR_20, VAR_20 + VAR_17->width - 1);
  if (!VAR_21)
   return -VAR_1;
  VAR_17->chip.label = VAR_21;
  VAR_17->chip.base = VAR_20;
 }
 VAR_17->chip.ngpio = VAR_17->width;
 if (VAR_17->is_mpuio && !VAR_17->regs->wkup_en)
  VAR_18->irq_set_wake = ((void*)0);

 VAR_19 = &VAR_17->chip.irq;
 VAR_19->chip = VAR_18;
 VAR_19->handler = VAR_4;
 VAR_19->default_type = VAR_3;
 VAR_19->num_parents = 1;
 VAR_19->parents = &VAR_17->irq;
 VAR_19->first = VAR_22;

 VAR_23 = FUNC_6(&VAR_17->chip, VAR_17);
 if (VAR_23) {
  FUNC_1(VAR_17->chip.parent,
   "Could not register gpio chip %d\n", VAR_23);
  return VAR_23;
 }

 VAR_23 = FUNC_5(VAR_17->chip.parent, VAR_17->irq,
          VAR_10,
          0, FUNC_2(VAR_17->chip.parent), VAR_17);
 if (VAR_23)
  FUNC_7(&VAR_17->chip);

 if (!VAR_17->is_mpuio)
  VAR_20 += VAR_17->width;

 return VAR_23;
}
