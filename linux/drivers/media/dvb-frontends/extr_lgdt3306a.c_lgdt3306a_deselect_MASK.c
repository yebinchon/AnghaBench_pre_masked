
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lgdt3306a_state {int frontend; } ;
struct i2c_mux_core {int dummy; } ;
struct i2c_client {int dummy; } ;


 struct lgdt3306a_state* FUNC_0 (struct i2c_client*) ;
 struct i2c_client* FUNC_1 (struct i2c_mux_core*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_mux_core *VAR_0, u32 VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_1(VAR_0);
 struct lgdt3306a_state *VAR_3 = FUNC_0(VAR_2);

 return FUNC_2(&VAR_3->frontend, 0);
}
