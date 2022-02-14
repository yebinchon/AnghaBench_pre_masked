
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int u32 ;
struct resource {int start; } ;
struct TYPE_17__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; int id; } ;
struct TYPE_16__ {int of_node; TYPE_2__* parent; } ;
struct TYPE_18__ {TYPE_1__ dev; int timeout; int nr; int class; int owner; int name; } ;
struct at91_twi_dev {scalar_t__ irq; TYPE_2__* dev; int clk; TYPE_8__ adapter; scalar_t__ slave_detected; int base; int pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int FUNC_2 (struct at91_twi_dev*) ;
 int FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*,int ,struct at91_twi_dev*) ;
 int FUNC_5 (struct platform_device*,int ,struct at91_twi_dev*) ;
 int FUNC_6 (struct at91_twi_dev*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,char*) ;
 int FUNC_10 (TYPE_2__*,char*,int ) ;
 int FUNC_11 (TYPE_2__*,int *) ;
 int FUNC_12 (TYPE_2__*,struct resource*) ;
 struct at91_twi_dev* FUNC_13 (TYPE_2__*,int,int ) ;
 int FUNC_14 (TYPE_8__*) ;
 scalar_t__ FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_8__*,struct at91_twi_dev*) ;
 scalar_t__ FUNC_17 (struct platform_device*,int ) ;
 struct resource* FUNC_18 (struct platform_device*,int ,int ) ;
 int FUNC_19 (struct platform_device*,struct at91_twi_dev*) ;
 int FUNC_20 (TYPE_2__*) ;
 int FUNC_21 (TYPE_2__*) ;
 int FUNC_22 (TYPE_2__*) ;
 int FUNC_23 (TYPE_2__*,int ) ;
 int FUNC_24 (TYPE_2__*) ;
 int FUNC_25 (TYPE_2__*) ;
 int FUNC_26 (int ,int,char*) ;

__attribute__((used)) static int FUNC_27(struct platform_device *VAR_9)
{
 struct at91_twi_dev *VAR_10;
 struct resource *VAR_11;
 int VAR_12;
 u32 VAR_13;

 VAR_10 = FUNC_13(&VAR_9->dev, sizeof(*VAR_10), VAR_5);
 if (!VAR_10)
  return -VAR_4;

 VAR_10->dev = &VAR_9->dev;

 VAR_11 = FUNC_18(VAR_9, VAR_7, 0);
 if (!VAR_11)
  return -VAR_3;
 VAR_13 = VAR_11->start;

 VAR_10->pdata = FUNC_3(VAR_9);
 if (!VAR_10->pdata)
  return -VAR_3;

 VAR_10->base = FUNC_12(&VAR_9->dev, VAR_11);
 if (FUNC_0(VAR_10->base))
  return FUNC_1(VAR_10->base);

 VAR_10->irq = FUNC_17(VAR_9, 0);
 if (VAR_10->irq < 0)
  return VAR_10->irq;

 FUNC_19(VAR_9, VAR_10);

 VAR_10->clk = FUNC_11(VAR_10->dev, ((void*)0));
 if (FUNC_0(VAR_10->clk)) {
  FUNC_9(VAR_10->dev, "no clock defined\n");
  return -VAR_3;
 }
 FUNC_8(VAR_10->clk);

 FUNC_26(VAR_10->adapter.name, sizeof(VAR_10->adapter.name), "AT91");
 FUNC_16(&VAR_10->adapter, VAR_10);
 VAR_10->adapter.owner = VAR_8;
 VAR_10->adapter.class = VAR_6;
 VAR_10->adapter.dev.parent = VAR_10->dev;
 VAR_10->adapter.nr = VAR_9->id;
 VAR_10->adapter.timeout = VAR_0;
 VAR_10->adapter.dev.of_node = VAR_9->dev.of_node;

 VAR_10->slave_detected = FUNC_15(&VAR_9->dev);

 if (VAR_10->slave_detected)
  VAR_12 = FUNC_5(VAR_9, VAR_13, VAR_10);
 else
  VAR_12 = FUNC_4(VAR_9, VAR_13, VAR_10);
 if (VAR_12)
  return VAR_12;

 FUNC_2(VAR_10);

 FUNC_23(VAR_10->dev, VAR_2);
 FUNC_25(VAR_10->dev);
 FUNC_22(VAR_10->dev);
 FUNC_21(VAR_10->dev);

 VAR_12 = FUNC_14(&VAR_10->adapter);
 if (VAR_12) {
  FUNC_7(VAR_10->clk);

  FUNC_20(VAR_10->dev);
  FUNC_24(VAR_10->dev);

  return VAR_12;
 }

 FUNC_10(VAR_10->dev, "AT91 i2c bus driver (hw version: %#x).\n",
   FUNC_6(VAR_10, VAR_1));
 return 0;
}
