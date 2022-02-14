
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct i2c_adapter {int name; int * algo; TYPE_1__ dev; int owner; int class; } ;
struct dw_hdmi_i2c {struct i2c_adapter adap; int cmp; int lock; } ;
struct dw_hdmi {int dev; struct dw_hdmi_i2c* i2c; } ;


 int VAR_0 ;
 struct i2c_adapter* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,struct dw_hdmi_i2c*) ;
 struct dw_hdmi_i2c* FUNC_4 (int ,int,int ) ;
 int VAR_4 ;
 int FUNC_5 (struct i2c_adapter*) ;
 int FUNC_6 (struct i2c_adapter*,struct dw_hdmi*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,char*,int) ;

__attribute__((used)) static struct i2c_adapter *FUNC_10(struct dw_hdmi *VAR_5)
{
 struct i2c_adapter *VAR_6;
 struct dw_hdmi_i2c *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(VAR_5->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 FUNC_8(&VAR_7->lock);
 FUNC_7(&VAR_7->cmp);

 VAR_6 = &VAR_7->adap;
 VAR_6->class = VAR_2;
 VAR_6->owner = VAR_3;
 VAR_6->dev.parent = VAR_5->dev;
 VAR_6->algo = &VAR_4;
 FUNC_9(VAR_6->name, "DesignWare HDMI", sizeof(VAR_6->name));
 FUNC_6(VAR_6, VAR_5);

 VAR_8 = FUNC_5(VAR_6);
 if (VAR_8) {
  FUNC_2(VAR_5->dev, "cannot add %s I2C adapter\n", VAR_6->name);
  FUNC_3(VAR_5->dev, VAR_7);
  return FUNC_0(VAR_8);
 }

 VAR_5->i2c = VAR_7;

 FUNC_1(VAR_5->dev, "registered %s I2C bus driver\n", VAR_6->name);

 return VAR_6;
}
