
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_14__ {int of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_12__ {TYPE_3__* parent; int of_node; } ;
struct TYPE_15__ {int timeout; int retries; int name; int quirks; int * algo; int owner; TYPE_1__ dev; } ;
struct mtk_i2c {TYPE_4__ adap; TYPE_2__* dev_comp; struct clk* clk_pmic; scalar_t__ have_pmic; struct clk* clk_main; struct clk* clk_arb; struct clk* clk_dma; int clk_src_div; TYPE_3__* dev; int msg_complete; struct clk* pdmabase; struct clk* base; } ;
struct clk {int dummy; } ;
struct TYPE_13__ {scalar_t__ support_33bits; int pmic_i2c; scalar_t__ timing_adjust; int quirks; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 int VAR_8 ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (TYPE_3__*,char*,...) ;
 void* FUNC_5 (TYPE_3__*,char*) ;
 void* FUNC_6 (TYPE_3__*,struct resource*) ;
 struct mtk_i2c* FUNC_7 (TYPE_3__*,int,int ) ;
 int FUNC_8 (TYPE_3__*,int,int ,int ,int ,struct mtk_i2c*) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*,struct mtk_i2c*) ;
 int FUNC_12 (int *) ;
 int VAR_9 ;
 int FUNC_13 (struct mtk_i2c*) ;
 int FUNC_14 (struct mtk_i2c*) ;
 int FUNC_15 (struct mtk_i2c*) ;
 int VAR_10 ;
 int FUNC_16 (int ,struct mtk_i2c*) ;
 int FUNC_17 (struct mtk_i2c*,int ) ;
 TYPE_2__* FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (struct platform_device*,int ) ;
 struct resource* FUNC_20 (struct platform_device*,int ,int) ;
 int FUNC_21 (struct platform_device*,struct mtk_i2c*) ;
 int FUNC_22 (int ,int ,int) ;

__attribute__((used)) static int FUNC_23(struct platform_device *VAR_11)
{
 int VAR_12 = 0;
 struct mtk_i2c *VAR_13;
 struct clk *VAR_14;
 struct resource *VAR_15;
 int VAR_16;

 VAR_13 = FUNC_7(&VAR_11->dev, sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_15 = FUNC_20(VAR_11, VAR_6, 0);
 VAR_13->base = FUNC_6(&VAR_11->dev, VAR_15);
 if (FUNC_1(VAR_13->base))
  return FUNC_2(VAR_13->base);

 VAR_15 = FUNC_20(VAR_11, VAR_6, 1);
 VAR_13->pdmabase = FUNC_6(&VAR_11->dev, VAR_15);
 if (FUNC_1(VAR_13->pdmabase))
  return FUNC_2(VAR_13->pdmabase);

 VAR_16 = FUNC_19(VAR_11, 0);
 if (VAR_16 <= 0)
  return VAR_16;

 FUNC_12(&VAR_13->msg_complete);

 VAR_13->dev_comp = FUNC_18(&VAR_11->dev);
 VAR_13->adap.dev.of_node = VAR_11->dev.of_node;
 VAR_13->dev = &VAR_11->dev;
 VAR_13->adap.dev.parent = &VAR_11->dev;
 VAR_13->adap.owner = VAR_8;
 VAR_13->adap.algo = &VAR_9;
 VAR_13->adap.quirks = VAR_13->dev_comp->quirks;
 VAR_13->adap.timeout = 2 * VAR_3;
 VAR_13->adap.retries = 1;

 VAR_12 = FUNC_16(VAR_11->dev.of_node, VAR_13);
 if (VAR_12)
  return -VAR_0;

 if (VAR_13->dev_comp->timing_adjust)
  VAR_13->clk_src_div *= VAR_4;

 if (VAR_13->have_pmic && !VAR_13->dev_comp->pmic_i2c)
  return -VAR_0;

 VAR_13->clk_main = FUNC_5(&VAR_11->dev, "main");
 if (FUNC_1(VAR_13->clk_main)) {
  FUNC_4(&VAR_11->dev, "cannot get main clock\n");
  return FUNC_2(VAR_13->clk_main);
 }

 VAR_13->clk_dma = FUNC_5(&VAR_11->dev, "dma");
 if (FUNC_1(VAR_13->clk_dma)) {
  FUNC_4(&VAR_11->dev, "cannot get dma clock\n");
  return FUNC_2(VAR_13->clk_dma);
 }

 VAR_13->clk_arb = FUNC_5(&VAR_11->dev, "arb");
 if (FUNC_1(VAR_13->clk_arb))
  VAR_13->clk_arb = ((void*)0);

 VAR_14 = VAR_13->clk_main;
 if (VAR_13->have_pmic) {
  VAR_13->clk_pmic = FUNC_5(&VAR_11->dev, "pmic");
  if (FUNC_1(VAR_13->clk_pmic)) {
   FUNC_4(&VAR_11->dev, "cannot get pmic clock\n");
   return FUNC_2(VAR_13->clk_pmic);
  }
  VAR_14 = VAR_13->clk_pmic;
 }

 FUNC_22(VAR_13->adap.name, VAR_5, sizeof(VAR_13->adap.name));

 VAR_12 = FUNC_17(VAR_13, FUNC_3(VAR_14));
 if (VAR_12) {
  FUNC_4(&VAR_11->dev, "Failed to set the speed.\n");
  return -VAR_0;
 }

 if (VAR_13->dev_comp->support_33bits) {
  VAR_12 = FUNC_9(&VAR_11->dev, FUNC_0(33));
  if (VAR_12) {
   FUNC_4(&VAR_11->dev, "dma_set_mask return error.\n");
   return VAR_12;
  }
 }

 VAR_12 = FUNC_14(VAR_13);
 if (VAR_12) {
  FUNC_4(&VAR_11->dev, "clock enable failed!\n");
  return VAR_12;
 }
 FUNC_15(VAR_13);
 FUNC_13(VAR_13);

 VAR_12 = FUNC_8(&VAR_11->dev, VAR_16, VAR_10,
          VAR_7, VAR_5, VAR_13);
 if (VAR_12 < 0) {
  FUNC_4(&VAR_11->dev,
   "Request I2C IRQ %d fail\n", VAR_16);
  return VAR_12;
 }

 FUNC_11(&VAR_13->adap, VAR_13);
 VAR_12 = FUNC_10(&VAR_13->adap);
 if (VAR_12)
  return VAR_12;

 FUNC_21(VAR_11, VAR_13);

 return 0;
}
