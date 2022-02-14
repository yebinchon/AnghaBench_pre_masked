
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_mux_core {int dummy; } ;
struct i2c_arbitrator_data {int slew_delay_us; int our_gpio; } ;


 int FUNC_0 (int ,int ) ;
 struct i2c_arbitrator_data* FUNC_1 (struct i2c_mux_core*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_mux_core *VAR_0, u32 VAR_1)
{
 const struct i2c_arbitrator_data *VAR_2 = FUNC_1(VAR_0);


 FUNC_0(VAR_2->our_gpio, 0);
 FUNC_2(VAR_2->slew_delay_us);

 return 0;
}
