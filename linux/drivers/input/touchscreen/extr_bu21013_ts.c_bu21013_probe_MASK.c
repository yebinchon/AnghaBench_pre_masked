
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int bustype; } ;
struct input_dev {struct input_absinfo* absinfo; TYPE_1__ id; int name; } ;
struct input_absinfo {scalar_t__ minimum; int maximum; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int irq; int adapter; } ;
struct TYPE_4__ {int invert_y; int invert_x; } ;
struct bu21013_ts {scalar_t__ int_gpiod; scalar_t__ cs_gpiod; int regulator; TYPE_2__ props; struct input_dev* in_dev; void* y_flip; void* x_flip; struct i2c_client* client; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_16 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (struct bu21013_ts*) ;
 int VAR_19 ;
 int FUNC_4 (int *,char*,...) ;
 void* FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,int *) ;
 int FUNC_7 (int *,int ,struct bu21013_ts*) ;
 scalar_t__ FUNC_8 (int *,char*,int ) ;
 scalar_t__ FUNC_9 (int *,char*,int ) ;
 struct input_dev* FUNC_10 (int *) ;
 struct bu21013_ts* FUNC_11 (int *,int,int ) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *,int ,int *,int ,int ,int ,struct bu21013_ts*) ;
 int FUNC_14 (scalar_t__,char*) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (struct i2c_client*,struct bu21013_ts*) ;
 int FUNC_17 (struct input_dev*,int ,int) ;
 int FUNC_18 (struct input_dev*) ;
 int FUNC_19 (struct input_dev*,size_t,int ,int ,int ,int ) ;
 int FUNC_20 (struct input_dev*,struct bu21013_ts*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (struct input_dev*,int,TYPE_2__*) ;

__attribute__((used)) static int FUNC_23(struct i2c_client *VAR_20,
    const struct i2c_device_id *VAR_21)
{
 struct bu21013_ts *VAR_22;
 struct input_dev *VAR_23;
 struct input_absinfo *VAR_24;
 u32 VAR_25 = 0, VAR_26 = 0;
 int VAR_27;

 if (!FUNC_15(VAR_20->adapter,
         VAR_11)) {
  FUNC_4(&VAR_20->dev, "i2c smbus byte data not supported\n");
  return -VAR_5;
 }

 if (!VAR_20->irq) {
  FUNC_4(&VAR_20->dev, "No IRQ set up\n");
  return -VAR_4;
 }

 VAR_22 = FUNC_11(&VAR_20->dev, sizeof(*VAR_22), VAR_8);
 if (!VAR_22)
  return -VAR_6;

 VAR_22->client = VAR_20;

 VAR_22->x_flip = FUNC_5(&VAR_20->dev, "rohm,flip-x");
 VAR_22->y_flip = FUNC_5(&VAR_20->dev, "rohm,flip-y");

 VAR_23 = FUNC_10(&VAR_20->dev);
 if (!VAR_23) {
  FUNC_4(&VAR_20->dev, "device memory alloc failed\n");
  return -VAR_6;
 }
 VAR_22->in_dev = VAR_23;
 FUNC_20(VAR_23, VAR_22);


 VAR_23->name = VAR_3;
 VAR_23->id.bustype = VAR_2;

 FUNC_6(&VAR_20->dev, "rohm,touch-max-x", &VAR_25);
 FUNC_6(&VAR_20->dev, "rohm,touch-max-y", &VAR_26);

 FUNC_19(VAR_23, VAR_0, 0, VAR_25, 0, 0);
 FUNC_19(VAR_23, VAR_1, 0, VAR_26, 0, 0);

 FUNC_22(VAR_23, 1, &VAR_22->props);


 if (!VAR_22->props.invert_x &&
     FUNC_5(&VAR_20->dev, "rohm,flip-x")) {
  VAR_24 = &VAR_23->absinfo[VAR_0];
  VAR_24->maximum -= VAR_24->minimum;
  VAR_24->minimum = 0;
 }

 if (!VAR_22->props.invert_y &&
     FUNC_5(&VAR_20->dev, "rohm,flip-y")) {
  VAR_24 = &VAR_23->absinfo[VAR_1];
  VAR_24->maximum -= VAR_24->minimum;
  VAR_24->minimum = 0;
 }

 VAR_27 = FUNC_17(VAR_23, VAR_16,
        VAR_12 | VAR_14 |
     VAR_13);
 if (VAR_27) {
  FUNC_4(&VAR_20->dev, "failed to initialize MT slots");
  return VAR_27;
 }

 VAR_22->regulator = FUNC_12(&VAR_20->dev, "avdd");
 if (FUNC_0(VAR_22->regulator)) {
  FUNC_4(&VAR_20->dev, "regulator_get failed\n");
  return FUNC_1(VAR_22->regulator);
 }

 VAR_27 = FUNC_21(VAR_22->regulator);
 if (VAR_27) {
  FUNC_4(&VAR_20->dev, "regulator enable failed\n");
  return VAR_27;
 }

 VAR_27 = FUNC_7(&VAR_20->dev, VAR_19, VAR_22);
 if (VAR_27) {
  FUNC_4(&VAR_20->dev, "failed to install power off handler\n");
  return VAR_27;
 }


 VAR_22->cs_gpiod = FUNC_8(&VAR_20->dev, "reset", VAR_10);
 VAR_27 = FUNC_2(VAR_22->cs_gpiod);
 if (VAR_27) {
  if (VAR_27 != -VAR_7)
   FUNC_4(&VAR_20->dev, "failed to get CS GPIO\n");
  return VAR_27;
 }
 FUNC_14(VAR_22->cs_gpiod, "BU21013 CS");

 VAR_27 = FUNC_7(&VAR_20->dev,
      VAR_17, VAR_22);
 if (VAR_27) {
  FUNC_4(&VAR_20->dev,
   "failed to install chip disable handler\n");
  return VAR_27;
 }


 VAR_22->int_gpiod = FUNC_9(&VAR_20->dev,
      "touch", VAR_9);
 VAR_27 = FUNC_2(VAR_22->int_gpiod);
 if (VAR_27) {
  if (VAR_27 != -VAR_7)
   FUNC_4(&VAR_20->dev, "failed to get INT GPIO\n");
  return VAR_27;
 }

 if (VAR_22->int_gpiod)
  FUNC_14(VAR_22->int_gpiod, "BU21013 INT");


 VAR_27 = FUNC_3(VAR_22);
 if (VAR_27) {
  FUNC_4(&VAR_20->dev, "error in bu21013 config\n");
  return VAR_27;
 }

 VAR_27 = FUNC_13(&VAR_20->dev, VAR_20->irq,
       ((void*)0), VAR_18,
       VAR_15, VAR_3, VAR_22);
 if (VAR_27) {
  FUNC_4(&VAR_20->dev, "request irq %d failed\n",
   VAR_20->irq);
  return VAR_27;
 }

 VAR_27 = FUNC_18(VAR_23);
 if (VAR_27) {
  FUNC_4(&VAR_20->dev, "failed to register input device\n");
  return VAR_27;
 }

 FUNC_16(VAR_20, VAR_22);

 return 0;
}
