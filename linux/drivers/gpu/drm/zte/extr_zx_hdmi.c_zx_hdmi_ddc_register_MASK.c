
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct i2c_adapter {int name; int * algo; TYPE_1__ dev; int class; int owner; } ;
struct zx_hdmi_i2c {struct i2c_adapter adap; int lock; } ;
struct zx_hdmi {int dev; struct zx_hdmi_i2c* ddc; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct zx_hdmi_i2c* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (struct i2c_adapter*,struct zx_hdmi*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int,char*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(struct zx_hdmi *VAR_5)
{
 struct i2c_adapter *VAR_6;
 struct zx_hdmi_i2c *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_5->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_5->ddc = VAR_7;
 FUNC_4(&VAR_7->lock);

 VAR_6 = &VAR_7->adap;
 VAR_6->owner = VAR_3;
 VAR_6->class = VAR_2;
 VAR_6->dev.parent = VAR_5->dev;
 VAR_6->algo = &VAR_4;
 FUNC_5(VAR_6->name, sizeof(VAR_6->name), "zx hdmi i2c");

 VAR_8 = FUNC_2(VAR_6);
 if (VAR_8) {
  FUNC_0(VAR_5->dev, "failed to add I2C adapter: %d\n",
         VAR_8);
  return VAR_8;
 }

 FUNC_3(VAR_6, VAR_5);

 return 0;
}
