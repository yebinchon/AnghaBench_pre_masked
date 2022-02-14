
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlxcpld_mux {scalar_t__ last_chan; struct i2c_client* client; } ;
struct i2c_mux_core {int parent; } ;
struct i2c_client {int dummy; } ;


 struct mlxcpld_mux* FUNC_0 (struct i2c_mux_core*) ;
 int FUNC_1 (int ,struct i2c_client*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct i2c_mux_core *VAR_0, u32 VAR_1)
{
 struct mlxcpld_mux *VAR_2 = FUNC_0(VAR_0);
 struct i2c_client *VAR_3 = VAR_2->client;


 VAR_2->last_chan = 0;

 return FUNC_1(VAR_0->parent, VAR_3, VAR_2->last_chan);
}
