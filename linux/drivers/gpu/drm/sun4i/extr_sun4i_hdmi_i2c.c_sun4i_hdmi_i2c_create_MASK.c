
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_hdmi {struct i2c_adapter* i2c; int ddc_parent_clk; } ;
struct i2c_adapter {int name; int * algo; int class; int owner; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct i2c_adapter* FUNC_0 (struct device*,int,int ) ;
 int FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (struct i2c_adapter*,struct sun4i_hdmi*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct sun4i_hdmi*,int ) ;
 int VAR_4 ;
 int FUNC_5 (struct sun4i_hdmi*) ;

int FUNC_6(struct device *VAR_5, struct sun4i_hdmi *VAR_6)
{
 struct i2c_adapter *VAR_7;
 int VAR_8 = 0;

 VAR_8 = FUNC_4(VAR_6, VAR_6->ddc_parent_clk);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_5(VAR_6);
 if (VAR_8)
  return VAR_8;

 VAR_7 = FUNC_0(VAR_5, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->owner = VAR_3;
 VAR_7->class = VAR_2;
 VAR_7->algo = &VAR_4;
 FUNC_3(VAR_7->name, "sun4i_hdmi_i2c adapter", sizeof(VAR_7->name));
 FUNC_2(VAR_7, VAR_6);

 VAR_8 = FUNC_1(VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_6->i2c = VAR_7;

 return VAR_8;
}
