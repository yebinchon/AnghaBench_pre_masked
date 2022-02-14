
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_msg {int dummy; } ;
struct i2c_demux_pinctrl_priv {size_t cur_chan; TYPE_1__* chan; } ;
struct i2c_adapter {struct i2c_demux_pinctrl_priv* algo_data; } ;
struct TYPE_2__ {struct i2c_adapter* parent_adap; } ;


 int FUNC_0 (struct i2c_adapter*,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_adapter *VAR_0, struct i2c_msg VAR_1[], int VAR_2)
{
 struct i2c_demux_pinctrl_priv *VAR_3 = VAR_0->algo_data;
 struct i2c_adapter *VAR_4 = VAR_3->chan[VAR_3->cur_chan].parent_adap;

 return FUNC_0(VAR_4, VAR_1, VAR_2);
}
