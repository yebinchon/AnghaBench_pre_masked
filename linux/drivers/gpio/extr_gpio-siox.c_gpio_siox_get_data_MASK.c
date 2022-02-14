
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct siox_device {int dev; } ;
struct irq_domain {int dummy; } ;
struct TYPE_3__ {struct irq_domain* domain; } ;
struct TYPE_4__ {TYPE_1__ irq; } ;
struct gpio_siox_ddata {int* getdata; int* irq_type; int irq_status; int irq_enable; int irqlock; TYPE_2__ gchip; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct gpio_siox_ddata* FUNC_0 (int *) ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (struct irq_domain*,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct siox_device *VAR_4, const u8 VAR_5[])
{
 struct gpio_siox_ddata *VAR_6 = FUNC_0(&VAR_4->dev);
 size_t VAR_7;
 u32 VAR_8;

 FUNC_3(&VAR_6->lock);

 FUNC_5(&VAR_6->irqlock);

 for (VAR_7 = 0; VAR_7 < 12; ++VAR_7) {
  unsigned int VAR_9 = 11 - VAR_7;
  unsigned int VAR_10 = VAR_5[VAR_9 / 8] & (1 << VAR_9 % 8);
  unsigned int VAR_11 =
   VAR_6->getdata[VAR_9 / 8] & (1 << (VAR_9 % 8));
  u32 VAR_12 = VAR_6->irq_type[VAR_7];

  if (VAR_10) {
   if ((VAR_12 & VAR_2) ||
       ((VAR_12 & VAR_1) && !VAR_11))
    VAR_6->irq_status |= 1 << VAR_7;
  } else {
   if ((VAR_12 & VAR_3) ||
       ((VAR_12 & VAR_0) && VAR_11))
    VAR_6->irq_status |= 1 << VAR_7;
  }
 }

 VAR_8 = VAR_6->irq_status & VAR_6->irq_enable;

 FUNC_6(&VAR_6->irqlock);

 VAR_6->getdata[0] = VAR_5[0];
 VAR_6->getdata[1] = VAR_5[1];
 VAR_6->getdata[2] = VAR_5[2];

 FUNC_4(&VAR_6->lock);

 for (VAR_7 = 0; VAR_7 < 12; ++VAR_7) {
  if (VAR_8 & (1 << VAR_7)) {
   struct irq_domain *VAR_13 = VAR_6->gchip.irq.domain;
   unsigned int VAR_14 = FUNC_2(VAR_13, VAR_7);






   FUNC_5(&VAR_6->irqlock);
   VAR_6->irq_status &= ~(1 << VAR_7);
   FUNC_6(&VAR_6->irqlock);

   FUNC_1(VAR_14);
  }
 }

 return 0;
}
