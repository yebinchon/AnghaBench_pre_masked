
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_init_data {int dummy; } ;
struct led_classdev {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,struct led_classdev**) ;
 struct led_classdev** FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct led_classdev**) ;
 int FUNC_3 (struct device*,struct led_classdev*,struct led_init_data*) ;

int FUNC_4(struct device *VAR_3,
       struct led_classdev *VAR_4,
       struct led_init_data *VAR_5)
{
 struct led_classdev **VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_2, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5);
 if (VAR_7) {
  FUNC_2(VAR_6);
  return VAR_7;
 }

 *VAR_6 = VAR_4;
 FUNC_0(VAR_3, VAR_6);

 return 0;
}
