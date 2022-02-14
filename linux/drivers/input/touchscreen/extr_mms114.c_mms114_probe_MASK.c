
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int max_x; int max_y; } ;
struct mms114_data {int type; struct input_dev* input_dev; void* io_reg; void* core_reg; void* contact_threshold; void* moving_threshold; TYPE_3__ props; struct i2c_client* client; } ;
struct TYPE_5__ {int * parent; } ;
struct TYPE_4__ {int bustype; } ;
struct input_dev {int close; int open; TYPE_2__ dev; TYPE_1__ id; int name; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int irq; int adapter; } ;
typedef enum mms_type { ____Placeholder_mms_type } mms_type ;


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
 int VAR_12 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (void*) ;
 scalar_t__ VAR_15 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *) ;
 struct input_dev* FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,char*,scalar_t__) ;
 struct mms114_data* FUNC_7 (int *,int,int ) ;
 void* FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,int ,int *,int ,int ,int ,struct mms114_data*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct i2c_client*,struct mms114_data*) ;
 void* FUNC_13 (struct input_dev*,int ) ;
 int FUNC_14 (struct input_dev*,int ,int ) ;
 int FUNC_15 (struct input_dev*,int ,int ) ;
 int FUNC_16 (struct input_dev*) ;
 int FUNC_17 (struct input_dev*,int ,int ,int,int ,int ) ;
 int FUNC_18 (struct input_dev*,int ,int ) ;
 int FUNC_19 (struct input_dev*,struct mms114_data*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_20 (struct mms114_data*) ;
 void* FUNC_21 (int *) ;
 int FUNC_22 (struct input_dev*,int,TYPE_3__*) ;

__attribute__((used)) static int FUNC_23(struct i2c_client *VAR_19,
      const struct i2c_device_id *VAR_20)
{
 struct mms114_data *VAR_21;
 struct input_dev *VAR_22;
 const void *VAR_23;
 int VAR_24;

 if (!FUNC_11(VAR_19->adapter,
    VAR_10)) {
  FUNC_3(&VAR_19->dev,
   "Need i2c bus that supports protocol mangling\n");
  return -VAR_6;
 }

 VAR_21 = FUNC_7(&VAR_19->dev, sizeof(struct mms114_data),
       VAR_9);
 VAR_22 = FUNC_5(&VAR_19->dev);
 if (!VAR_21 || !VAR_22) {
  FUNC_3(&VAR_19->dev, "Failed to allocate memory\n");
  return -VAR_7;
 }

 VAR_21->client = VAR_19;
 VAR_21->input_dev = VAR_22;


 VAR_23 = FUNC_21(&VAR_19->dev);
 if (!VAR_23)
  return -VAR_5;

 VAR_21->type = (enum mms_type)VAR_23;

 FUNC_18(VAR_22, VAR_8, VAR_0);
 FUNC_18(VAR_22, VAR_8, VAR_1);
 FUNC_17(VAR_22, VAR_2, 0, 255, 0, 0);
 FUNC_17(VAR_22, VAR_3,
        0, VAR_13, 0, 0);

 FUNC_22(VAR_22, 1, &VAR_21->props);
 if (!VAR_21->props.max_x || !VAR_21->props.max_y) {
  FUNC_2(&VAR_19->dev,
   "missing X/Y size properties, trying legacy bindings\n");
  VAR_24 = FUNC_20(VAR_21);
  if (VAR_24)
   return VAR_24;

  FUNC_17(VAR_22, VAR_0,
         0, VAR_21->props.max_x, 0, 0);
  FUNC_17(VAR_22, VAR_1,
         0, VAR_21->props.max_y, 0, 0);
 }

 if (VAR_21->type == VAR_15) {




  VAR_21->moving_threshold = FUNC_13(VAR_22,
           VAR_0);
  VAR_21->contact_threshold = FUNC_13(VAR_22,
            VAR_2);
  FUNC_14(VAR_22, VAR_0, 0);
  FUNC_14(VAR_22, VAR_1, 0);
  FUNC_14(VAR_22, VAR_2, 0);
 }

 VAR_22->name = FUNC_6(&VAR_19->dev, VAR_9,
      "MELFAS MMS%d Touchscreen",
      VAR_21->type);
 if (!VAR_22->name)
  return -VAR_7;

 VAR_22->id.bustype = VAR_4;
 VAR_22->dev.parent = &VAR_19->dev;
 VAR_22->open = VAR_17;
 VAR_22->close = VAR_16;

 VAR_24 = FUNC_15(VAR_22, VAR_14,
        VAR_11);
 if (VAR_24)
  return VAR_24;

 FUNC_19(VAR_22, VAR_21);
 FUNC_12(VAR_19, VAR_21);

 VAR_21->core_reg = FUNC_8(&VAR_19->dev, "avdd");
 if (FUNC_0(VAR_21->core_reg)) {
  VAR_24 = FUNC_1(VAR_21->core_reg);
  FUNC_3(&VAR_19->dev,
   "Unable to get the Core regulator (%d)\n", VAR_24);
  return VAR_24;
 }

 VAR_21->io_reg = FUNC_8(&VAR_19->dev, "vdd");
 if (FUNC_0(VAR_21->io_reg)) {
  VAR_24 = FUNC_1(VAR_21->io_reg);
  FUNC_3(&VAR_19->dev,
   "Unable to get the IO regulator (%d)\n", VAR_24);
  return VAR_24;
 }

 VAR_24 = FUNC_9(&VAR_19->dev, VAR_19->irq,
       ((void*)0), VAR_18, VAR_12,
       FUNC_4(&VAR_19->dev), VAR_21);
 if (VAR_24) {
  FUNC_3(&VAR_19->dev, "Failed to register interrupt\n");
  return VAR_24;
 }
 FUNC_10(VAR_19->irq);

 VAR_24 = FUNC_16(VAR_21->input_dev);
 if (VAR_24) {
  FUNC_3(&VAR_19->dev, "Failed to register input device\n");
  return VAR_24;
 }

 return 0;
}
