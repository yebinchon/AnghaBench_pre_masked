
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxcpld_mux_plat_data {int num_adaps; int* adap_ids; } ;
struct mlxcpld_mux {scalar_t__ last_chan; struct i2c_client* client; } ;
struct i2c_mux_core {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mlxcpld_mux_plat_data* FUNC_0 (int *) ;
 int FUNC_1 (struct i2c_adapter*,int ) ;
 int FUNC_2 (struct i2c_mux_core*,int,int,int ) ;
 struct i2c_mux_core* FUNC_3 (struct i2c_adapter*,int *,int,int,int ,int ,int ) ;
 int FUNC_4 (struct i2c_mux_core*) ;
 struct mlxcpld_mux* FUNC_5 (struct i2c_mux_core*) ;
 int FUNC_6 (struct i2c_client*,struct i2c_mux_core*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_7,
        const struct i2c_device_id *VAR_8)
{
 struct i2c_adapter *VAR_9 = VAR_7->adapter;
 struct mlxcpld_mux_plat_data *VAR_10 = FUNC_0(&VAR_7->dev);
 struct i2c_mux_core *VAR_11;
 int VAR_12, VAR_13;
 struct mlxcpld_mux *VAR_14;
 int VAR_15;

 if (!VAR_10)
  return -VAR_1;

 if (!FUNC_1(VAR_9, VAR_4))
  return -VAR_2;

 VAR_11 = FUNC_3(VAR_9, &VAR_7->dev, VAR_0,
        sizeof(*VAR_14), 0, VAR_6,
        VAR_5);
 if (!VAR_11)
  return -VAR_3;

 VAR_14 = FUNC_5(VAR_11);
 FUNC_6(VAR_7, VAR_11);
 VAR_14->client = VAR_7;
 VAR_14->last_chan = 0;


 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
  if (VAR_12 >= VAR_10->num_adaps)

   break;

  VAR_13 = VAR_10->adap_ids[VAR_12];

  VAR_15 = FUNC_2(VAR_11, VAR_13, VAR_12, 0);
  if (VAR_15)
   goto virt_reg_failed;
 }

 return 0;

virt_reg_failed:
 FUNC_4(VAR_11);
 return VAR_15;
}
