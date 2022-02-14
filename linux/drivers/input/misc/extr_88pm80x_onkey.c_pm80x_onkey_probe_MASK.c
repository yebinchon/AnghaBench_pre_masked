
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct pm80x_onkey_info {scalar_t__ irq; TYPE_3__* idev; struct pm80x_chip* pm80x; int map; } ;
struct pm80x_chip {int regmap; } ;
struct TYPE_11__ {int parent; } ;
struct platform_device {TYPE_6__ dev; } ;
struct TYPE_9__ {TYPE_6__* parent; } ;
struct TYPE_8__ {int bustype; } ;
struct TYPE_10__ {char* name; char* phys; int keybit; int * evbit; TYPE_2__ dev; TYPE_1__ id; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_6__*,char*,...) ;
 struct pm80x_chip* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_6__*,int) ;
 TYPE_3__* FUNC_5 () ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (struct pm80x_onkey_info*) ;
 struct pm80x_onkey_info* FUNC_9 (int,int ) ;
 scalar_t__ FUNC_10 (struct platform_device*,int ) ;
 int FUNC_11 (struct platform_device*,struct pm80x_onkey_info*) ;
 int FUNC_12 (struct pm80x_chip*,scalar_t__,struct pm80x_onkey_info*) ;
 int VAR_12 ;
 int FUNC_13 (struct pm80x_chip*,scalar_t__,int ,int ,char*,struct pm80x_onkey_info*) ;
 int FUNC_14 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_13)
{

 struct pm80x_chip *VAR_14 = FUNC_3(VAR_13->dev.parent);
 struct pm80x_onkey_info *VAR_15;
 int VAR_16;

 VAR_15 = FUNC_9(sizeof(struct pm80x_onkey_info), VAR_4);
 if (!VAR_15)
  return -VAR_2;

 VAR_15->pm80x = VAR_14;

 VAR_15->irq = FUNC_10(VAR_13, 0);
 if (VAR_15->irq < 0) {
  VAR_16 = -VAR_1;
  goto out;
 }

 VAR_15->map = VAR_15->pm80x->regmap;
 if (!VAR_15->map) {
  FUNC_2(&VAR_13->dev, "no regmap!\n");
  VAR_16 = -VAR_1;
  goto out;
 }

 VAR_15->idev = FUNC_5();
 if (!VAR_15->idev) {
  FUNC_2(&VAR_13->dev, "Failed to allocate input dev\n");
  VAR_16 = -VAR_2;
  goto out;
 }

 VAR_15->idev->name = "88pm80x_on";
 VAR_15->idev->phys = "88pm80x_on/input0";
 VAR_15->idev->id.bustype = VAR_0;
 VAR_15->idev->dev.parent = &VAR_13->dev;
 VAR_15->idev->evbit[0] = FUNC_0(VAR_3);
 FUNC_1(VAR_6, VAR_15->idev->keybit);

 VAR_16 = FUNC_13(VAR_15->pm80x, VAR_15->irq, VAR_12,
         VAR_5, "onkey", VAR_15);
 if (VAR_16 < 0) {
  FUNC_2(&VAR_13->dev, "Failed to request IRQ: #%d: %d\n",
   VAR_15->irq, VAR_16);
  goto out_reg;
 }

 VAR_16 = FUNC_7(VAR_15->idev);
 if (VAR_16) {
  FUNC_2(&VAR_13->dev, "Can't register input device: %d\n", VAR_16);
  goto out_irq;
 }

 FUNC_11(VAR_13, VAR_15);


 FUNC_14(VAR_15->map, VAR_11, VAR_7,
      VAR_7);

 FUNC_14(VAR_15->map, VAR_10,
      VAR_9,
      VAR_8);

 FUNC_4(&VAR_13->dev, 1);
 return 0;

out_irq:
 FUNC_12(VAR_15->pm80x, VAR_15->irq, VAR_15);
out_reg:
 FUNC_6(VAR_15->idev);
out:
 FUNC_8(VAR_15);
 return VAR_16;
}
