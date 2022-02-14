
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_gpio_platform_data {void* scl_is_output_only; void* scl_is_open_drain; void* sda_is_open_drain; int timeout; int udelay; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (struct device_node*,char*) ;
 int FUNC_2 (struct device_node*,char*,int *) ;

__attribute__((used)) static void FUNC_3(struct device_node *VAR_0,
      struct i2c_gpio_platform_data *VAR_1)
{
 u32 VAR_2;

 FUNC_2(VAR_0, "i2c-gpio,delay-us", &VAR_1->udelay);

 if (!FUNC_2(VAR_0, "i2c-gpio,timeout-ms", &VAR_2))
  VAR_1->timeout = FUNC_0(VAR_2);

 VAR_1->sda_is_open_drain =
  FUNC_1(VAR_0, "i2c-gpio,sda-open-drain");
 VAR_1->scl_is_open_drain =
  FUNC_1(VAR_0, "i2c-gpio,scl-open-drain");
 VAR_1->scl_is_output_only =
  FUNC_1(VAR_0, "i2c-gpio,scl-output-only");
}
