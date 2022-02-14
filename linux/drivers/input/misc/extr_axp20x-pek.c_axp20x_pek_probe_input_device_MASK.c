
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_2__ {int * parent; } ;
struct input_dev {char* name; char* phys; TYPE_1__ dev; } ;
struct axp20x_pek {int irq_dbr; int irq_dbf; struct axp20x_dev* axp20x; struct input_dev* input; } ;
struct axp20x_dev {scalar_t__ variant; int regmap_irqc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int,...) ;
 struct input_dev* FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int ,int ,char*,struct input_dev*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct input_dev*) ;
 int FUNC_5 (struct input_dev*,int ,int ) ;
 int FUNC_6 (struct input_dev*,struct axp20x_pek*) ;
 void* FUNC_7 (struct platform_device*,char*) ;
 void* FUNC_8 (int ,int) ;

__attribute__((used)) static int FUNC_9(struct axp20x_pek *VAR_5,
      struct platform_device *VAR_6)
{
 struct axp20x_dev *VAR_7 = VAR_5->axp20x;
 struct input_dev *VAR_8;
 int VAR_9;

 VAR_5->irq_dbr = FUNC_7(VAR_6, "PEK_DBR");
 if (VAR_5->irq_dbr < 0)
  return VAR_5->irq_dbr;
 VAR_5->irq_dbr = FUNC_8(VAR_7->regmap_irqc,
        VAR_5->irq_dbr);

 VAR_5->irq_dbf = FUNC_7(VAR_6, "PEK_DBF");
 if (VAR_5->irq_dbf < 0)
  return VAR_5->irq_dbf;
 VAR_5->irq_dbf = FUNC_8(VAR_7->regmap_irqc,
        VAR_5->irq_dbf);

 VAR_5->input = FUNC_1(&VAR_6->dev);
 if (!VAR_5->input)
  return -VAR_1;

 VAR_8 = VAR_5->input;

 VAR_8->name = "axp20x-pek";
 VAR_8->phys = "m1kbd/input2";
 VAR_8->dev.parent = &VAR_6->dev;

 FUNC_5(VAR_8, VAR_2, VAR_3);

 FUNC_6(VAR_8, VAR_5);

 VAR_9 = FUNC_2(&VAR_6->dev, VAR_5->irq_dbr,
          VAR_4, 0,
          "axp20x-pek-dbr", VAR_8);
 if (VAR_9 < 0) {
  FUNC_0(&VAR_6->dev, "Failed to request dbr IRQ#%d: %d\n",
   VAR_5->irq_dbr, VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_2(&VAR_6->dev, VAR_5->irq_dbf,
       VAR_4, 0,
       "axp20x-pek-dbf", VAR_8);
 if (VAR_9 < 0) {
  FUNC_0(&VAR_6->dev, "Failed to request dbf IRQ#%d: %d\n",
   VAR_5->irq_dbf, VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_4(VAR_8);
 if (VAR_9) {
  FUNC_0(&VAR_6->dev, "Can't register input device: %d\n",
   VAR_9);
  return VAR_9;
 }

 if (VAR_5->axp20x->variant == VAR_0)
  FUNC_3(VAR_5->irq_dbr);

 return 0;
}
