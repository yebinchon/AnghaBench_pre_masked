
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct pwm_state {int enabled; } ;
struct pwm_beeper {int bell_frequency; TYPE_2__* input; int work; int amplifier; int pwm; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_6__ {int vendor; int product; int version; int bustype; } ;
struct TYPE_7__ {char* name; char* phys; int close; int event; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct device*,char*,int*) ;
 TYPE_2__* FUNC_6 (struct device*) ;
 struct pwm_beeper* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct device*,int *) ;
 int FUNC_9 (struct device*,char*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,int ,int ) ;
 int FUNC_12 (TYPE_2__*,struct pwm_beeper*) ;
 int FUNC_13 (struct platform_device*,struct pwm_beeper*) ;
 int FUNC_14 (int ,struct pwm_state*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_15 (int ,struct pwm_state*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_10)
{
 struct device *VAR_11 = &VAR_10->dev;
 struct pwm_beeper *VAR_12;
 struct pwm_state VAR_13;
 u32 VAR_14;
 int VAR_15;

 VAR_12 = FUNC_7(VAR_11, sizeof(*VAR_12), VAR_4);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->pwm = FUNC_8(VAR_11, ((void*)0));
 if (FUNC_1(VAR_12->pwm)) {
  VAR_15 = FUNC_2(VAR_12->pwm);
  if (VAR_15 != -VAR_2)
   FUNC_4(VAR_11, "Failed to request PWM device: %d\n",
    VAR_15);
  return VAR_15;
 }


 FUNC_15(VAR_12->pwm, &VAR_13);
 VAR_13.enabled = 0;
 VAR_15 = FUNC_14(VAR_12->pwm, &VAR_13);
 if (VAR_15) {
  FUNC_4(VAR_11, "failed to apply initial PWM state: %d\n",
   VAR_15);
  return VAR_15;
 }

 VAR_12->amplifier = FUNC_9(VAR_11, "amp");
 if (FUNC_1(VAR_12->amplifier)) {
  VAR_15 = FUNC_2(VAR_12->amplifier);
  if (VAR_15 != -VAR_2)
   FUNC_4(VAR_11, "Failed to get 'amp' regulator: %d\n",
    VAR_15);
  return VAR_15;
 }

 FUNC_0(&VAR_12->work, VAR_9);

 VAR_15 = FUNC_5(VAR_11, "beeper-hz", &VAR_14);
 if (VAR_15) {
  VAR_14 = 1000;
  FUNC_3(VAR_11,
   "failed to parse 'beeper-hz' property, using default: %uHz\n",
   VAR_14);
 }

 VAR_12->bell_frequency = VAR_14;

 VAR_12->input = FUNC_6(VAR_11);
 if (!VAR_12->input) {
  FUNC_4(VAR_11, "Failed to allocate input device\n");
  return -VAR_1;
 }

 VAR_12->input->name = "pwm-beeper";
 VAR_12->input->phys = "pwm/input0";
 VAR_12->input->id.bustype = VAR_0;
 VAR_12->input->id.vendor = 0x001f;
 VAR_12->input->id.product = 0x0001;
 VAR_12->input->id.version = 0x0100;

 FUNC_11(VAR_12->input, VAR_3, VAR_6);
 FUNC_11(VAR_12->input, VAR_3, VAR_5);

 VAR_12->input->event = VAR_8;
 VAR_12->input->close = VAR_7;

 FUNC_12(VAR_12->input, VAR_12);

 VAR_15 = FUNC_10(VAR_12->input);
 if (VAR_15) {
  FUNC_4(VAR_11, "Failed to register input device: %d\n", VAR_15);
  return VAR_15;
 }

 FUNC_13(VAR_10, VAR_12);

 return 0;
}
