
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlxreg_led_priv_data {int access_lock; struct mlxreg_core_platform_data* pdata; } ;
struct mlxreg_led_data {struct mlxreg_core_data* data; struct mlxreg_led_priv_data* data_parent; } ;
struct mlxreg_core_platform_data {int regmap; } ;
struct mlxreg_core_data {int mask; int reg; scalar_t__ bit; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct mlxreg_led_data *VAR_0, u8 VAR_1)
{
 struct mlxreg_led_priv_data *VAR_2 = VAR_0->data_parent;
 struct mlxreg_core_platform_data *VAR_3 = VAR_2->pdata;
 struct mlxreg_core_data *VAR_4 = VAR_0->data;
 u32 VAR_5;
 u32 VAR_6;
 int VAR_7;
 FUNC_0(&VAR_2->access_lock);

 VAR_7 = FUNC_2(VAR_3->regmap, VAR_4->reg, &VAR_5);
 if (VAR_7)
  goto access_error;

 VAR_6 = (FUNC_5(VAR_4->mask, VAR_4->bit) == 0xf0) ? FUNC_4(VAR_1, VAR_4->bit) :
       FUNC_4(VAR_1, VAR_4->bit + 4);
 VAR_5 = (VAR_5 & VAR_4->mask) | VAR_6;

 VAR_7 = FUNC_3(VAR_3->regmap, VAR_4->reg, VAR_5);

access_error:
 FUNC_1(&VAR_2->access_lock);

 return VAR_7;
}
