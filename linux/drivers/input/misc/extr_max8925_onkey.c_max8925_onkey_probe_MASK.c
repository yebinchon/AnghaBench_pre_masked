
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct max8925_onkey_info {int* irq; struct input_dev* idev; TYPE_3__* dev; int i2c; } ;
struct max8925_chip {int dev; int i2c; } ;
struct TYPE_8__ {TYPE_3__* parent; } ;
struct TYPE_7__ {int bustype; } ;
struct input_dev {char* name; char* phys; TYPE_2__ dev; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int,...) ;
 struct max8925_chip* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int) ;
 struct input_dev* FUNC_3 (TYPE_3__*) ;
 struct max8925_onkey_info* FUNC_4 (TYPE_3__*,int,int ) ;
 int FUNC_5 (TYPE_3__*,int,int *,int ,int ,char*,struct max8925_onkey_info*) ;
 int FUNC_6 (struct input_dev*) ;
 int FUNC_7 (struct input_dev*,int ,int ) ;
 int VAR_7 ;
 int FUNC_8 (struct platform_device*,int) ;
 int FUNC_9 (struct platform_device*,struct max8925_onkey_info*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_8)
{
 struct max8925_chip *VAR_9 = FUNC_1(VAR_8->dev.parent);
 struct max8925_onkey_info *VAR_10;
 struct input_dev *VAR_11;
 int VAR_12[2], VAR_13;

 VAR_12[0] = FUNC_8(VAR_8, 0);
 if (VAR_12[0] < 0)
  return -VAR_1;

 VAR_12[1] = FUNC_8(VAR_8, 1);
 if (VAR_12[1] < 0)
  return -VAR_1;

 VAR_10 = FUNC_4(&VAR_8->dev, sizeof(struct max8925_onkey_info),
       VAR_4);
 if (!VAR_10)
  return -VAR_2;

 VAR_11 = FUNC_3(&VAR_8->dev);
 if (!VAR_11)
  return -VAR_2;

 VAR_10->idev = VAR_11;
 VAR_10->i2c = VAR_9->i2c;
 VAR_10->dev = &VAR_8->dev;
 VAR_10->irq[0] = VAR_12[0];
 VAR_10->irq[1] = VAR_12[1];

 VAR_11->name = "max8925_on";
 VAR_11->phys = "max8925_on/input0";
 VAR_11->id.bustype = VAR_0;
 VAR_11->dev.parent = &VAR_8->dev;
 FUNC_7(VAR_11, VAR_3, VAR_6);

 VAR_13 = FUNC_5(&VAR_8->dev, VAR_12[0], ((void*)0),
       VAR_7, VAR_5,
       "onkey-down", VAR_10);
 if (VAR_13 < 0) {
  FUNC_0(VAR_9->dev, "Failed to request IRQ: #%d: %d\n",
   VAR_12[0], VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_5(&VAR_8->dev, VAR_12[1], ((void*)0),
       VAR_7, VAR_5,
       "onkey-up", VAR_10);
 if (VAR_13 < 0) {
  FUNC_0(VAR_9->dev, "Failed to request IRQ: #%d: %d\n",
   VAR_12[1], VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_6(VAR_10->idev);
 if (VAR_13) {
  FUNC_0(VAR_9->dev, "Can't register input device: %d\n", VAR_13);
  return VAR_13;
 }

 FUNC_9(VAR_8, VAR_10);
 FUNC_2(&VAR_8->dev, 1);

 return 0;
}
