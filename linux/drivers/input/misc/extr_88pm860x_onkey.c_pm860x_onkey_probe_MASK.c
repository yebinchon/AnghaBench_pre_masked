
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct pm860x_onkey_info {int irq; TYPE_3__* idev; TYPE_4__* dev; int i2c; struct pm860x_chip* chip; } ;
struct pm860x_chip {scalar_t__ id; int dev; int companion; int client; } ;
struct TYPE_12__ {int parent; } ;
struct platform_device {TYPE_4__ dev; } ;
struct TYPE_10__ {TYPE_4__* parent; } ;
struct TYPE_9__ {int bustype; } ;
struct TYPE_11__ {char* name; char* phys; void** keybit; void** evbit; TYPE_2__ dev; TYPE_1__ id; } ;


 void* FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,char*,...) ;
 struct pm860x_chip* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,int) ;
 TYPE_3__* FUNC_5 (TYPE_4__*) ;
 struct pm860x_onkey_info* FUNC_6 (TYPE_4__*,int,int ) ;
 int FUNC_7 (TYPE_4__*,int,int *,int ,int ,char*,struct pm860x_onkey_info*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (struct platform_device*,int ) ;
 int FUNC_10 (struct platform_device*,struct pm860x_onkey_info*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_9)
{
 struct pm860x_chip *VAR_10 = FUNC_3(VAR_9->dev.parent);
 struct pm860x_onkey_info *VAR_11;
 int VAR_12, VAR_13;

 VAR_12 = FUNC_9(VAR_9, 0);
 if (VAR_12 < 0)
  return -VAR_2;

 VAR_11 = FUNC_6(&VAR_9->dev, sizeof(struct pm860x_onkey_info),
       VAR_5);
 if (!VAR_11)
  return -VAR_3;
 VAR_11->chip = VAR_10;
 VAR_11->i2c = (VAR_10->id == VAR_1) ? VAR_10->client : VAR_10->companion;
 VAR_11->dev = &VAR_9->dev;
 VAR_11->irq = VAR_12;

 VAR_11->idev = FUNC_5(&VAR_9->dev);
 if (!VAR_11->idev) {
  FUNC_2(VAR_10->dev, "Failed to allocate input dev\n");
  return -VAR_3;
 }

 VAR_11->idev->name = "88pm860x_on";
 VAR_11->idev->phys = "88pm860x_on/input0";
 VAR_11->idev->id.bustype = VAR_0;
 VAR_11->idev->dev.parent = &VAR_9->dev;
 VAR_11->idev->evbit[0] = FUNC_0(VAR_4);
 VAR_11->idev->keybit[FUNC_1(VAR_7)] = FUNC_0(VAR_7);

 VAR_13 = FUNC_8(VAR_11->idev);
 if (VAR_13) {
  FUNC_2(VAR_10->dev, "Can't register input device: %d\n", VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_7(&VAR_9->dev, VAR_11->irq, ((void*)0),
     VAR_8, VAR_6,
     "onkey", VAR_11);
 if (VAR_13 < 0) {
  FUNC_2(VAR_10->dev, "Failed to request IRQ: #%d: %d\n",
   VAR_11->irq, VAR_13);
  return VAR_13;
 }

 FUNC_10(VAR_9, VAR_11);
 FUNC_4(&VAR_9->dev, 1);

 return 0;
}
