
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_3__ {TYPE_2__* parent; } ;
struct input_dev {char* name; char* phys; int keybit; int * evbit; TYPE_1__ dev; } ;
struct da9052_onkey {int work; struct da9052* da9052; struct input_dev* input; } ;
struct da9052 {TYPE_2__* dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct da9052*,int ,struct da9052_onkey*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct da9052*,int ,char*,int ,struct da9052_onkey*) ;
 int FUNC_6 (TYPE_2__*,char*,...) ;
 struct da9052* FUNC_7 (int ) ;
 struct input_dev* FUNC_8 () ;
 int FUNC_9 (struct input_dev*) ;
 int FUNC_10 (struct input_dev*) ;
 int FUNC_11 (struct da9052_onkey*) ;
 struct da9052_onkey* FUNC_12 (int,int ) ;
 int FUNC_13 (struct platform_device*,struct da9052_onkey*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_8)
{
 struct da9052 *VAR_9 = FUNC_7(VAR_8->dev.parent);
 struct da9052_onkey *VAR_10;
 struct input_dev *VAR_11;
 int VAR_12;

 if (!VAR_9) {
  FUNC_6(&VAR_8->dev, "Failed to get the driver's data\n");
  return -VAR_1;
 }

 VAR_10 = FUNC_12(sizeof(*VAR_10), VAR_4);
 VAR_11 = FUNC_8();
 if (!VAR_10 || !VAR_11) {
  FUNC_6(&VAR_8->dev, "Failed to allocate memory\n");
  VAR_12 = -VAR_2;
  goto err_free_mem;
 }

 VAR_10->input = VAR_11;
 VAR_10->da9052 = VAR_9;
 FUNC_1(&VAR_10->work, VAR_7);

 VAR_11->name = "da9052-onkey";
 VAR_11->phys = "da9052-onkey/input0";
 VAR_11->dev.parent = &VAR_8->dev;

 VAR_11->evbit[0] = FUNC_0(VAR_3);
 FUNC_2(VAR_5, VAR_11->keybit);

 VAR_12 = FUNC_5(VAR_10->da9052, VAR_0, "ONKEY",
       VAR_6, VAR_10);
 if (VAR_12 < 0) {
  FUNC_6(VAR_10->da9052->dev,
   "Failed to register ONKEY IRQ: %d\n", VAR_12);
  goto err_free_mem;
 }

 VAR_12 = FUNC_10(VAR_10->input);
 if (VAR_12) {
  FUNC_6(&VAR_8->dev, "Unable to register input device, %d\n",
   VAR_12);
  goto err_free_irq;
 }

 FUNC_13(VAR_8, VAR_10);
 return 0;

err_free_irq:
 FUNC_4(VAR_10->da9052, VAR_0, VAR_10);
 FUNC_3(&VAR_10->work);
err_free_mem:
 FUNC_9(VAR_11);
 FUNC_11(VAR_10);

 return VAR_12;
}
