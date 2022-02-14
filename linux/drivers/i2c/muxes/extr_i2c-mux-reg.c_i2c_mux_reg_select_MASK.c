
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmux {int dummy; } ;
struct i2c_mux_core {int dummy; } ;


 struct regmux* FUNC_0 (struct i2c_mux_core*) ;
 int FUNC_1 (struct regmux*,int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_mux_core *VAR_0, u32 VAR_1)
{
 struct regmux *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, VAR_1);
}
