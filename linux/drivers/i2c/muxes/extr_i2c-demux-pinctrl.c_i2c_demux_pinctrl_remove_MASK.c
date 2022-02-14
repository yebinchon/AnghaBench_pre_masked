
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct i2c_demux_pinctrl_priv {int num_chan; TYPE_1__* chan; } ;
struct TYPE_2__ {int chgset; int parent_np; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct i2c_demux_pinctrl_priv*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 struct i2c_demux_pinctrl_priv* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct i2c_demux_pinctrl_priv *VAR_3 = FUNC_4(VAR_2);
 int VAR_4;

 FUNC_0(&VAR_2->dev, &VAR_1);
 FUNC_0(&VAR_2->dev, &VAR_0);

 FUNC_1(VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_3->num_chan; VAR_4++) {
  FUNC_3(VAR_3->chan[VAR_4].parent_np);
  FUNC_2(&VAR_3->chan[VAR_4].chgset);
 }

 return 0;
}
