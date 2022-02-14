
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2c_mux_core {int dummy; } ;
struct gpiomux {int dummy; } ;


 int FUNC_0 (struct gpiomux*,int ) ;
 struct gpiomux* FUNC_1 (struct i2c_mux_core*) ;

__attribute__((used)) static int FUNC_2(struct i2c_mux_core *VAR_0, u32 VAR_1)
{
 struct gpiomux *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2, VAR_1);

 return 0;
}
