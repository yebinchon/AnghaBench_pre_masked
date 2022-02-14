
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int byte; } ;
typedef int u8 ;
struct mlxcpld_mux_plat_data {int sel_reg_addr; } ;
struct i2c_client {int flags; int addr; int dev; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_adapter*,int ,int ,int ,int ,int ,union i2c_smbus_data*) ;
 struct mlxcpld_mux_plat_data* FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct i2c_adapter *VAR_2,
     struct i2c_client *VAR_3, u8 VAR_4)
{
 struct mlxcpld_mux_plat_data *VAR_5 = FUNC_1(&VAR_3->dev);
 union i2c_smbus_data VAR_6 = { .byte = VAR_4 };

 return FUNC_0(VAR_2, VAR_3->addr, VAR_3->flags,
    VAR_1, VAR_5->sel_reg_addr,
    VAR_0, &VAR_6);
}
