
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_demux_pinctrl_priv {int cur_chan; TYPE_1__* chan; int cur_adap; } ;
struct TYPE_2__ {int * parent_adap; int chgset; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct i2c_demux_pinctrl_priv *VAR_1)
{
 int VAR_2, VAR_3 = VAR_1->cur_chan;

 if (VAR_3 < 0)
  return 0;

 FUNC_0(&VAR_1->cur_adap);
 FUNC_1(VAR_1->chan[VAR_3].parent_adap);

 VAR_2 = FUNC_2(&VAR_1->chan[VAR_3].chgset);

 VAR_1->chan[VAR_3].parent_adap = ((void*)0);
 VAR_1->cur_chan = -VAR_0;

 return VAR_2;
}
