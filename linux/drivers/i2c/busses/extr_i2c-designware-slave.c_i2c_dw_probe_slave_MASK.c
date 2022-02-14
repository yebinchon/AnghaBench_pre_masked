
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct i2c_adapter {int retries; TYPE_1__ dev; int * algo; int name; } ;
struct dw_i2c_dev {int (* init ) (struct dw_i2c_dev*) ;int dev; int irq; int disable_int; int disable; int cmd_complete; struct i2c_adapter adapter; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,struct dw_i2c_dev*) ;
 int FUNC_3 (struct i2c_adapter*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct dw_i2c_dev*) ;
 int VAR_4 ;
 int FUNC_5 (struct dw_i2c_dev*) ;
 int FUNC_6 (struct dw_i2c_dev*) ;
 int FUNC_7 (struct i2c_adapter*,struct dw_i2c_dev*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int,char*) ;
 int FUNC_10 (struct dw_i2c_dev*) ;

int FUNC_11(struct dw_i2c_dev *VAR_5)
{
 struct i2c_adapter *VAR_6 = &VAR_5->adapter;
 int VAR_7;

 FUNC_8(&VAR_5->cmd_complete);

 VAR_5->init = FUNC_4;
 VAR_5->disable = VAR_2;
 VAR_5->disable_int = VAR_3;

 VAR_7 = FUNC_5(VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_6(VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_7 = VAR_5->init(VAR_5);
 if (VAR_7)
  return VAR_7;

 FUNC_9(VAR_6->name, sizeof(VAR_6->name),
   "Synopsys DesignWare I2C Slave adapter");
 VAR_6->retries = 3;
 VAR_6->algo = &VAR_1;
 VAR_6->dev.parent = VAR_5->dev;
 FUNC_7(VAR_6, VAR_5);

 VAR_7 = FUNC_2(VAR_5->dev, VAR_5->irq, VAR_4,
          VAR_0, FUNC_1(VAR_5->dev), VAR_5);
 if (VAR_7) {
  FUNC_0(VAR_5->dev, "failure requesting irq %i: %d\n",
   VAR_5->irq, VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7)
  FUNC_0(VAR_5->dev, "failure adding adapter: %d\n", VAR_7);

 return VAR_7;
}
