
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u32 ;
struct TYPE_11__ {int of_node; TYPE_2__* parent; } ;
struct TYPE_14__ {TYPE_10__ dev; int name; int class; int nr; int * quirks; int * algo; struct xlr_i2c_private* algo_data; int owner; } ;
struct xlr_i2c_private {int irq; TYPE_3__ adap; struct clk* clk; struct clk* iobase; int wait; TYPE_1__* cfg; } ;
struct resource {int dummy; } ;
struct TYPE_13__ {int of_node; } ;
struct platform_device {int id; TYPE_2__ dev; } ;
struct of_device_id {TYPE_1__* data; } ;
struct clk {int dummy; } ;
struct TYPE_12__ {int flags; } ;


 unsigned long FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct clk*) ;
 unsigned long FUNC_4 (struct clk*) ;
 int FUNC_5 (struct clk*) ;
 int FUNC_6 (TYPE_10__*,char*) ;
 int FUNC_7 (TYPE_2__*) ;
 struct clk* FUNC_8 (TYPE_2__*,int *) ;
 struct clk* FUNC_9 (TYPE_2__*,struct resource*) ;
 struct xlr_i2c_private* FUNC_10 (TYPE_2__*,int,int ) ;
 int FUNC_11 (TYPE_2__*,int,int ,int ,int ,struct xlr_i2c_private*) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*,struct xlr_i2c_private*) ;
 int FUNC_14 (int *) ;
 struct of_device_id* FUNC_15 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_16 (int ,char*,int*) ;
 int FUNC_17 (struct platform_device*,int ) ;
 struct resource* FUNC_18 (struct platform_device*,int ,int ) ;
 int FUNC_19 (struct platform_device*,struct xlr_i2c_private*) ;
 int FUNC_20 (int ,int,char*) ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_21 (struct clk*,int ,unsigned long) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_15)
{
 const struct of_device_id *VAR_16;
 struct xlr_i2c_private *VAR_17;
 struct resource *VAR_18;
 struct clk *VAR_19;
 unsigned long VAR_20;
 unsigned long VAR_21;
 u32 VAR_22;
 int VAR_23;
 int VAR_24;

 VAR_17 = FUNC_10(&VAR_15->dev, sizeof(*VAR_17), VAR_1);
 if (!VAR_17)
  return -VAR_0;

 VAR_16 = FUNC_15(VAR_12, &VAR_15->dev);
 if (VAR_16)
  VAR_17->cfg = VAR_16->data;
 else
  VAR_17->cfg = &VAR_11;

 VAR_18 = FUNC_18(VAR_15, VAR_3, 0);
 VAR_17->iobase = FUNC_9(&VAR_15->dev, VAR_18);
 if (FUNC_1(VAR_17->iobase))
  return FUNC_2(VAR_17->iobase);

 VAR_23 = FUNC_17(VAR_15, 0);

 if (VAR_23 > 0 && (VAR_17->cfg->flags & VAR_7)) {
  VAR_17->irq = VAR_23;

  FUNC_21(VAR_17->iobase, VAR_8, 0);
  FUNC_21(VAR_17->iobase, VAR_9, 0xf);

  VAR_24 = FUNC_11(&VAR_15->dev, VAR_17->irq, VAR_13,
     VAR_4, FUNC_7(&VAR_15->dev),
     VAR_17);
  if (VAR_24)
   return VAR_24;

  FUNC_14(&VAR_17->wait);
 }

 if (FUNC_16(VAR_15->dev.of_node, "clock-frequency",
     &VAR_22))
  VAR_22 = 100000;

 VAR_19 = FUNC_8(&VAR_15->dev, ((void*)0));
 if (!FUNC_1(VAR_19)) {
  VAR_24 = FUNC_5(VAR_19);
  if (VAR_24)
   return VAR_24;

  VAR_20 = FUNC_4(VAR_19);
  VAR_21 = FUNC_0(VAR_20, 2 * VAR_22);
  FUNC_21(VAR_17->iobase, VAR_6, VAR_21);

  FUNC_3(VAR_19);
  VAR_17->clk = VAR_19;
 }

 VAR_17->adap.dev.parent = &VAR_15->dev;
 VAR_17->adap.dev.of_node = VAR_15->dev.of_node;
 VAR_17->adap.owner = VAR_5;
 VAR_17->adap.algo_data = VAR_17;
 VAR_17->adap.algo = &VAR_10;
 VAR_17->adap.quirks = &VAR_14;
 VAR_17->adap.nr = VAR_15->id;
 VAR_17->adap.class = VAR_2;
 FUNC_20(VAR_17->adap.name, sizeof(VAR_17->adap.name), "xlr-i2c");

 FUNC_13(&VAR_17->adap, VAR_17);
 VAR_24 = FUNC_12(&VAR_17->adap);
 if (VAR_24 < 0)
  return VAR_24;

 FUNC_19(VAR_15, VAR_17);
 FUNC_6(&VAR_17->adap.dev, "Added I2C Bus.\n");
 return 0;
}
