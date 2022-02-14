
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_chip {int parent; } ;
struct adnp {int reg_shift; int* irq_enable; int* irq_level; int* irq_rise; int* irq_fall; int* irq_high; int* irq_low; TYPE_1__* client; int irq_lock; struct gpio_chip gpio; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct adnp*) ;
 scalar_t__ FUNC_1 (struct adnp*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct adnp*,scalar_t__,int*) ;
 int FUNC_3 (struct adnp*,scalar_t__,int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ) ;
 int* FUNC_6 (int ,unsigned int,int,int ) ;
 int FUNC_7 (int ,int ,int *,int ,int,int ,struct adnp*) ;
 int FUNC_8 (struct gpio_chip*,int *,int ,int ,int ) ;
 int FUNC_9 (struct gpio_chip*,int *,int ) ;
 int VAR_7 ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct adnp *VAR_8)
{
 unsigned int VAR_9 = 1 << VAR_8->reg_shift, VAR_10;
 struct gpio_chip *VAR_11 = &VAR_8->gpio;
 int VAR_12;

 FUNC_10(&VAR_8->irq_lock);
 VAR_8->irq_enable = FUNC_6(VAR_11->parent, VAR_9, 6,
     VAR_1);
 if (!VAR_8->irq_enable)
  return -VAR_0;

 VAR_8->irq_level = VAR_8->irq_enable + (VAR_9 * 1);
 VAR_8->irq_rise = VAR_8->irq_enable + (VAR_9 * 2);
 VAR_8->irq_fall = VAR_8->irq_enable + (VAR_9 * 3);
 VAR_8->irq_high = VAR_8->irq_enable + (VAR_9 * 4);
 VAR_8->irq_low = VAR_8->irq_enable + (VAR_9 * 5);

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {




  VAR_12 = FUNC_2(VAR_8, FUNC_1(VAR_8) + VAR_10, &VAR_8->irq_level[VAR_10]);
  if (VAR_12 < 0)
   return VAR_12;


  VAR_12 = FUNC_3(VAR_8, FUNC_0(VAR_8) + VAR_10, 0);
  if (VAR_12 < 0)
   return VAR_12;

  VAR_8->irq_enable[VAR_10] = 0x00;
 }

 VAR_12 = FUNC_7(VAR_11->parent, VAR_8->client->irq,
     ((void*)0), VAR_5,
     VAR_3 | VAR_2,
     FUNC_5(VAR_11->parent), VAR_8);
 if (VAR_12 != 0) {
  FUNC_4(VAR_11->parent, "can't request IRQ#%d: %d\n",
   VAR_8->client->irq, VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_8(VAR_11,
       &VAR_6,
       0,
       VAR_7,
       VAR_4);
 if (VAR_12) {
  FUNC_4(VAR_11->parent,
   "could not connect irqchip to gpiochip\n");
  return VAR_12;
 }

 FUNC_9(VAR_11, &VAR_6, VAR_8->client->irq);

 return 0;
}
