
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ts_nbus {struct pwm_device* pwm; int lock; } ;
struct pwm_device {int dummy; } ;
struct pwm_args {int period; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct pwm_device*) ;
 int FUNC_1 (struct pwm_device*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,struct ts_nbus*) ;
 struct ts_nbus* FUNC_5 (struct device*,int,int ) ;
 struct pwm_device* FUNC_6 (struct device*,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *,int *,struct device*) ;
 int FUNC_9 (struct pwm_device*) ;
 int FUNC_10 (struct pwm_device*,int ,int ) ;
 int FUNC_11 (struct pwm_device*) ;
 int FUNC_12 (struct pwm_device*,struct pwm_args*) ;
 int FUNC_13 (struct platform_device*,struct ts_nbus*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_4)
{
 struct pwm_device *VAR_5;
 struct pwm_args VAR_6;
 struct device *VAR_7 = &VAR_4->dev;
 struct ts_nbus *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_5(VAR_7, sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_1;

 FUNC_7(&VAR_8->lock);

 VAR_9 = FUNC_13(VAR_4, VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_5 = FUNC_6(VAR_7, ((void*)0));
 if (FUNC_0(VAR_5)) {
  VAR_9 = FUNC_1(VAR_5);
  if (VAR_9 != -VAR_2)
   FUNC_2(VAR_7, "unable to request PWM\n");
  return VAR_9;
 }

 FUNC_12(VAR_5, &VAR_6);
 if (!VAR_6.period) {
  FUNC_2(&VAR_4->dev, "invalid PWM period\n");
  return -VAR_0;
 }





 FUNC_9(VAR_5);
 VAR_9 = FUNC_10(VAR_5, VAR_6.period, VAR_6.period);
 if (VAR_9 < 0)
  return VAR_9;




 FUNC_11(VAR_5);
 VAR_8->pwm = VAR_5;




 FUNC_4(VAR_7, VAR_8);

 VAR_9 = FUNC_8(VAR_7->of_node, ((void*)0), ((void*)0), VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_3(VAR_7, "initialized\n");

 return 0;
}
