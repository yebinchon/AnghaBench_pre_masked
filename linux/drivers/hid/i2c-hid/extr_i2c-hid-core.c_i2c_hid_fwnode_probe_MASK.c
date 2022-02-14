
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_hid_platform_data {int post_power_delay_ms; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*,int *) ;

__attribute__((used)) static void FUNC_1(struct i2c_client *VAR_0,
     struct i2c_hid_platform_data *VAR_1)
{
 u32 VAR_2;

 if (!FUNC_0(&VAR_0->dev, "post-power-on-delay-ms",
          &VAR_2))
  VAR_1->post_power_delay_ms = VAR_2;
}
