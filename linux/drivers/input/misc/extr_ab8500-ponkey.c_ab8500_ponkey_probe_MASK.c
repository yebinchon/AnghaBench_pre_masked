
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_5__ {TYPE_2__* parent; } ;
struct input_dev {char* name; TYPE_1__ dev; } ;
struct ab8500_ponkey {int irq_dbf; int irq_dbr; struct input_dev* idev; struct ab8500* ab8500; } ;
struct ab8500 {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int,...) ;
 struct ab8500* FUNC_1 (int ) ;
 struct input_dev* FUNC_2 (TYPE_2__*) ;
 struct ab8500_ponkey* FUNC_3 (TYPE_2__*,int,int ) ;
 int FUNC_4 (TYPE_2__*,int,int ,int ,char*,struct ab8500_ponkey*) ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (struct input_dev*,int ,int ) ;
 int FUNC_7 (struct platform_device*,char*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_5)
{
 struct ab8500 *VAR_6 = FUNC_1(VAR_5->dev.parent);
 struct ab8500_ponkey *VAR_7;
 struct input_dev *VAR_8;
 int VAR_9, VAR_10;
 int VAR_11;

 VAR_9 = FUNC_7(VAR_5, "ONKEY_DBF");
 if (VAR_9 < 0)
  return VAR_9;

 VAR_10 = FUNC_7(VAR_5, "ONKEY_DBR");
 if (VAR_10 < 0)
  return VAR_10;

 VAR_7 = FUNC_3(&VAR_5->dev, sizeof(struct ab8500_ponkey),
         VAR_2);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_2(&VAR_5->dev);
 if (!VAR_8)
  return -VAR_0;

 VAR_7->idev = VAR_8;
 VAR_7->ab8500 = VAR_6;
 VAR_7->irq_dbf = VAR_9;
 VAR_7->irq_dbr = VAR_10;

 VAR_8->name = "AB8500 POn(PowerOn) Key";
 VAR_8->dev.parent = &VAR_5->dev;

 FUNC_6(VAR_8, VAR_1, VAR_3);

 VAR_11 = FUNC_4(&VAR_5->dev, VAR_7->irq_dbf,
          VAR_4, 0,
          "ab8500-ponkey-dbf", VAR_7);
 if (VAR_11 < 0) {
  FUNC_0(VAR_6->dev, "Failed to request dbf IRQ#%d: %d\n",
   VAR_7->irq_dbf, VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_4(&VAR_5->dev, VAR_7->irq_dbr,
          VAR_4, 0,
          "ab8500-ponkey-dbr", VAR_7);
 if (VAR_11 < 0) {
  FUNC_0(VAR_6->dev, "Failed to request dbr IRQ#%d: %d\n",
   VAR_7->irq_dbr, VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_5(VAR_7->idev);
 if (VAR_11) {
  FUNC_0(VAR_6->dev, "Can't register input device: %d\n", VAR_11);
  return VAR_11;
 }

 return 0;
}
