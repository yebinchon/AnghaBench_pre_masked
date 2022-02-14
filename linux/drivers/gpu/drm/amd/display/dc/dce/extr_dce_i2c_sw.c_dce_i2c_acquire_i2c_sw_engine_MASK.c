
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_pool {struct dce_i2c_sw** sw_i2cs; } ;
struct ddc {int dummy; } ;
struct dce_i2c_sw {int dummy; } ;
typedef enum gpio_ddc_line { ____Placeholder_gpio_ddc_line } gpio_ddc_line ;


 int FUNC_0 (struct dce_i2c_sw*,struct ddc*) ;
 scalar_t__ FUNC_1 (struct ddc*,int*) ;

struct dce_i2c_sw *FUNC_2(
 struct resource_pool *VAR_0,
 struct ddc *VAR_1)
{
 enum gpio_ddc_line VAR_2;
 struct dce_i2c_sw *VAR_3 = ((void*)0);

 if (FUNC_1(VAR_1, &VAR_2))
  VAR_3 = VAR_0->sw_i2cs[VAR_2];

 if (!VAR_3)
  return ((void*)0);

 if (!FUNC_0(VAR_3, VAR_1))
  return ((void*)0);

 return VAR_3;
}
