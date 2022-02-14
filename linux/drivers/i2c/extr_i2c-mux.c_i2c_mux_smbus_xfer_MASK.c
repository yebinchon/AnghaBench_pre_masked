
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union i2c_smbus_data {int dummy; } i2c_smbus_data ;
typedef int u8 ;
typedef int u16 ;
struct i2c_mux_priv {int chan_id; struct i2c_mux_core* muxc; } ;
struct i2c_mux_core {int (* select ) (struct i2c_mux_core*,int ) ;int (* deselect ) (struct i2c_mux_core*,int ) ;struct i2c_adapter* parent; } ;
struct i2c_adapter {struct i2c_mux_priv* algo_data; } ;


 int FUNC_0 (struct i2c_adapter*,int ,unsigned short,char,int ,int,union i2c_smbus_data*) ;
 int FUNC_1 (struct i2c_mux_core*,int ) ;
 int FUNC_2 (struct i2c_mux_core*,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_adapter *VAR_0,
         u16 VAR_1, unsigned short VAR_2,
         char VAR_3, u8 VAR_4,
         int VAR_5, union i2c_smbus_data *VAR_6)
{
 struct i2c_mux_priv *VAR_7 = VAR_0->algo_data;
 struct i2c_mux_core *VAR_8 = VAR_7->muxc;
 struct i2c_adapter *VAR_9 = VAR_8->parent;
 int VAR_10;



 VAR_10 = VAR_8->select(VAR_8, VAR_7->chan_id);
 if (VAR_10 >= 0)
  VAR_10 = FUNC_0(VAR_9, VAR_1, VAR_2,
         VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_8->deselect)
  VAR_8->deselect(VAR_8, VAR_7->chan_id);

 return VAR_10;
}
