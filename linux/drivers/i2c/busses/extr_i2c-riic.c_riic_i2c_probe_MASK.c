
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int of_node; TYPE_3__* parent; } ;
struct i2c_adapter {TYPE_1__ dev; int * algo; int owner; int name; } ;
struct riic_dev {int msg_done; struct i2c_adapter adapter; int clk; int base; } ;
struct resource {int start; } ;
struct TYPE_15__ {int of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct i2c_timings {int bus_freq_hz; } ;
struct TYPE_14__ {int name; int isr; int res_num; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_3__*,char*,...) ;
 int FUNC_4 (TYPE_3__*,char*,int ) ;
 int FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (TYPE_3__*,struct resource*) ;
 struct riic_dev* FUNC_7 (TYPE_3__*,int,int ) ;
 int FUNC_8 (TYPE_3__*,int ,int ,int ,int ,struct riic_dev*) ;
 int FUNC_9 (struct i2c_adapter*) ;
 int FUNC_10 (TYPE_3__*,struct i2c_timings*,int) ;
 int FUNC_11 (struct i2c_adapter*,struct riic_dev*) ;
 int FUNC_12 (int *) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct platform_device*,struct riic_dev*) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (TYPE_3__*) ;
 int VAR_6 ;
 int FUNC_17 (struct riic_dev*,struct i2c_timings*) ;
 TYPE_2__* VAR_7 ;
 int FUNC_18 (int ,char*,int) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_8)
{
 struct riic_dev *VAR_9;
 struct i2c_adapter *VAR_10;
 struct resource *VAR_11;
 struct i2c_timings VAR_12;
 int VAR_13, VAR_14;

 VAR_9 = FUNC_7(&VAR_8->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_11 = FUNC_13(VAR_8, VAR_4, 0);
 VAR_9->base = FUNC_6(&VAR_8->dev, VAR_11);
 if (FUNC_1(VAR_9->base))
  return FUNC_2(VAR_9->base);

 VAR_9->clk = FUNC_5(&VAR_8->dev, ((void*)0));
 if (FUNC_1(VAR_9->clk)) {
  FUNC_3(&VAR_8->dev, "missing controller clock");
  return FUNC_2(VAR_9->clk);
 }

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_7); VAR_13++) {
  VAR_11 = FUNC_13(VAR_8, VAR_3, VAR_7[VAR_13].res_num);
  if (!VAR_11)
   return -VAR_0;

  VAR_14 = FUNC_8(&VAR_8->dev, VAR_11->start, VAR_7[VAR_13].isr,
     0, VAR_7[VAR_13].name, VAR_9);
  if (VAR_14) {
   FUNC_3(&VAR_8->dev, "failed to request irq %s\n", VAR_7[VAR_13].name);
   return VAR_14;
  }
 }

 VAR_10 = &VAR_9->adapter;
 FUNC_11(VAR_10, VAR_9);
 FUNC_18(VAR_10->name, "Renesas RIIC adapter", sizeof(VAR_10->name));
 VAR_10->owner = VAR_5;
 VAR_10->algo = &VAR_6;
 VAR_10->dev.parent = &VAR_8->dev;
 VAR_10->dev.of_node = VAR_8->dev.of_node;

 FUNC_12(&VAR_9->msg_done);

 FUNC_10(&VAR_8->dev, &VAR_12, 1);

 FUNC_16(&VAR_8->dev);

 VAR_14 = FUNC_17(VAR_9, &VAR_12);
 if (VAR_14)
  goto out;

 VAR_14 = FUNC_9(VAR_10);
 if (VAR_14)
  goto out;

 FUNC_14(VAR_8, VAR_9);

 FUNC_4(&VAR_8->dev, "registered with %dHz bus speed\n",
   VAR_12.bus_freq_hz);
 return 0;

out:
 FUNC_15(&VAR_8->dev);
 return VAR_14;
}
