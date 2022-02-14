
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct i2c_demux_pinctrl_priv {scalar_t__ cur_chan; } ;


 int FUNC_0 (struct i2c_demux_pinctrl_priv*,scalar_t__) ;
 int FUNC_1 (struct i2c_demux_pinctrl_priv*) ;

__attribute__((used)) static int FUNC_2(struct i2c_demux_pinctrl_priv *VAR_0, u32 VAR_1)
{
 int VAR_2;

 if (VAR_1 == VAR_0->cur_chan)
  return 0;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  return VAR_2;

 return FUNC_0(VAR_0, VAR_1);
}
