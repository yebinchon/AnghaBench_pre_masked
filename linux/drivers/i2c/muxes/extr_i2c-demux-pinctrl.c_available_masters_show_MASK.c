
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_demux_pinctrl_priv {int num_chan; TYPE_1__* chan; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int parent_np; } ;


 int VAR_0 ;
 struct i2c_demux_pinctrl_priv* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char*,int,char*,int,int ,char) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
          struct device_attribute *VAR_2,
          char *VAR_3)
{
 struct i2c_demux_pinctrl_priv *VAR_4 = FUNC_0(VAR_1);
 int VAR_5 = 0, VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4->num_chan && VAR_5 < VAR_0; VAR_6++)
  VAR_5 += FUNC_1(VAR_3 + VAR_5, VAR_0 - VAR_5, "%d:%pOF%c",
       VAR_6, VAR_4->chan[VAR_6].parent_np,
       VAR_6 == VAR_4->num_chan - 1 ? '\n' : ' ');

 return VAR_5;
}
