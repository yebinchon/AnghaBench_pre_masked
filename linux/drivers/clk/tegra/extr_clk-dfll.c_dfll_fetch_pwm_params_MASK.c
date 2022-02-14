
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tegra_dfll {int reg_init_uV; int pwm_rate; void* pwm_disable_state; int dev; void* pwm_pin; void* pwm_enable_state; TYPE_2__* soc; scalar_t__* lut_uv; } ;
struct TYPE_3__ {int step_uv; scalar_t__ offset_uv; } ;
struct TYPE_4__ {TYPE_1__ alignment; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,char*) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (void*,char*) ;
 int FUNC_5 (struct tegra_dfll*,char*,int*) ;

__attribute__((used)) static int FUNC_6(struct tegra_dfll *VAR_3)
{
 int VAR_4, VAR_5;
 u32 VAR_6;

 if (!VAR_3->soc->alignment.step_uv || !VAR_3->soc->alignment.offset_uv) {
  FUNC_2(VAR_3->dev,
   "Missing step or alignment info for PWM regulator");
  return -VAR_0;
 }
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  VAR_3->lut_uv[VAR_5] = VAR_3->soc->alignment.offset_uv +
    VAR_5 * VAR_3->soc->alignment.step_uv;

 VAR_4 = FUNC_5(VAR_3, "nvidia,pwm-tristate-microvolts",
       &VAR_3->reg_init_uV);
 if (!VAR_4) {
  FUNC_2(VAR_3->dev, "couldn't get initialized voltage\n");
  return VAR_4;
 }

 VAR_4 = FUNC_5(VAR_3, "nvidia,pwm-period-nanoseconds", &VAR_6);
 if (!VAR_4) {
  FUNC_2(VAR_3->dev, "couldn't get PWM period\n");
  return VAR_4;
 }
 VAR_3->pwm_rate = (VAR_2 / VAR_6) * (VAR_1 - 1);

 VAR_3->pwm_pin = FUNC_3(VAR_3->dev);
 if (FUNC_0(VAR_3->pwm_pin)) {
  FUNC_2(VAR_3->dev, "DT: missing pinctrl device\n");
  return FUNC_1(VAR_3->pwm_pin);
 }

 VAR_3->pwm_enable_state = FUNC_4(VAR_3->pwm_pin,
          "dvfs_pwm_enable");
 if (FUNC_0(VAR_3->pwm_enable_state)) {
  FUNC_2(VAR_3->dev, "DT: missing pwm enabled state\n");
  return FUNC_1(VAR_3->pwm_enable_state);
 }

 VAR_3->pwm_disable_state = FUNC_4(VAR_3->pwm_pin,
           "dvfs_pwm_disable");
 if (FUNC_0(VAR_3->pwm_disable_state)) {
  FUNC_2(VAR_3->dev, "DT: missing pwm disabled state\n");
  return FUNC_1(VAR_3->pwm_disable_state);
 }

 return 0;
}
