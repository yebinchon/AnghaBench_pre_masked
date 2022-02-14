
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlxreg_led_priv_data {struct mlxreg_core_platform_data* pdata; } ;
struct TYPE_2__ {int dev; } ;
struct mlxreg_led_data {int base_color; TYPE_1__ led_cdev; struct mlxreg_core_data* data; struct mlxreg_led_priv_data* data_parent; } ;
struct mlxreg_core_platform_data {int regmap; } ;
struct mlxreg_core_data {int mask; scalar_t__ bit; int reg; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static enum led_brightness
FUNC_3(struct mlxreg_led_data *VAR_3)
{
 struct mlxreg_led_priv_data *VAR_4 = VAR_3->data_parent;
 struct mlxreg_core_platform_data *VAR_5 = VAR_4->pdata;
 struct mlxreg_core_data *VAR_6 = VAR_3->data;
 u32 VAR_7;
 int VAR_8;
 VAR_8 = FUNC_1(VAR_5->regmap, VAR_6->reg, &VAR_7);
 if (VAR_8 < 0) {
  FUNC_0(VAR_3->led_cdev.dev, "Failed to get current brightness, error: %d\n",
    VAR_8);

  return VAR_1;
 }

 VAR_7 = VAR_7 & ~VAR_6->mask;
 VAR_7 = (FUNC_2(VAR_6->mask, VAR_6->bit) == 0xf0) ? FUNC_2(VAR_7,
   VAR_6->bit) : FUNC_2(VAR_7, VAR_6->bit + 4);
 if (VAR_7 >= VAR_3->base_color &&
     VAR_7 <= (VAR_3->base_color + VAR_2))
  return VAR_0;

 return VAR_1;
}
