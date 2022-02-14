
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct maple_driver {int dummy; } ;
struct maple_device {struct maple_driver* driver; int dev; int product_name; } ;
struct TYPE_4__ {int * parent; } ;
struct TYPE_3__ {int bustype; } ;
struct input_dev {int* evbit; int keycodesize; int keybit; TYPE_2__ dev; TYPE_1__ id; int keycodemax; int keycode; int name; } ;
struct device {int driver; } ;
struct dc_kbd {int keycode; struct input_dev* dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
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
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_11 ;
 int * VAR_12 ;
 struct input_dev* FUNC_4 () ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (struct input_dev*) ;
 int FUNC_7 (struct input_dev*,int ,int ) ;
 int FUNC_8 (struct dc_kbd*) ;
 struct dc_kbd* FUNC_9 (int,int ) ;
 int FUNC_10 (struct maple_device*,int ,int,int ) ;
 int FUNC_11 (struct maple_device*,struct dc_kbd*) ;
 int FUNC_12 (int ,int *,int) ;
 struct maple_device* FUNC_13 (struct device*) ;
 struct maple_driver* FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct device *VAR_13)
{
 struct maple_device *VAR_14;
 struct maple_driver *VAR_15;
 int VAR_16, VAR_17;
 struct dc_kbd *VAR_18;
 struct input_dev *VAR_19;

 VAR_14 = FUNC_13(VAR_13);
 VAR_15 = FUNC_14(VAR_13->driver);

 VAR_18 = FUNC_9(sizeof(struct dc_kbd), VAR_5);
 if (!VAR_18) {
  VAR_17 = -VAR_1;
  goto fail;
 }

 VAR_19 = FUNC_4();
 if (!VAR_19) {
  VAR_17 = -VAR_1;
  goto fail_idev_alloc;
 }

 VAR_18->dev = VAR_19;
 FUNC_12(VAR_18->keycode, VAR_12, sizeof(VAR_18->keycode));

 VAR_19->name = VAR_14->product_name;
 VAR_19->evbit[0] = FUNC_1(VAR_2) | FUNC_1(VAR_4);
 VAR_19->keycode = VAR_18->keycode;
 VAR_19->keycodesize = sizeof(unsigned short);
 VAR_19->keycodemax = FUNC_0(VAR_18->keycode);
 VAR_19->id.bustype = VAR_0;
 VAR_19->dev.parent = &VAR_14->dev;

 for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++)
  FUNC_3(VAR_12[VAR_16], VAR_19->keybit);
 FUNC_2(VAR_7, VAR_19->keybit);

 FUNC_7(VAR_19, VAR_3, VAR_9);

 VAR_17 = FUNC_6(VAR_19);
 if (VAR_17)
  goto fail_register;


 FUNC_10(VAR_14, VAR_11, VAR_6/50,
  VAR_8);

 VAR_14->driver = VAR_15;

 FUNC_11(VAR_14, VAR_18);

 return VAR_17;

fail_register:
 FUNC_11(VAR_14, ((void*)0));
 FUNC_5(VAR_19);
fail_idev_alloc:
 FUNC_8(VAR_18);
fail:
 return VAR_17;
}
