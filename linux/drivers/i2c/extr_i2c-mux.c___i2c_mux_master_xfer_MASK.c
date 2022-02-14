
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_mux_priv {int chan_id; struct i2c_mux_core* muxc; } ;
struct i2c_mux_core {int (* select ) (struct i2c_mux_core*,int ) ;int (* deselect ) (struct i2c_mux_core*,int ) ;struct i2c_adapter* parent; } ;
struct i2c_msg {int dummy; } ;
struct i2c_adapter {struct i2c_mux_priv* algo_data; } ;


 int FUNC_0 (struct i2c_adapter*,struct i2c_msg*,int) ;
 int FUNC_1 (struct i2c_mux_core*,int ) ;
 int FUNC_2 (struct i2c_mux_core*,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_adapter *VAR_0,
     struct i2c_msg VAR_1[], int VAR_2)
{
 struct i2c_mux_priv *VAR_3 = VAR_0->algo_data;
 struct i2c_mux_core *VAR_4 = VAR_3->muxc;
 struct i2c_adapter *VAR_5 = VAR_4->parent;
 int VAR_6;



 VAR_6 = VAR_4->select(VAR_4, VAR_3->chan_id);
 if (VAR_6 >= 0)
  VAR_6 = FUNC_0(VAR_5, VAR_1, VAR_2);
 if (VAR_4->deselect)
  VAR_4->deselect(VAR_4, VAR_3->chan_id);

 return VAR_6;
}
