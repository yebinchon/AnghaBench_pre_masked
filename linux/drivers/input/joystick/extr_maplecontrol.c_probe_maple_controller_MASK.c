
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct maple_driver {int dummy; } ;
struct TYPE_4__ {int * function_data; } ;
struct maple_device {struct maple_driver* driver; int product_name; int dev; TYPE_1__ devinfo; } ;
struct TYPE_6__ {int bustype; } ;
struct TYPE_5__ {int * parent; struct dc_pad* platform_data; } ;
struct input_dev {TYPE_3__ id; int name; TYPE_2__ dev; int * evbit; scalar_t__* absbit; scalar_t__* keybit; int close; int open; } ;
struct device {int driver; } ;
struct dc_pad {struct maple_device* mdev; struct input_dev* dev; } ;
 int VAR_0 ;




 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;



 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (short const,scalar_t__*) ;
 unsigned long FUNC_3 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 struct input_dev* FUNC_4 () ;
 int FUNC_5 (struct input_dev*) ;
 int FUNC_6 (struct input_dev*) ;
 int FUNC_7 (struct input_dev*,int,int,int,int ,int ) ;
 int FUNC_8 (struct dc_pad*) ;
 struct dc_pad* FUNC_9 (int,int ) ;
 int FUNC_10 (struct maple_device*,struct dc_pad*) ;
 struct maple_device* FUNC_11 (struct device*) ;
 struct maple_driver* FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct device *VAR_9)
{
 static const short VAR_10[32] = {
  133, 134, 135, 131, -1, -1, -1, -1,
  128, 129, 130, 132, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1,
 };

 static const short VAR_11[32] = {
  -1, -1, -1, -1, 142, 142, 143, 143,
  -1, -1, -1, -1, 140, 140, 141, 141,
  144, 145, 137, 136, 139, 138, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1,
 };

 struct maple_device *VAR_12 = FUNC_11(VAR_9);
 struct maple_driver *VAR_13 = FUNC_12(VAR_9->driver);
 int VAR_14, VAR_15;
 struct dc_pad *VAR_16;
 struct input_dev *VAR_17;
 unsigned long VAR_18 = FUNC_3(VAR_12->devinfo.function_data[0]);

 VAR_16 = FUNC_9(sizeof(struct dc_pad), VAR_6);
 VAR_17 = FUNC_4();
 if (!VAR_16 || !VAR_17) {
  VAR_15 = -VAR_3;
  goto fail;
 }

 VAR_16->dev = VAR_17;
 VAR_16->mdev = VAR_12;

 VAR_17->open = VAR_8;
 VAR_17->close = VAR_7;

 for (VAR_14 = 0; VAR_14 < 32; VAR_14++) {
  if (VAR_18 & (1 << VAR_14)) {
   if (VAR_10[VAR_14] >= 0)
    FUNC_2(VAR_10[VAR_14], VAR_17->keybit);
   else if (VAR_11[VAR_14] >= 0)
    FUNC_2(VAR_11[VAR_14], VAR_17->absbit);
  }
 }

 if (VAR_17->keybit[FUNC_1(VAR_1)])
  VAR_17->evbit[0] |= FUNC_0(VAR_5);

 if (VAR_17->absbit[0])
  VAR_17->evbit[0] |= FUNC_0(VAR_4);

 for (VAR_14 = 137; VAR_14 <= 145; VAR_14++)
  FUNC_7(VAR_17, VAR_14, 0, 255, 0, 0);

 for (VAR_14 = 143; VAR_14 <= VAR_0; VAR_14++)
  FUNC_7(VAR_17, VAR_14, 1, -1, 0, 0);

 VAR_17->dev.platform_data = VAR_16;
 VAR_17->dev.parent = &VAR_12->dev;
 VAR_17->name = VAR_12->product_name;
 VAR_17->id.bustype = VAR_2;

 VAR_15 = FUNC_6(VAR_17);
 if (VAR_15)
  goto fail;

 VAR_12->driver = VAR_13;
 FUNC_10(VAR_12, VAR_16);

 return 0;

fail:
 FUNC_5(VAR_17);
 FUNC_8(VAR_16);
 FUNC_10(VAR_12, ((void*)0));
 return VAR_15;
}
