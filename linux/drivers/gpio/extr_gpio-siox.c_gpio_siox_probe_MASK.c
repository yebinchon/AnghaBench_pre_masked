
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct siox_device {struct device dev; } ;
struct gpio_irq_chip {int handler; int default_type; TYPE_1__* chip; } ;
struct TYPE_4__ {int base; int can_sleep; int ngpio; struct gpio_irq_chip irq; int get_direction; int direction_output; int direction_input; int set; int get; int owner; struct device* parent; } ;
struct TYPE_3__ {char* name; int irq_set_type; int irq_unmask; int irq_mask; int irq_ack; } ;
struct gpio_siox_ddata {TYPE_2__ gchip; TYPE_1__ ichip; int irqlock; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,struct gpio_siox_ddata*) ;
 int FUNC_2 (struct device*,TYPE_2__*,int *) ;
 struct gpio_siox_ddata* FUNC_3 (struct device*,int,int ) ;
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
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct siox_device *VAR_14)
{
 struct gpio_siox_ddata *VAR_15;
 struct gpio_irq_chip *VAR_16;
 struct device *VAR_17 = &VAR_14->dev;
 int VAR_18;

 VAR_15 = FUNC_3(VAR_17, sizeof(*VAR_15), VAR_1);
 if (!VAR_15)
  return -VAR_0;

 FUNC_1(VAR_17, VAR_15);

 FUNC_4(&VAR_15->lock);
 FUNC_5(&VAR_15->irqlock);

 VAR_15->gchip.base = -1;
 VAR_15->gchip.can_sleep = 1;
 VAR_15->gchip.parent = VAR_17;
 VAR_15->gchip.owner = VAR_3;
 VAR_15->gchip.get = VAR_6;
 VAR_15->gchip.set = VAR_12;
 VAR_15->gchip.direction_input = VAR_4;
 VAR_15->gchip.direction_output = VAR_5;
 VAR_15->gchip.get_direction = VAR_7;
 VAR_15->gchip.ngpio = 20;

 VAR_15->ichip.name = "siox-gpio";
 VAR_15->ichip.irq_ack = VAR_8;
 VAR_15->ichip.irq_mask = VAR_9;
 VAR_15->ichip.irq_unmask = VAR_11;
 VAR_15->ichip.irq_set_type = VAR_10;

 VAR_16 = &VAR_15->gchip.irq;
 VAR_16->chip = &VAR_15->ichip;
 VAR_16->default_type = VAR_2;
 VAR_16->handler = VAR_13;

 VAR_18 = FUNC_2(VAR_17, &VAR_15->gchip, ((void*)0));
 if (VAR_18)
  FUNC_0(VAR_17, "Failed to register gpio chip (%d)\n", VAR_18);

 return VAR_18;
}
