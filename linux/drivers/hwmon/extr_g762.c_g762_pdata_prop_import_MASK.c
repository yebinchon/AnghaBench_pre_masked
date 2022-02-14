
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct g762_platform_data {int clk_freq; int fan_startv; int pwm_polarity; int fan_gear_mode; } ;


 struct g762_platform_data* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0)
{
 struct g762_platform_data *VAR_1 = FUNC_0(&VAR_0->dev);
 int VAR_2;

 if (!VAR_1)
  return 0;

 VAR_2 = FUNC_2(&VAR_0->dev, VAR_1->fan_gear_mode);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_4(&VAR_0->dev, VAR_1->pwm_polarity);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_3(&VAR_0->dev, VAR_1->fan_startv);
 if (VAR_2)
  return VAR_2;

 return FUNC_1(&VAR_0->dev, VAR_1->clk_freq);
}
