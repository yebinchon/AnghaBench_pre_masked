
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_4__ {unsigned int irq_flags; } ;
struct madera {int irq; TYPE_2__* irq_dev; int irq_data; int regmap; TYPE_1__ pdata; } ;
struct irq_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,char*,...) ;
 struct madera* FUNC_2 (int ) ;
 struct irq_data* FUNC_3 (int) ;
 unsigned int FUNC_4 (struct irq_data*) ;
 int VAR_9 ;
 int FUNC_5 (int ,int,int ,int ,int *,int *) ;
 int FUNC_6 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_10)
{
 struct madera *VAR_11 = FUNC_2(VAR_10->dev.parent);
 struct irq_data *VAR_12;
 unsigned int VAR_13 = 0;
 int VAR_14;

 FUNC_0(&VAR_10->dev, "probe\n");





 VAR_13 = VAR_11->pdata.irq_flags;
 if (!VAR_13) {
  VAR_12 = FUNC_3(VAR_11->irq);
  if (!VAR_12) {
   FUNC_1(&VAR_10->dev, "Invalid IRQ: %d\n", VAR_11->irq);
   return -VAR_0;
  }

  VAR_13 = FUNC_4(VAR_12);


  if (VAR_13 == VAR_6)
   VAR_13 = VAR_4;
 }

 if (VAR_13 & (VAR_5 | VAR_2)) {
  FUNC_1(&VAR_10->dev, "Host interrupt not level-triggered\n");
  return -VAR_0;
 }





 if (VAR_13 & VAR_3) {
  VAR_14 = FUNC_6(VAR_11->regmap, VAR_7,
      VAR_8, 0);
  if (VAR_14) {
   FUNC_1(&VAR_10->dev,
    "Failed to set IRQ polarity: %d\n", VAR_14);
   return VAR_14;
  }
 }





 VAR_14 = FUNC_5(VAR_11->regmap, VAR_11->irq, VAR_1, 0,
      &VAR_9, &VAR_11->irq_data);
 if (VAR_14) {
  FUNC_1(&VAR_10->dev, "add_irq_chip failed: %d\n", VAR_14);
  return VAR_14;
 }


 VAR_11->irq_dev = &VAR_10->dev;

 return 0;
}
