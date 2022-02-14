
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keystone_irq_device {unsigned long mask; int dev; int wa_lock; int irqd; } ;
typedef int irqreturn_t ;


 unsigned long FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 unsigned long FUNC_5 (struct keystone_irq_device*) ;
 int FUNC_6 (struct keystone_irq_device*,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_3, void *VAR_4)
{
 struct keystone_irq_device *VAR_5 = VAR_4;
 unsigned long VAR_6;
 unsigned long VAR_7;
 int VAR_8, VAR_9;

 FUNC_1(VAR_5->dev, "start irq %d\n", VAR_3);

 VAR_7 = FUNC_5(VAR_5);
 FUNC_6(VAR_5, VAR_7);

 FUNC_1(VAR_5->dev, "pending 0x%lx, mask 0x%x\n", VAR_7, VAR_5->mask);

 VAR_7 = (VAR_7 >> VAR_0) & ~VAR_5->mask;

 FUNC_1(VAR_5->dev, "pending after mask 0x%lx\n", VAR_7);

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  if (FUNC_0(VAR_8) & VAR_7) {
   VAR_9 = FUNC_4(VAR_5->irqd, VAR_8);
   FUNC_1(VAR_5->dev, "dispatch bit %d, virq %d\n",
    VAR_8, VAR_9);
   if (!VAR_9)
    FUNC_2(VAR_5->dev, "spurious irq detected hwirq %d, virq %d\n",
      VAR_8, VAR_9);
   FUNC_7(&VAR_5->wa_lock, VAR_6);
   FUNC_3(VAR_9);
   FUNC_8(&VAR_5->wa_lock,
         VAR_6);
  }
 }

 FUNC_1(VAR_5->dev, "end irq %d\n", VAR_3);
 return VAR_1;
}
