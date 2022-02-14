
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;


typedef int u32 ;
struct resource {int dummy; } ;
struct TYPE_21__ {struct device_node* of_node; } ;
struct platform_device {TYPE_3__ dev; int id; int name; } ;
struct TYPE_19__ {struct device_node* of_node; TYPE_3__* parent; } ;
struct TYPE_18__ {int retries; int name; int nr; int * algo; int owner; TYPE_1__ dev; } ;
struct img_i2c {TYPE_11__ adap; int msg_complete; int lock; int bitrate; int check_timer; void* scb_clk; void* sys_clk; void* base; } ;
struct device_node {int dummy; } ;
struct TYPE_20__ {int max_bitrate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_4 ;
 int FUNC_1 (void*) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_3__*,char*,...) ;
 void* FUNC_3 (TYPE_3__*,char*) ;
 void* FUNC_4 (TYPE_3__*,struct resource*) ;
 struct img_i2c* FUNC_5 (TYPE_3__*,int,int ) ;
 int FUNC_6 (TYPE_3__*,int,int ,int ,int ,struct img_i2c*) ;
 int FUNC_7 (TYPE_11__*) ;
 int FUNC_8 (TYPE_11__*,struct img_i2c*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (struct img_i2c*) ;
 int VAR_8 ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (struct img_i2c*,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct device_node*,char*,int *) ;
 int FUNC_15 (struct platform_device*,int ) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int ) ;
 int FUNC_17 (struct platform_device*,struct img_i2c*) ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (TYPE_3__*) ;
 int FUNC_22 (TYPE_3__*,int ) ;
 int FUNC_23 (TYPE_3__*) ;
 int FUNC_24 (int ,int,char*) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *,int ,int ) ;
 TYPE_2__* VAR_9 ;

__attribute__((used)) static int FUNC_27(struct platform_device *VAR_10)
{
 struct device_node *VAR_11 = VAR_10->dev.of_node;
 struct img_i2c *VAR_12;
 struct resource *VAR_13;
 int VAR_14, VAR_15;
 u32 VAR_16;

 VAR_12 = FUNC_5(&VAR_10->dev, sizeof(struct img_i2c), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_13 = FUNC_16(VAR_10, VAR_3, 0);
 VAR_12->base = FUNC_4(&VAR_10->dev, VAR_13);
 if (FUNC_0(VAR_12->base))
  return FUNC_1(VAR_12->base);

 VAR_14 = FUNC_15(VAR_10, 0);
 if (VAR_14 < 0) {
  FUNC_2(&VAR_10->dev, "can't get irq number\n");
  return VAR_14;
 }

 VAR_12->sys_clk = FUNC_3(&VAR_10->dev, "sys");
 if (FUNC_0(VAR_12->sys_clk)) {
  FUNC_2(&VAR_10->dev, "can't get system clock\n");
  return FUNC_1(VAR_12->sys_clk);
 }

 VAR_12->scb_clk = FUNC_3(&VAR_10->dev, "scb");
 if (FUNC_0(VAR_12->scb_clk)) {
  FUNC_2(&VAR_10->dev, "can't get core clock\n");
  return FUNC_1(VAR_12->scb_clk);
 }

 VAR_15 = FUNC_6(&VAR_10->dev, VAR_14, VAR_8, 0,
          VAR_10->name, VAR_12);
 if (VAR_15) {
  FUNC_2(&VAR_10->dev, "can't request irq %d\n", VAR_14);
  return VAR_15;
 }


 FUNC_26(&VAR_12->check_timer, VAR_7, 0);

 VAR_12->bitrate = VAR_9[0].max_bitrate;
 if (!FUNC_14(VAR_11, "clock-frequency", &VAR_16))
  VAR_12->bitrate = VAR_16;

 FUNC_8(&VAR_12->adap, VAR_12);
 VAR_12->adap.dev.parent = &VAR_10->dev;
 VAR_12->adap.dev.of_node = VAR_11;
 VAR_12->adap.owner = VAR_5;
 VAR_12->adap.algo = &VAR_6;
 VAR_12->adap.retries = 5;
 VAR_12->adap.nr = VAR_10->id;
 FUNC_24(VAR_12->adap.name, sizeof(VAR_12->adap.name), "IMG SCB I2C");

 FUNC_12(VAR_12, VAR_4);
 FUNC_25(&VAR_12->lock);
 FUNC_13(&VAR_12->msg_complete);

 FUNC_17(VAR_10, VAR_12);

 FUNC_22(&VAR_10->dev, VAR_2);
 FUNC_23(&VAR_10->dev);
 FUNC_20(&VAR_10->dev);
 if (!FUNC_21(&VAR_10->dev)) {
  VAR_15 = FUNC_10(&VAR_10->dev);
  if (VAR_15)
   return VAR_15;
 }

 VAR_15 = FUNC_9(VAR_12);
 if (VAR_15)
  goto rpm_disable;

 VAR_15 = FUNC_7(&VAR_12->adap);
 if (VAR_15 < 0)
  goto rpm_disable;

 return 0;

rpm_disable:
 if (!FUNC_21(&VAR_10->dev))
  FUNC_11(&VAR_10->dev);
 FUNC_18(&VAR_10->dev);
 FUNC_19(&VAR_10->dev);
 return VAR_15;
}
