
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pwm_device {int dummy; } ;
struct pwm_args {int period; } ;
struct TYPE_8__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct device_node {char* name; } ;
struct TYPE_7__ {struct clk_init_data* init; } ;
struct clk_pwm {int fixed_rate; TYPE_1__ hw; struct pwm_device* pwm; } ;
struct clk_init_data {char const* name; scalar_t__ num_parents; scalar_t__ flags; int * ops; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct pwm_device*) ;
 int VAR_3 ;
 int FUNC_2 (struct pwm_device*) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 struct clk_pwm* FUNC_5 (TYPE_2__*,int,int ) ;
 struct pwm_device* FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (struct device_node*,int ,TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_8 (struct device_node*,char*,char const**) ;
 scalar_t__ FUNC_9 (struct device_node*,char*,int*) ;
 int FUNC_10 (struct pwm_device*) ;
 int FUNC_11 (struct pwm_device*,int,int) ;
 int FUNC_12 (struct pwm_device*,struct pwm_args*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_6)
{
 struct device_node *VAR_7 = VAR_6->dev.of_node;
 struct clk_init_data VAR_8;
 struct clk_pwm *VAR_9;
 struct pwm_device *VAR_10;
 struct pwm_args VAR_11;
 const char *VAR_12;
 int VAR_13;

 VAR_9 = FUNC_5(&VAR_6->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_10 = FUNC_6(&VAR_6->dev, ((void*)0));
 if (FUNC_1(VAR_10))
  return FUNC_2(VAR_10);

 FUNC_12(VAR_10, &VAR_11);
 if (!VAR_11.period) {
  FUNC_3(&VAR_6->dev, "invalid PWM period\n");
  return -VAR_0;
 }

 if (FUNC_9(VAR_7, "clock-frequency", &VAR_9->fixed_rate))
  VAR_9->fixed_rate = VAR_3 / VAR_11.period;

 if (VAR_11.period != VAR_3 / VAR_9->fixed_rate &&
     VAR_11.period != FUNC_0(VAR_3, VAR_9->fixed_rate)) {
  FUNC_3(&VAR_6->dev,
   "clock-frequency does not match PWM period\n");
  return -VAR_0;
 }





 FUNC_10(VAR_10);
 VAR_13 = FUNC_11(VAR_10, (VAR_11.period + 1) >> 1, VAR_11.period);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_12 = VAR_7->name;
 FUNC_8(VAR_7, "clock-output-names", &VAR_12);

 VAR_8.name = VAR_12;
 VAR_8.ops = &VAR_4;
 VAR_8.flags = 0;
 VAR_8.num_parents = 0;

 VAR_9->pwm = VAR_10;
 VAR_9->hw.init = &VAR_8;
 VAR_13 = FUNC_4(&VAR_6->dev, &VAR_9->hw);
 if (VAR_13)
  return VAR_13;

 return FUNC_7(VAR_7, VAR_5, &VAR_9->hw);
}
