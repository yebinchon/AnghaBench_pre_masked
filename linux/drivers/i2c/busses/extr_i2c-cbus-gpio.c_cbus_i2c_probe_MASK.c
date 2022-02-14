
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; int id; } ;
struct TYPE_5__ {int of_node; TYPE_2__* parent; } ;
struct i2c_adapter {int name; int * algo; int timeout; int nr; TYPE_1__ dev; int class; int owner; } ;
struct cbus_host {TYPE_2__* dev; int lock; void* sel; void* dat; void* clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_2 (TYPE_2__*,int *,int,int ) ;
 void* FUNC_3 (TYPE_2__*,int,int ) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (void*,char*) ;
 int FUNC_6 (struct i2c_adapter*) ;
 int FUNC_7 (struct i2c_adapter*,struct cbus_host*) ;
 int FUNC_8 (struct platform_device*,struct i2c_adapter*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,char*,int) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_10)
{
 struct i2c_adapter *VAR_11;
 struct cbus_host *VAR_12;

 VAR_11 = FUNC_3(&VAR_10->dev, sizeof(struct i2c_adapter),
          VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_12 = FUNC_3(&VAR_10->dev, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 if (FUNC_4(&VAR_10->dev, ((void*)0)) != 3)
  return -VAR_0;
 VAR_12->clk = FUNC_2(&VAR_10->dev, ((void*)0), 0, VAR_5);
 if (FUNC_0(VAR_12->clk))
  return FUNC_1(VAR_12->clk);
 VAR_12->dat = FUNC_2(&VAR_10->dev, ((void*)0), 1, VAR_3);
 if (FUNC_0(VAR_12->dat))
  return FUNC_1(VAR_12->dat);
 VAR_12->sel = FUNC_2(&VAR_10->dev, ((void*)0), 2, VAR_4);
 if (FUNC_0(VAR_12->sel))
  return FUNC_1(VAR_12->sel);
 FUNC_5(VAR_12->clk, "CBUS clk");
 FUNC_5(VAR_12->dat, "CBUS dat");
 FUNC_5(VAR_12->sel, "CBUS sel");

 VAR_11->owner = VAR_8;
 VAR_11->class = VAR_7;
 VAR_11->dev.parent = &VAR_10->dev;
 VAR_11->dev.of_node = VAR_10->dev.of_node;
 VAR_11->nr = VAR_10->id;
 VAR_11->timeout = VAR_6;
 VAR_11->algo = &VAR_9;
 FUNC_10(VAR_11->name, "CBUS I2C adapter", sizeof(VAR_11->name));

 FUNC_9(&VAR_12->lock);
 VAR_12->dev = &VAR_10->dev;

 FUNC_7(VAR_11, VAR_12);
 FUNC_8(VAR_10, VAR_11);

 return FUNC_6(VAR_11);
}
