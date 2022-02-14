
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_4__ {TYPE_2__* parent; } ;
struct input_dev {char* name; char* phys; int keybit; int * evbit; TYPE_1__ dev; } ;
struct da9055_onkey {int work; struct da9055* da9055; struct input_dev* input; } ;
struct da9055 {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (TYPE_2__*,char*,...) ;
 struct da9055* FUNC_5 (int ) ;
 struct da9055_onkey* FUNC_6 (TYPE_2__*,int,int ) ;
 int FUNC_7 (int,struct da9055_onkey*) ;
 struct input_dev* FUNC_8 () ;
 int FUNC_9 (struct input_dev*) ;
 int FUNC_10 (struct input_dev*) ;
 int FUNC_11 (struct platform_device*,char*) ;
 int FUNC_12 (struct platform_device*,struct da9055_onkey*) ;
 int FUNC_13 (int,int *,int ,int,char*,struct da9055_onkey*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_9)
{
 struct da9055 *VAR_10 = FUNC_5(VAR_9->dev.parent);
 struct da9055_onkey *VAR_11;
 struct input_dev *VAR_12;
 int VAR_13, VAR_14;

 VAR_13 = FUNC_11(VAR_9, "ONKEY");
 if (VAR_13 < 0)
  return -VAR_0;

 VAR_11 = FUNC_6(&VAR_9->dev, sizeof(*VAR_11), VAR_3);
 if (!VAR_11) {
  FUNC_4(&VAR_9->dev, "Failed to allocate memory\n");
  return -VAR_1;
 }

 VAR_12 = FUNC_8();
 if (!VAR_12) {
  FUNC_4(&VAR_9->dev, "Failed to allocate memory\n");
  return -VAR_1;
 }

 VAR_11->input = VAR_12;
 VAR_11->da9055 = VAR_10;
 VAR_12->name = "da9055-onkey";
 VAR_12->phys = "da9055-onkey/input0";
 VAR_12->dev.parent = &VAR_9->dev;

 VAR_12->evbit[0] = FUNC_0(VAR_2);
 FUNC_2(VAR_6, VAR_12->keybit);

 FUNC_1(&VAR_11->work, VAR_8);

 VAR_14 = FUNC_13(VAR_13, ((void*)0), VAR_7,
       VAR_5 | VAR_4,
       "ONKEY", VAR_11);
 if (VAR_14 < 0) {
  FUNC_4(&VAR_9->dev,
   "Failed to register ONKEY IRQ %d, error = %d\n",
   VAR_13, VAR_14);
  goto err_free_input;
 }

 VAR_14 = FUNC_10(VAR_12);
 if (VAR_14) {
  FUNC_4(&VAR_9->dev, "Unable to register input device, %d\n",
   VAR_14);
  goto err_free_irq;
 }

 FUNC_12(VAR_9, VAR_11);

 return 0;

err_free_irq:
 FUNC_7(VAR_13, VAR_11);
 FUNC_3(&VAR_11->work);
err_free_input:
 FUNC_9(VAR_12);

 return VAR_14;
}
