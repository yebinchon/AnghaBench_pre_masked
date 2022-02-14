
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct resource {int dummy; } ;
struct TYPE_13__ {int of_node; } ;
struct platform_device {TYPE_4__ dev; int name; } ;
struct TYPE_11__ {int of_node; TYPE_4__* parent; } ;
struct TYPE_12__ {TYPE_1__ dev; int * algo; int owner; int name; } ;
struct altr_i2c_dev {int fifo_size; int bus_clk_rate; int i2c_clk; TYPE_2__ adapter; TYPE_4__* dev; int lock; int msg_complete; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct altr_i2c_dev*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,char*,...) ;
 int FUNC_6 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_7 (TYPE_4__*,char*,int*) ;
 int FUNC_8 (TYPE_4__*,int *) ;
 int FUNC_9 (TYPE_4__*,struct resource*) ;
 struct altr_i2c_dev* FUNC_10 (TYPE_4__*,int,int ) ;
 int FUNC_11 (TYPE_4__*,int,int ,int ,int ,int ,struct altr_i2c_dev*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*,struct altr_i2c_dev*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct platform_device*,int ) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int ) ;
 int FUNC_17 (struct platform_device*,struct altr_i2c_dev*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,int ,int) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_10)
{
 struct altr_i2c_dev *VAR_11 = ((void*)0);
 struct resource *VAR_12;
 int VAR_13, VAR_14;
 u32 VAR_15;

 VAR_11 = FUNC_10(&VAR_10->dev, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_2;

 VAR_12 = FUNC_16(VAR_10, VAR_4, 0);
 VAR_11->base = FUNC_9(&VAR_10->dev, VAR_12);
 if (FUNC_0(VAR_11->base))
  return FUNC_1(VAR_11->base);

 VAR_13 = FUNC_15(VAR_10, 0);
 if (VAR_13 < 0) {
  FUNC_5(&VAR_10->dev, "missing interrupt resource\n");
  return VAR_13;
 }

 VAR_11->i2c_clk = FUNC_8(&VAR_10->dev, ((void*)0));
 if (FUNC_0(VAR_11->i2c_clk)) {
  FUNC_5(&VAR_10->dev, "missing clock\n");
  return FUNC_1(VAR_11->i2c_clk);
 }

 VAR_11->dev = &VAR_10->dev;
 FUNC_14(&VAR_11->msg_complete);
 FUNC_18(&VAR_11->lock);

 VAR_15 = FUNC_7(VAR_11->dev, "fifo-size",
           &VAR_11->fifo_size);
 if (VAR_15) {
  FUNC_5(&VAR_10->dev, "FIFO size set to default of %d\n",
   VAR_0);
  VAR_11->fifo_size = VAR_0;
 }

 VAR_15 = FUNC_7(VAR_11->dev, "clock-frequency",
           &VAR_11->bus_clk_rate);
 if (VAR_15) {
  FUNC_5(&VAR_10->dev, "Default to 100kHz\n");
  VAR_11->bus_clk_rate = 100000;
 }

 if (VAR_11->bus_clk_rate > 400000) {
  FUNC_5(&VAR_10->dev, "invalid clock-frequency %d\n",
   VAR_11->bus_clk_rate);
  return -VAR_1;
 }

 VAR_14 = FUNC_11(&VAR_10->dev, VAR_13, VAR_9,
     VAR_8, VAR_5,
     VAR_10->name, VAR_11);
 if (VAR_14) {
  FUNC_5(&VAR_10->dev, "failed to claim IRQ %d\n", VAR_13);
  return VAR_14;
 }

 VAR_14 = FUNC_4(VAR_11->i2c_clk);
 if (VAR_14) {
  FUNC_5(&VAR_10->dev, "failed to enable clock\n");
  return VAR_14;
 }

 FUNC_2(VAR_11);

 FUNC_13(&VAR_11->adapter, VAR_11);
 FUNC_19(VAR_11->adapter.name, VAR_10->name, sizeof(VAR_11->adapter.name));
 VAR_11->adapter.owner = VAR_6;
 VAR_11->adapter.algo = &VAR_7;
 VAR_11->adapter.dev.parent = &VAR_10->dev;
 VAR_11->adapter.dev.of_node = VAR_10->dev.of_node;

 FUNC_17(VAR_10, VAR_11);

 VAR_14 = FUNC_12(&VAR_11->adapter);
 if (VAR_14) {
  FUNC_3(VAR_11->i2c_clk);
  return VAR_14;
 }
 FUNC_6(&VAR_10->dev, "Altera SoftIP I2C Probe Complete\n");

 return 0;
}
