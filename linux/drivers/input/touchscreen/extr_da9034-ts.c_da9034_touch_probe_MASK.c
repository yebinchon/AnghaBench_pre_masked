
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int parent; } ;
struct platform_device {TYPE_3__ dev; int name; } ;
struct TYPE_8__ {TYPE_3__* parent; } ;
struct input_dev {int keybit; int evbit; int absbit; TYPE_2__ dev; int close; int open; int name; } ;
struct da9034_touch_pdata {int interval_ms; int y_inverted; int x_inverted; } ;
struct TYPE_7__ {int notifier_call; } ;
struct da9034_touch {int interval_ms; struct input_dev* input_dev; TYPE_1__ notifier; int tsi_work; int y_inverted; int x_inverted; int da9034_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (TYPE_3__*,char*) ;
 struct da9034_touch_pdata* FUNC_3 (TYPE_3__*) ;
 struct input_dev* FUNC_4 (TYPE_3__*) ;
 struct da9034_touch* FUNC_5 (TYPE_3__*,int,int ) ;
 int FUNC_6 (struct input_dev*) ;
 int FUNC_7 (struct input_dev*,int ,int ,int,int ,int ) ;
 int FUNC_8 (struct input_dev*,struct da9034_touch*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_11)
{
 struct da9034_touch_pdata *VAR_12 = FUNC_3(&VAR_11->dev);
 struct da9034_touch *VAR_13;
 struct input_dev *VAR_14;
 int VAR_15;

 VAR_13 = FUNC_5(&VAR_11->dev, sizeof(struct da9034_touch),
        VAR_6);
 if (!VAR_13) {
  FUNC_2(&VAR_11->dev, "failed to allocate driver data\n");
  return -VAR_3;
 }

 VAR_13->da9034_dev = VAR_11->dev.parent;

 if (VAR_12) {
  VAR_13->interval_ms = VAR_12->interval_ms;
  VAR_13->x_inverted = VAR_12->x_inverted;
  VAR_13->y_inverted = VAR_12->y_inverted;
 } else {

  VAR_13->interval_ms = 10;
 }

 FUNC_0(&VAR_13->tsi_work, VAR_10);
 VAR_13->notifier.notifier_call = VAR_8;

 VAR_14 = FUNC_4(&VAR_11->dev);
 if (!VAR_14) {
  FUNC_2(&VAR_11->dev, "failed to allocate input device\n");
  return -VAR_3;
 }

 VAR_14->name = VAR_11->name;
 VAR_14->open = VAR_9;
 VAR_14->close = VAR_7;
 VAR_14->dev.parent = &VAR_11->dev;

 FUNC_1(VAR_4, VAR_14->evbit);
 FUNC_1(VAR_0, VAR_14->absbit);
 FUNC_1(VAR_1, VAR_14->absbit);
 FUNC_7(VAR_14, VAR_0, 0, 1023, 0, 0);
 FUNC_7(VAR_14, VAR_1, 0, 1023, 0, 0);

 FUNC_1(VAR_5, VAR_14->evbit);
 FUNC_1(VAR_2, VAR_14->keybit);

 VAR_13->input_dev = VAR_14;
 FUNC_8(VAR_14, VAR_13);

 VAR_15 = FUNC_6(VAR_14);
 if (VAR_15)
  return VAR_15;

 return 0;
}
