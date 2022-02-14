
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ltc4306 {int regmap; } ;
struct i2c_mux_core {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ltc4306* FUNC_0 (struct i2c_mux_core*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_mux_core *VAR_2, u32 VAR_3)
{
 struct ltc4306 *VAR_4 = FUNC_0(VAR_2);

 return FUNC_1(VAR_4->regmap, VAR_0,
      VAR_1, 0);
}
