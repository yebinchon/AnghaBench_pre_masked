
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct max8997_platform_data {struct max8997_haptic_platform_data* haptic_pdata; } ;
struct max8997_haptic_platform_data {int mode; int pwm_channel_id; int pattern_signal_period; int pattern_cycle; int internal_mode_pattern; int pwm_divisor; int type; int pwm_period; } ;
struct max8997_haptic {int mode; int pwm; int regulator; int pattern_signal_period; int pattern_cycle; int internal_mode_pattern; int pwm_divisor; int type; int pwm_period; struct input_dev* input_dev; TYPE_3__* dev; int client; int mutex; int work; } ;
struct max8997_dev {int haptic; int dev; } ;
struct TYPE_6__ {TYPE_3__* parent; } ;
struct TYPE_5__ {int version; } ;
struct input_dev {char* name; int close; TYPE_2__ dev; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;


 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,char*,...) ;
 struct max8997_dev* FUNC_4 (int ) ;
 struct max8997_platform_data* FUNC_5 (int ) ;
 struct input_dev* FUNC_6 () ;
 int FUNC_7 (struct input_dev*,int *,int ) ;
 int FUNC_8 (struct input_dev*) ;
 int FUNC_9 (struct input_dev*) ;
 int FUNC_10 (struct input_dev*) ;
 int FUNC_11 (struct input_dev*,int ,int ) ;
 int FUNC_12 (struct input_dev*,struct max8997_haptic*) ;
 int FUNC_13 (struct max8997_haptic*) ;
 struct max8997_haptic* FUNC_14 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct platform_device*,struct max8997_haptic*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,char*) ;
 int FUNC_20 (TYPE_3__*,char*) ;
 int FUNC_21 (int ) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_8)
{
 struct max8997_dev *VAR_9 = FUNC_4(VAR_8->dev.parent);
 const struct max8997_platform_data *VAR_10 =
     FUNC_5(VAR_9->dev);
 const struct max8997_haptic_platform_data *VAR_11 = ((void*)0);
 struct max8997_haptic *VAR_12;
 struct input_dev *VAR_13;
 int VAR_14;

 if (VAR_10)
  VAR_11 = VAR_10->haptic_pdata;

 if (!VAR_11) {
  FUNC_3(&VAR_8->dev, "no haptic platform data\n");
  return -VAR_0;
 }

 VAR_12 = FUNC_14(sizeof(struct max8997_haptic), VAR_4);
 VAR_13 = FUNC_6();
 if (!VAR_12 || !VAR_13) {
  FUNC_3(&VAR_8->dev, "unable to allocate memory\n");
  VAR_14 = -VAR_1;
  goto err_free_mem;
 }

 FUNC_0(&VAR_12->work, VAR_7);
 FUNC_15(&VAR_12->mutex);

 VAR_12->client = VAR_9->haptic;
 VAR_12->dev = &VAR_8->dev;
 VAR_12->input_dev = VAR_13;
 VAR_12->pwm_period = VAR_11->pwm_period;
 VAR_12->type = VAR_11->type;
 VAR_12->mode = VAR_11->mode;
 VAR_12->pwm_divisor = VAR_11->pwm_divisor;

 switch (VAR_12->mode) {
 case 128:
  VAR_12->internal_mode_pattern =
    VAR_11->internal_mode_pattern;
  VAR_12->pattern_cycle = VAR_11->pattern_cycle;
  VAR_12->pattern_signal_period =
    VAR_11->pattern_signal_period;
  break;

 case 129:
  VAR_12->pwm = FUNC_19(VAR_11->pwm_channel_id,
     "max8997-haptic");
  if (FUNC_1(VAR_12->pwm)) {
   VAR_14 = FUNC_2(VAR_12->pwm);
   FUNC_3(&VAR_8->dev,
    "unable to request PWM for haptic, error: %d\n",
    VAR_14);
   goto err_free_mem;
  }





  FUNC_17(VAR_12->pwm);
  break;

 default:
  FUNC_3(&VAR_8->dev,
   "Invalid chip mode specified (%d)\n", VAR_12->mode);
  VAR_14 = -VAR_0;
  goto err_free_mem;
 }

 VAR_12->regulator = FUNC_20(&VAR_8->dev, "inmotor");
 if (FUNC_1(VAR_12->regulator)) {
  VAR_14 = FUNC_2(VAR_12->regulator);
  FUNC_3(&VAR_8->dev,
   "unable to get regulator, error: %d\n",
   VAR_14);
  goto err_free_pwm;
 }

 VAR_13->name = "max8997-haptic";
 VAR_13->id.version = 1;
 VAR_13->dev.parent = &VAR_8->dev;
 VAR_13->close = VAR_5;
 FUNC_12(VAR_13, VAR_12);
 FUNC_11(VAR_13, VAR_2, VAR_3);

 VAR_14 = FUNC_7(VAR_13, ((void*)0),
    VAR_6);
 if (VAR_14) {
  FUNC_3(&VAR_8->dev,
   "unable to create FF device, error: %d\n",
   VAR_14);
  goto err_put_regulator;
 }

 VAR_14 = FUNC_10(VAR_13);
 if (VAR_14) {
  FUNC_3(&VAR_8->dev,
   "unable to register input device, error: %d\n",
   VAR_14);
  goto err_destroy_ff;
 }

 FUNC_16(VAR_8, VAR_12);
 return 0;

err_destroy_ff:
 FUNC_8(VAR_13);
err_put_regulator:
 FUNC_21(VAR_12->regulator);
err_free_pwm:
 if (VAR_12->mode == 129)
  FUNC_18(VAR_12->pwm);
err_free_mem:
 FUNC_9(VAR_13);
 FUNC_13(VAR_12);

 return VAR_14;
}
