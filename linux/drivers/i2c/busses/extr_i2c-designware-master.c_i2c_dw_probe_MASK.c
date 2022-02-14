
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct i2c_adapter {int retries; TYPE_1__ dev; int * quirks; int * algo; int name; } ;
struct dw_i2c_dev {int (* init ) (struct dw_i2c_dev*) ;int flags; int dev; int irq; int (* disable_int ) (struct dw_i2c_dev*) ;int disable; int cmd_complete; struct i2c_adapter adapter; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,unsigned long,int ,struct dw_i2c_dev*) ;
 int FUNC_3 (struct i2c_adapter*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct dw_i2c_dev*) ;
 int FUNC_5 (struct dw_i2c_dev*) ;
 int FUNC_6 (struct dw_i2c_dev*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (struct dw_i2c_dev*) ;
 int FUNC_8 (struct dw_i2c_dev*) ;
 int FUNC_9 (struct i2c_adapter*,struct dw_i2c_dev*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int,char*) ;
 int FUNC_14 (struct dw_i2c_dev*) ;

int FUNC_15(struct dw_i2c_dev *VAR_8)
{
 struct i2c_adapter *VAR_9 = &VAR_8->adapter;
 unsigned long VAR_10;
 int VAR_11;

 FUNC_10(&VAR_8->cmd_complete);

 VAR_8->init = FUNC_5;
 VAR_8->disable = VAR_5;
 VAR_8->disable_int = FUNC_4;

 VAR_11 = FUNC_7(VAR_8);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_8(VAR_8);
 if (VAR_11)
  return VAR_11;

 VAR_11 = VAR_8->init(VAR_8);
 if (VAR_11)
  return VAR_11;

 FUNC_13(VAR_9->name, sizeof(VAR_9->name),
   "Synopsys DesignWare I2C adapter");
 VAR_9->retries = 3;
 VAR_9->algo = &VAR_4;
 VAR_9->quirks = &VAR_7;
 VAR_9->dev.parent = VAR_8->dev;
 FUNC_9(VAR_9, VAR_8);

 if (VAR_8->flags & VAR_0) {
  VAR_10 = VAR_2;
 } else {
  VAR_10 = VAR_3 | VAR_1;
 }

 FUNC_4(VAR_8);
 VAR_11 = FUNC_2(VAR_8->dev, VAR_8->irq, VAR_6, VAR_10,
          FUNC_1(VAR_8->dev), VAR_8);
 if (VAR_11) {
  FUNC_0(VAR_8->dev, "failure requesting irq %i: %d\n",
   VAR_8->irq, VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_6(VAR_8);
 if (VAR_11)
  return VAR_11;







 FUNC_11(VAR_8->dev);
 VAR_11 = FUNC_3(VAR_9);
 if (VAR_11)
  FUNC_0(VAR_8->dev, "failure adding adapter: %d\n", VAR_11);
 FUNC_12(VAR_8->dev);

 return VAR_11;
}
