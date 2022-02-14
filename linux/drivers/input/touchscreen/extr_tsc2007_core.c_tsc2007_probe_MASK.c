
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct tsc2007_platform_data {int (* init_platform_hw ) () ;scalar_t__ exit_platform_hw; } ;
struct tsc2007 {int irq; int fuzzz; int fuzzy; int fuzzx; int phys; int mlock; int wait; struct input_dev* input; struct i2c_client* client; } ;
struct TYPE_11__ {int bustype; } ;
struct input_dev {char* name; int close; int open; TYPE_1__ id; int phys; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_13__ {TYPE_2__* driver; } ;
struct i2c_client {TYPE_3__ dev; int irq; int adapter; } ;
struct TYPE_12__ {int name; } ;


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
 int FUNC_0 (TYPE_3__*,char*,int,...) ;
 struct tsc2007_platform_data* FUNC_1 (TYPE_3__*) ;
 char* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ,TYPE_3__*) ;
 struct input_dev* FUNC_4 (TYPE_3__*) ;
 struct tsc2007* FUNC_5 (TYPE_3__*,int,int ) ;
 int FUNC_6 (TYPE_3__*,int ,int ,int ,int ,int ,struct tsc2007*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct i2c_client*,struct tsc2007*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct input_dev*) ;
 int FUNC_11 (struct input_dev*,int ,int ,int ,int ,int ) ;
 int FUNC_12 (struct input_dev*,int ,int ) ;
 int FUNC_13 (struct input_dev*,struct tsc2007*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int,char*,char*) ;
 int FUNC_16 () ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_17 (struct tsc2007*) ;
 int VAR_16 ;
 int FUNC_18 (struct i2c_client*,struct tsc2007*) ;
 int FUNC_19 (struct i2c_client*,struct tsc2007*,struct tsc2007_platform_data const*,struct i2c_device_id const*) ;
 int VAR_17 ;
 int FUNC_20 (struct tsc2007*) ;
 int FUNC_21 (struct tsc2007*,int ) ;

__attribute__((used)) static int FUNC_22(struct i2c_client *VAR_18,
    const struct i2c_device_id *VAR_19)
{
 const struct tsc2007_platform_data *VAR_20 =
  FUNC_1(&VAR_18->dev);
 struct tsc2007 *VAR_21;
 struct input_dev *VAR_22;
 int VAR_23;

 if (!FUNC_7(VAR_18->adapter,
         VAR_9))
  return -VAR_5;

 VAR_21 = FUNC_5(&VAR_18->dev, sizeof(struct tsc2007), VAR_8);
 if (!VAR_21)
  return -VAR_6;

 if (VAR_20)
  VAR_23 = FUNC_19(VAR_18, VAR_21, VAR_20, VAR_19);
 else
  VAR_23 = FUNC_18(VAR_18, VAR_21);
 if (VAR_23)
  return VAR_23;

 VAR_22 = FUNC_4(&VAR_18->dev);
 if (!VAR_22)
  return -VAR_6;

 FUNC_8(VAR_18, VAR_21);

 VAR_21->client = VAR_18;
 VAR_21->irq = VAR_18->irq;
 VAR_21->input = VAR_22;

 FUNC_9(&VAR_21->wait);
 FUNC_14(&VAR_21->mlock);

 FUNC_15(VAR_21->phys, sizeof(VAR_21->phys),
   "%s/input0", FUNC_2(&VAR_18->dev));

 VAR_22->name = "TSC2007 Touchscreen";
 VAR_22->phys = VAR_21->phys;
 VAR_22->id.bustype = VAR_4;

 VAR_22->open = VAR_16;
 VAR_22->close = VAR_14;

 FUNC_13(VAR_22, VAR_21);

 FUNC_12(VAR_22, VAR_7, VAR_3);

 FUNC_11(VAR_22, VAR_1, 0, VAR_11, VAR_21->fuzzx, 0);
 FUNC_11(VAR_22, VAR_2, 0, VAR_11, VAR_21->fuzzy, 0);
 FUNC_11(VAR_22, VAR_0, 0, VAR_11,
        VAR_21->fuzzz, 0);

 if (VAR_20) {
  if (VAR_20->exit_platform_hw) {
   VAR_23 = FUNC_3(&VAR_18->dev,
           VAR_13,
           &VAR_18->dev);
   if (VAR_23) {
    FUNC_0(&VAR_18->dev,
     "Failed to register exit_platform_hw action, %d\n",
     VAR_23);
    return VAR_23;
   }
  }

  if (VAR_20->init_platform_hw)
   VAR_20->init_platform_hw();
 }

 VAR_23 = FUNC_6(&VAR_18->dev, VAR_21->irq,
     VAR_15, VAR_17,
     VAR_10,
     VAR_18->dev.driver->name, VAR_21);
 if (VAR_23) {
  FUNC_0(&VAR_18->dev, "Failed to request irq %d: %d\n",
   VAR_21->irq, VAR_23);
  return VAR_23;
 }

 FUNC_20(VAR_21);


 VAR_23 = FUNC_21(VAR_21, VAR_12);
 if (VAR_23 < 0) {
  FUNC_0(&VAR_18->dev,
   "Failed to setup chip: %d\n", VAR_23);
  return VAR_23;
 }

 VAR_23 = FUNC_10(VAR_22);
 if (VAR_23) {
  FUNC_0(&VAR_18->dev,
   "Failed to register input device: %d\n", VAR_23);
  return VAR_23;
 }

 VAR_23 = FUNC_17(VAR_21);
 if (VAR_23) {
  FUNC_0(&VAR_18->dev,
   "Failed to register with IIO: %d\n", VAR_23);
  return VAR_23;
 }

 return 0;
}
