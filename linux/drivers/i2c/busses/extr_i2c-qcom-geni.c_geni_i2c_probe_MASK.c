
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_23__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef int u32 ;
struct resource {int dummy; } ;
struct TYPE_25__ {int of_node; int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_28__ {TYPE_1__* dev; int clk; int base; int wrapper; } ;
struct TYPE_26__ {int of_node; TYPE_1__* parent; } ;
struct TYPE_27__ {int name; TYPE_23__ dev; int * algo; } ;
struct geni_i2c_dev {int irq; int tx_wm; int suspended; TYPE_9__ se; TYPE_6__ adap; int lock; int done; int clk_freq_out; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_23__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_8 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,char*,...) ;
 int FUNC_6 (TYPE_1__*,char*,...) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 int FUNC_9 (TYPE_1__*,char*,int *) ;
 int FUNC_10 (TYPE_1__*,char*) ;
 int FUNC_11 (TYPE_1__*,struct resource*) ;
 struct geni_i2c_dev* FUNC_12 (TYPE_1__*,int,int ) ;
 int FUNC_13 (TYPE_1__*,int,int ,int ,char*,struct geni_i2c_dev*) ;
 int FUNC_14 (int) ;
 int VAR_9 ;
 int FUNC_15 (struct geni_i2c_dev*) ;
 int VAR_10 ;
 int FUNC_16 (TYPE_9__*,int ,int ,int,int,int) ;
 int FUNC_17 (TYPE_9__*) ;
 int FUNC_18 (TYPE_9__*,int,int) ;
 int FUNC_19 (TYPE_9__*) ;
 int FUNC_20 (TYPE_9__*) ;
 int FUNC_21 (TYPE_9__*) ;
 scalar_t__ FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (TYPE_6__*) ;
 int FUNC_24 (TYPE_6__*,struct geni_i2c_dev*) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (struct platform_device*,int ) ;
 struct resource* FUNC_27 (struct platform_device*,int ,int ) ;
 int FUNC_28 (struct platform_device*,struct geni_i2c_dev*) ;
 int FUNC_29 (TYPE_1__*) ;
 int FUNC_30 (TYPE_1__*) ;
 int FUNC_31 (TYPE_1__*,int ) ;
 int FUNC_32 (TYPE_1__*) ;
 int FUNC_33 (TYPE_1__*) ;
 int FUNC_34 (int *) ;
 int FUNC_35 (int ,char*,int) ;

__attribute__((used)) static int FUNC_36(struct platform_device *VAR_11)
{
 struct geni_i2c_dev *VAR_12;
 struct resource *VAR_13;
 u32 VAR_14, VAR_15;
 int VAR_16;

 VAR_12 = FUNC_12(&VAR_11->dev, sizeof(*VAR_12), VAR_4);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->se.dev = &VAR_11->dev;
 VAR_12->se.wrapper = FUNC_7(VAR_11->dev.parent);
 VAR_13 = FUNC_27(VAR_11, VAR_6, 0);
 VAR_12->se.base = FUNC_11(&VAR_11->dev, VAR_13);
 if (FUNC_2(VAR_12->se.base))
  return FUNC_4(VAR_12->se.base);

 VAR_12->se.clk = FUNC_10(&VAR_11->dev, "se");
 if (FUNC_2(VAR_12->se.clk) && !FUNC_22(&VAR_11->dev)) {
  VAR_16 = FUNC_4(VAR_12->se.clk);
  FUNC_6(&VAR_11->dev, "Err getting SE Core clk %d\n", VAR_16);
  return VAR_16;
 }

 VAR_16 = FUNC_9(&VAR_11->dev, "clock-frequency",
       &VAR_12->clk_freq_out);
 if (VAR_16) {
  FUNC_8(&VAR_11->dev,
   "Bus frequency not specified, default to 100kHz.\n");
  VAR_12->clk_freq_out = FUNC_3(100);
 }

 if (FUNC_22(&VAR_11->dev))
  FUNC_1(&VAR_12->adap.dev, FUNC_0(&VAR_11->dev));

 VAR_12->irq = FUNC_26(VAR_11, 0);
 if (VAR_12->irq < 0) {
  FUNC_6(&VAR_11->dev, "IRQ error for i2c-geni\n");
  return VAR_12->irq;
 }

 VAR_16 = FUNC_15(VAR_12);
 if (VAR_16) {
  FUNC_6(&VAR_11->dev, "Invalid clk frequency %d Hz: %d\n",
   VAR_12->clk_freq_out, VAR_16);
  return VAR_16;
 }

 VAR_12->adap.algo = &VAR_9;
 FUNC_25(&VAR_12->done);
 FUNC_34(&VAR_12->lock);
 FUNC_28(VAR_11, VAR_12);
 VAR_16 = FUNC_13(&VAR_11->dev, VAR_12->irq, VAR_10,
          VAR_7, "i2c_geni", VAR_12);
 if (VAR_16) {
  FUNC_6(&VAR_11->dev, "Request_irq failed:%d: err:%d\n",
   VAR_12->irq, VAR_16);
  return VAR_16;
 }

 FUNC_14(VAR_12->irq);
 FUNC_24(&VAR_12->adap, VAR_12);
 VAR_12->adap.dev.parent = &VAR_11->dev;
 VAR_12->adap.dev.of_node = VAR_11->dev.of_node;
 FUNC_35(VAR_12->adap.name, "Geni-I2C", sizeof(VAR_12->adap.name));

 VAR_16 = FUNC_21(&VAR_12->se);
 if (VAR_16) {
  FUNC_6(&VAR_11->dev, "Error turning on resources %d\n", VAR_16);
  return VAR_16;
 }
 VAR_14 = FUNC_19(&VAR_12->se);
 VAR_15 = FUNC_17(&VAR_12->se);
 if (VAR_14 != VAR_3) {
  FUNC_6(&VAR_11->dev, "Invalid proto %d\n", VAR_14);
  FUNC_20(&VAR_12->se);
  return -VAR_2;
 }
 VAR_12->tx_wm = VAR_15 - 1;
 FUNC_18(&VAR_12->se, VAR_12->tx_wm, VAR_15);
 FUNC_16(&VAR_12->se, VAR_0, VAR_8,
       1, 1, 1);
 VAR_16 = FUNC_20(&VAR_12->se);
 if (VAR_16) {
  FUNC_6(&VAR_11->dev, "Error turning off resources %d\n", VAR_16);
  return VAR_16;
 }

 FUNC_5(&VAR_11->dev, "i2c fifo/se-dma mode. fifo depth:%d\n", VAR_15);

 VAR_12->suspended = 1;
 FUNC_32(VAR_12->se.dev);
 FUNC_31(VAR_12->se.dev, VAR_5);
 FUNC_33(VAR_12->se.dev);
 FUNC_30(VAR_12->se.dev);

 VAR_16 = FUNC_23(&VAR_12->adap);
 if (VAR_16) {
  FUNC_6(&VAR_11->dev, "Error adding i2c adapter %d\n", VAR_16);
  FUNC_29(VAR_12->se.dev);
  return VAR_16;
 }

 FUNC_5(&VAR_11->dev, "Geni-I2C adaptor successfully added\n");

 return 0;
}
