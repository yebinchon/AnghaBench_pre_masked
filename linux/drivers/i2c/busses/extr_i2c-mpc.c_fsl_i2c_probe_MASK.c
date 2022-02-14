
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct resource {scalar_t__ start; } ;
struct TYPE_10__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct of_device_id {struct mpc_i2c_data* data; } ;
struct mpc_i2c_data {int (* setup ) (int ,struct mpc_i2c*,int) ;} ;
struct TYPE_9__ {int of_node; TYPE_2__* parent; } ;
struct TYPE_11__ {int timeout; TYPE_1__ dev; int name; } ;
struct mpc_i2c {int base; scalar_t__ irq; struct clk* clk_per; TYPE_3__ adap; TYPE_2__* dev; int queue; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct clk*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*,char*,int) ;
 struct clk* FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (scalar_t__,struct mpc_i2c*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,struct mpc_i2c*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int FUNC_13 (struct mpc_i2c*) ;
 struct mpc_i2c* FUNC_14 (int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_15 (int ,struct mpc_i2c*,int) ;
 TYPE_3__ VAR_9 ;
 int FUNC_16 (int ,int ,struct resource*) ;
 int* FUNC_17 (int ,char*,int*) ;
 int FUNC_18 (int ,int ) ;
 struct of_device_id* FUNC_19 (int ,TYPE_2__*) ;
 int FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int ,char*) ;
 int FUNC_22 (struct platform_device*,struct mpc_i2c*) ;
 int FUNC_23 (scalar_t__,int ,int ,char*,struct mpc_i2c*) ;
 int FUNC_24 (int ,int,char*,unsigned long long) ;
 int FUNC_25 (int ,struct mpc_i2c*,int) ;

__attribute__((used)) static int FUNC_26(struct platform_device *VAR_10)
{
 const struct of_device_id *VAR_11;
 struct mpc_i2c *VAR_12;
 const u32 *VAR_13;
 u32 VAR_14 = VAR_5;
 int VAR_15 = 0;
 int VAR_16;
 struct resource VAR_17;
 struct clk *VAR_18;
 int VAR_19;

 VAR_11 = FUNC_19(VAR_8, &VAR_10->dev);
 if (!VAR_11)
  return -VAR_0;

 VAR_12 = FUNC_14(sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->dev = &VAR_10->dev;

 FUNC_9(&VAR_12->queue);

 VAR_12->base = FUNC_18(VAR_10->dev.of_node, 0);
 if (!VAR_12->base) {
  FUNC_3(VAR_12->dev, "failed to map controller\n");
  VAR_15 = -VAR_1;
  goto fail_map;
 }

 VAR_12->irq = FUNC_12(VAR_10->dev.of_node, 0);
 if (VAR_12->irq) {
  VAR_15 = FUNC_23(VAR_12->irq, VAR_7,
         VAR_4, "i2c-mpc", VAR_12);
  if (VAR_15 < 0) {
   FUNC_3(VAR_12->dev, "failed to attach interrupt\n");
   goto fail_request;
  }
 }





 VAR_18 = FUNC_5(&VAR_10->dev, ((void*)0));
 if (!FUNC_0(VAR_18)) {
  VAR_19 = FUNC_2(VAR_18);
  if (VAR_19) {
   FUNC_3(&VAR_10->dev, "failed to enable clock\n");
   goto fail_request;
  } else {
   VAR_12->clk_per = VAR_18;
  }
 }

 if (FUNC_21(VAR_10->dev.of_node, "fsl,preserve-clocking")) {
  VAR_14 = VAR_6;
 } else {
  VAR_13 = FUNC_17(VAR_10->dev.of_node, "clock-frequency",
     &VAR_16);
  if (VAR_13 && VAR_16 == sizeof(u32))
   VAR_14 = *VAR_13;
 }

 if (VAR_11->data) {
  const struct mpc_i2c_data *VAR_20 = VAR_11->data;
  VAR_20->setup(VAR_10->dev.of_node, VAR_12, VAR_14);
 } else {

  if (FUNC_17(VAR_10->dev.of_node, "dfsrr", ((void*)0)))
   FUNC_15(VAR_10->dev.of_node, VAR_12, VAR_14);
 }

 VAR_13 = FUNC_17(VAR_10->dev.of_node, "fsl,timeout", &VAR_16);
 if (VAR_13 && VAR_16 == sizeof(u32)) {
  VAR_9.timeout = *VAR_13 * VAR_3 / 1000000;
  if (VAR_9.timeout < 5)
   VAR_9.timeout = 5;
 }
 FUNC_4(VAR_12->dev, "timeout %u us\n", VAR_9.timeout * 1000000 / VAR_3);

 FUNC_22(VAR_10, VAR_12);

 VAR_12->adap = VAR_9;
 FUNC_16(VAR_10->dev.of_node, 0, &VAR_17);
 FUNC_24(VAR_12->adap.name, sizeof(VAR_12->adap.name),
    "MPC adapter at 0x%llx", (unsigned long long)VAR_17.start);
 FUNC_8(&VAR_12->adap, VAR_12);
 VAR_12->adap.dev.parent = &VAR_10->dev;
 VAR_12->adap.dev.of_node = FUNC_20(VAR_10->dev.of_node);

 VAR_15 = FUNC_7(&VAR_12->adap);
 if (VAR_15 < 0)
  goto fail_add;

 return VAR_15;

 fail_add:
 if (VAR_12->clk_per)
  FUNC_1(VAR_12->clk_per);
 FUNC_6(VAR_12->irq, VAR_12);
 fail_request:
 FUNC_11(VAR_12->irq);
 FUNC_10(VAR_12->base);
 fail_map:
 FUNC_13(VAR_12);
 return VAR_15;
}
