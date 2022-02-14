
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxreg_led_data {scalar_t__ base_color; } ;
struct led_classdev {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct mlxreg_led_data* FUNC_0 (struct led_classdev*) ;
 int FUNC_1 (struct mlxreg_led_data*,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct led_classdev *VAR_5, unsigned long *VAR_6,
       unsigned long *VAR_7)
{
 struct mlxreg_led_data *VAR_8 = FUNC_0(VAR_5);
 int VAR_9;






 if (!(*VAR_6 == 0 && *VAR_7 == 0) &&
     !(*VAR_6 == VAR_1 &&
       *VAR_7 == VAR_1) &&
     !(*VAR_6 == VAR_2 &&
       *VAR_7 == VAR_2))
  return -VAR_0;

 if (*VAR_6 == VAR_2)
  VAR_9 = FUNC_1(VAR_8, VAR_8->base_color +
       VAR_4);
 else if (*VAR_6 == VAR_1)
  VAR_9 = FUNC_1(VAR_8, VAR_8->base_color +
       VAR_3);
 else
  VAR_9 = FUNC_1(VAR_8, VAR_8->base_color);

 return VAR_9;
}
