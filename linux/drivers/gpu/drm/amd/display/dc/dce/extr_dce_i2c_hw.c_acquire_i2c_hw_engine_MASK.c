
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct resource_pool {int i2c_hw_buffer_in_use; struct dce_i2c_hw** hw_i2cs; TYPE_2__* res_cap; } ;
struct TYPE_3__ {scalar_t__ hw_supported; } ;
struct ddc {TYPE_1__ hw_info; } ;
struct dce_i2c_hw {int original_speed; struct ddc* ddc; } ;
typedef enum gpio_result { ____Placeholder_gpio_result } gpio_result ;
typedef enum gpio_ddc_line { ____Placeholder_gpio_ddc_line } gpio_ddc_line ;
struct TYPE_4__ {int num_ddc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ddc*) ;
 int FUNC_1 (struct ddc*,int ,int ) ;
 int FUNC_2 (struct dce_i2c_hw*) ;
 int FUNC_3 (struct dce_i2c_hw*) ;
 int FUNC_4 (struct dce_i2c_hw*) ;
 int FUNC_5 (struct dce_i2c_hw*) ;
 int FUNC_6 (int) ;

struct dce_i2c_hw *FUNC_7(
 struct resource_pool *VAR_3,
 struct ddc *VAR_4)
{
 uint32_t VAR_5 = 0;
 enum gpio_result VAR_6;
 uint32_t VAR_7;
 struct dce_i2c_hw *VAR_8 = ((void*)0);

 if (!VAR_4)
  return ((void*)0);

 if (VAR_4->hw_info.hw_supported) {
  enum gpio_ddc_line VAR_9 = FUNC_0(VAR_4);

  if (VAR_9 < VAR_3->res_cap->num_ddc)
   VAR_8 = VAR_3->hw_i2cs[VAR_9];
 }

 if (!VAR_8)
  return ((void*)0);

 if (VAR_3->i2c_hw_buffer_in_use || !FUNC_3(VAR_8))
  return ((void*)0);

 do {
  VAR_6 = FUNC_1(VAR_4, VAR_1,
   VAR_0);

  if (VAR_6 == VAR_2)
   break;



  FUNC_6(10);

  ++VAR_5;
 } while (VAR_5 < 2);

 if (VAR_6 != VAR_2)
  return ((void*)0);

 VAR_8->ddc = VAR_4;

 VAR_7 = FUNC_2(VAR_8);

 if (VAR_7)
  VAR_8->original_speed = VAR_7;

 if (!FUNC_5(VAR_8)) {
  FUNC_4(VAR_8);
  return ((void*)0);
 }

 VAR_3->i2c_hw_buffer_in_use = 1;
 return VAR_8;
}
