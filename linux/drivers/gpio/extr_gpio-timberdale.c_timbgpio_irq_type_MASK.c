
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ngpio; } ;
struct timbgpio {int irq_base; int lock; scalar_t__ membase; TYPE_1__ gpio; } ;
struct irq_data {int irq; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 struct timbgpio* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct irq_data *VAR_10, unsigned VAR_11)
{
 struct timbgpio *VAR_12 = FUNC_2(VAR_10);
 int VAR_13 = VAR_10->irq - VAR_12->irq_base;
 unsigned long VAR_14;
 u32 VAR_15, VAR_16, VAR_17 = 0;
 u32 VAR_18;
 int VAR_19 = 0;

 if (VAR_13 < 0 || VAR_13 > VAR_12->gpio.ngpio)
  return -VAR_0;

 VAR_18 = FUNC_0(VAR_12->membase + VAR_9);

 FUNC_3(&VAR_12->lock, VAR_14);

 VAR_15 = FUNC_0(VAR_12->membase + VAR_8);
 VAR_16 = FUNC_0(VAR_12->membase + VAR_6);
 if (VAR_18 > 2)
  VAR_17 = FUNC_0(VAR_12->membase + VAR_5);

 if (VAR_11 & (VAR_3 | VAR_4)) {
  VAR_17 &= ~(1 << VAR_13);
  VAR_16 &= ~(1 << VAR_13);
  if (VAR_11 & VAR_3)
   VAR_15 |= 1 << VAR_13;
  else
   VAR_15 &= ~(1 << VAR_13);
 }

 if ((VAR_11 & VAR_1) == VAR_1) {
  if (VAR_18 < 3) {
   VAR_19 = -VAR_0;
   goto out;
  } else {
   VAR_16 |= 1 << VAR_13;
   VAR_17 |= 1 << VAR_13;
  }
 } else {
  VAR_17 &= ~(1 << VAR_13);
  VAR_16 |= 1 << VAR_13;
  if (VAR_11 & VAR_2)
   VAR_15 &= ~(1 << VAR_13);
  else
   VAR_15 |= 1 << VAR_13;
 }

 FUNC_1(VAR_15, VAR_12->membase + VAR_8);
 FUNC_1(VAR_16, VAR_12->membase + VAR_6);
 if (VAR_18 > 2)
  FUNC_1(VAR_17, VAR_12->membase + VAR_5);

 FUNC_1(1 << VAR_13, VAR_12->membase + VAR_7);

out:
 FUNC_4(&VAR_12->lock, VAR_14);
 return VAR_19;
}
