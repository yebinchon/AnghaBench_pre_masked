
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ period; } ;
struct thermal_cooling_device {int irq; int pulses_per_revolution; struct thermal_cooling_device* cdev; int of_node; int pwm_fan_max_state; int pwm_fan_state; int rpm_timer; int sample_start; struct thermal_cooling_device* pwm; TYPE_1__ args; int pwm_value; struct thermal_cooling_device* reg_en; int lock; } ;
struct pwm_state {int enabled; scalar_t__ duty_cycle; } ;
struct pwm_fan_ctx {int irq; int pulses_per_revolution; struct pwm_fan_ctx* cdev; int of_node; int pwm_fan_max_state; int pwm_fan_state; int rpm_timer; int sample_start; struct pwm_fan_ctx* pwm; TYPE_1__ args; int pwm_value; struct pwm_fan_ctx* reg_en; int lock; } ;
struct platform_device {int name; struct thermal_cooling_device dev; } ;
struct device {int irq; int pulses_per_revolution; struct device* cdev; int of_node; int pwm_fan_max_state; int pwm_fan_state; int rpm_timer; int sample_start; struct device* pwm; TYPE_1__ args; int pwm_value; struct device* reg_en; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct thermal_cooling_device*) ;
 int VAR_7 ;
 int FUNC_2 (struct thermal_cooling_device*) ;
 int FUNC_3 (struct thermal_cooling_device*,char*,...) ;
 int FUNC_4 (struct thermal_cooling_device*,int ,struct thermal_cooling_device*) ;
 struct thermal_cooling_device* FUNC_5 (struct thermal_cooling_device*,char*,struct thermal_cooling_device*,int ) ;
 struct thermal_cooling_device* FUNC_6 (struct thermal_cooling_device*,int,int ) ;
 struct thermal_cooling_device* FUNC_7 (struct thermal_cooling_device*,int ,int *) ;
 struct thermal_cooling_device* FUNC_8 (struct thermal_cooling_device*,char*) ;
 int FUNC_9 (struct thermal_cooling_device*,int,int ,int ,int ,struct thermal_cooling_device*) ;
 struct thermal_cooling_device* FUNC_10 (struct thermal_cooling_device*,int ,char*,struct thermal_cooling_device*,int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_11 () ;
 int FUNC_12 (int *,scalar_t__) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,char*,int*) ;
 int FUNC_15 (struct platform_device*,int ) ;
 int FUNC_16 (struct platform_device*,struct thermal_cooling_device*) ;
 int VAR_9 ;
 int FUNC_17 (struct thermal_cooling_device*,struct pwm_state*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_18 (struct thermal_cooling_device*,struct thermal_cooling_device*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_19 (struct thermal_cooling_device*,struct pwm_state*) ;
 int FUNC_20 (struct thermal_cooling_device*) ;
 int VAR_14 ;
 int FUNC_21 (struct thermal_cooling_device*) ;
 int FUNC_22 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_23(struct platform_device *VAR_15)
{
 struct thermal_cooling_device *VAR_16;
 struct device *VAR_17 = &VAR_15->dev;
 struct pwm_fan_ctx *VAR_18;
 struct device *VAR_19;
 int VAR_20;
 struct pwm_state VAR_21 = { };
 u32 VAR_22 = 2;

 VAR_18 = FUNC_6(VAR_17, sizeof(*VAR_18), VAR_5);
 if (!VAR_18)
  return -VAR_3;

 FUNC_13(&VAR_18->lock);

 VAR_18->pwm = FUNC_7(VAR_17, VAR_17->of_node, ((void*)0));
 if (FUNC_1(VAR_18->pwm)) {
  VAR_20 = FUNC_2(VAR_18->pwm);

  if (VAR_20 != -VAR_4)
   FUNC_3(VAR_17, "Could not get PWM: %d\n", VAR_20);

  return VAR_20;
 }

 FUNC_16(VAR_15, VAR_18);

 VAR_18->irq = FUNC_15(VAR_15, 0);
 if (VAR_18->irq == -VAR_4)
  return VAR_18->irq;

 VAR_18->reg_en = FUNC_8(VAR_17, "fan");
 if (FUNC_1(VAR_18->reg_en)) {
  if (FUNC_2(VAR_18->reg_en) != -VAR_2)
   return FUNC_2(VAR_18->reg_en);

  VAR_18->reg_en = ((void*)0);
 } else {
  VAR_20 = FUNC_20(VAR_18->reg_en);
  if (VAR_20) {
   FUNC_3(VAR_17, "Failed to enable fan supply: %d\n", VAR_20);
   return VAR_20;
  }
  VAR_20 = FUNC_4(VAR_17, VAR_13,
            VAR_18->reg_en);
  if (VAR_20)
   return VAR_20;
 }

 VAR_18->pwm_value = VAR_7;


 FUNC_19(VAR_18->pwm, &VAR_21);
 VAR_21.duty_cycle = VAR_18->pwm->args.period - 1;
 VAR_21.enabled = 1;

 VAR_20 = FUNC_17(VAR_18->pwm, &VAR_21);
 if (VAR_20) {
  FUNC_3(VAR_17, "Failed to configure PWM: %d\n", VAR_20);
  return VAR_20;
 }
 FUNC_22(&VAR_18->rpm_timer, VAR_14, 0);
 VAR_20 = FUNC_4(VAR_17, VAR_12, VAR_18);
 if (VAR_20)
  return VAR_20;

 FUNC_14(VAR_17->of_node, "pulses-per-revolution", &VAR_22);
 VAR_18->pulses_per_revolution = VAR_22;
 if (!VAR_18->pulses_per_revolution) {
  FUNC_3(VAR_17, "pulses-per-revolution can't be zero.\n");
  return -VAR_1;
 }

 if (VAR_18->irq > 0) {
  VAR_20 = FUNC_9(VAR_17, VAR_18->irq, VAR_9, 0,
           VAR_15->name, VAR_18);
  if (VAR_20) {
   FUNC_3(VAR_17, "Failed to request interrupt: %d\n", VAR_20);
   return VAR_20;
  }
  VAR_18->sample_start = FUNC_11();
  FUNC_12(&VAR_18->rpm_timer, VAR_8 + VAR_6);
 }

 VAR_19 = FUNC_5(VAR_17, "pwmfan",
             VAR_18, VAR_11);
 if (FUNC_1(VAR_19)) {
  FUNC_3(VAR_17, "Failed to register hwmon device\n");
  return FUNC_2(VAR_19);
 }

 VAR_20 = FUNC_18(VAR_17, VAR_18);
 if (VAR_20)
  return VAR_20;

 VAR_18->pwm_fan_state = VAR_18->pwm_fan_max_state;
 if (FUNC_0(VAR_0)) {
  VAR_16 = FUNC_10(VAR_17,
   VAR_17->of_node, "pwm-fan", VAR_18, &VAR_10);
  if (FUNC_1(VAR_16)) {
   VAR_20 = FUNC_2(VAR_16);
   FUNC_3(VAR_17,
    "Failed to register pwm-fan as cooling device: %d\n",
    VAR_20);
   return VAR_20;
  }
  VAR_18->cdev = VAR_16;
  FUNC_21(VAR_16);
 }

 return 0;
}
