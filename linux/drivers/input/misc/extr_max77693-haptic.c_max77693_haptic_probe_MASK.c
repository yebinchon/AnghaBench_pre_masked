
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {int parent; } ;
struct platform_device {TYPE_8__ dev; } ;
struct max77693_haptic {int suspend_state; int dev_type; TYPE_4__* input_dev; int motor_reg; int pwm_dev; int work; int regmap_haptic; int mode; int type; TYPE_8__* dev; int regmap_pmic; } ;
struct max77693_dev {int regmap; int regmap_haptic; } ;
struct TYPE_15__ {TYPE_8__* parent; } ;
struct TYPE_14__ {int version; } ;
struct TYPE_17__ {char* name; int close; int open; TYPE_2__ dev; TYPE_1__ id; } ;
struct TYPE_16__ {int driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;


 int FUNC_3 (TYPE_8__*,char*,...) ;
 struct max77693_dev* FUNC_4 (int ) ;
 TYPE_4__* FUNC_5 (TYPE_8__*) ;
 struct max77693_haptic* FUNC_6 (TYPE_8__*,int,int ) ;
 int FUNC_7 (TYPE_8__*,int *) ;
 int FUNC_8 (TYPE_8__*,char*) ;
 int FUNC_9 (TYPE_4__*,int *,int ) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*,int ,int ) ;
 int FUNC_12 (TYPE_4__*,struct max77693_haptic*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_3__* FUNC_13 (struct platform_device*) ;
 int FUNC_14 (struct platform_device*,struct max77693_haptic*) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_11)
{
 struct max77693_dev *VAR_12 = FUNC_4(VAR_11->dev.parent);
 struct max77693_haptic *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_6(&VAR_11->dev, sizeof(*VAR_13), VAR_4);
 if (!VAR_13)
  return -VAR_1;

 VAR_13->regmap_pmic = VAR_12->regmap;
 VAR_13->dev = &VAR_11->dev;
 VAR_13->type = VAR_6;
 VAR_13->mode = VAR_5;
 VAR_13->suspend_state = 0;


 VAR_13->dev_type = FUNC_13(VAR_11)->driver_data;
 switch (VAR_13->dev_type) {
 case 129:
  VAR_13->regmap_haptic = VAR_12->regmap_haptic;
  break;
 case 128:
  VAR_13->regmap_haptic = VAR_12->regmap;
  break;
 default:
  FUNC_3(&VAR_11->dev, "unsupported device type: %u\n",
   VAR_13->dev_type);
  return -VAR_0;
 }

 FUNC_0(&VAR_13->work, VAR_10);


 VAR_13->pwm_dev = FUNC_7(&VAR_11->dev, ((void*)0));
 if (FUNC_1(VAR_13->pwm_dev)) {
  FUNC_3(&VAR_11->dev, "failed to get pwm device\n");
  return FUNC_2(VAR_13->pwm_dev);
 }





 FUNC_15(VAR_13->pwm_dev);

 VAR_13->motor_reg = FUNC_8(&VAR_11->dev, "haptic");
 if (FUNC_1(VAR_13->motor_reg)) {
  FUNC_3(&VAR_11->dev, "failed to get regulator\n");
  return FUNC_2(VAR_13->motor_reg);
 }


 VAR_13->input_dev = FUNC_5(&VAR_11->dev);
 if (!VAR_13->input_dev) {
  FUNC_3(&VAR_11->dev, "failed to allocate input device\n");
  return -VAR_1;
 }

 VAR_13->input_dev->name = "max77693-haptic";
 VAR_13->input_dev->id.version = 1;
 VAR_13->input_dev->dev.parent = &VAR_11->dev;
 VAR_13->input_dev->open = VAR_8;
 VAR_13->input_dev->close = VAR_7;
 FUNC_12(VAR_13->input_dev, VAR_13);
 FUNC_11(VAR_13->input_dev, VAR_2, VAR_3);

 VAR_14 = FUNC_9(VAR_13->input_dev, ((void*)0),
    VAR_9);
 if (VAR_14) {
  FUNC_3(&VAR_11->dev, "failed to create force-feedback\n");
  return VAR_14;
 }

 VAR_14 = FUNC_10(VAR_13->input_dev);
 if (VAR_14) {
  FUNC_3(&VAR_11->dev, "failed to register input device\n");
  return VAR_14;
 }

 FUNC_14(VAR_11, VAR_13);

 return 0;
}
