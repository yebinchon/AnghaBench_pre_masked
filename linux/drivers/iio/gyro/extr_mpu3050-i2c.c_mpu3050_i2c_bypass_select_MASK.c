
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mpu3050 {int dev; } ;
struct i2c_mux_core {int dummy; } ;


 struct mpu3050* FUNC_0 (struct i2c_mux_core*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_mux_core *VAR_0, u32 VAR_1)
{
 struct mpu3050 *VAR_2 = FUNC_0(VAR_0);


 FUNC_1(VAR_2->dev);
 return 0;
}
