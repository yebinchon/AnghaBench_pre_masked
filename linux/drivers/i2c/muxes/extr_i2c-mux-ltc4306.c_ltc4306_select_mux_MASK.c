
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ltc4306 {int regmap; } ;
struct i2c_mux_core {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ltc4306* FUNC_1 (struct i2c_mux_core*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_mux_core *VAR_2, u32 VAR_3)
{
 struct ltc4306 *VAR_4 = FUNC_1(VAR_2);

 return FUNC_2(VAR_4->regmap, VAR_0,
      VAR_1, FUNC_0(7 - VAR_3));
}
