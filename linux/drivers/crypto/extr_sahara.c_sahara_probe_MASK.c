
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct sahara_hw_link {int dummy; } ;
struct sahara_hw_desc {int dummy; } ;
struct sahara_dev {int version; void* clk_ipg; void* clk_ahb; void* kthread; int dma_completion; int queue_mutex; int queue; void** hw_link; scalar_t__* hw_phys_link; void* context_base; scalar_t__ context_phys_base; scalar_t__ key_phys_base; scalar_t__ iv_phys_base; void* key_base; void* iv_base; scalar_t__* hw_phys_desc; void** hw_desc; void* regs_base; TYPE_1__* device; } ;
struct TYPE_8__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (TYPE_1__*,char*,...) ;
 int FUNC_8 (TYPE_1__*,char*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 struct sahara_dev* VAR_17 ;
 void* FUNC_10 (TYPE_1__*,char*) ;
 struct sahara_dev* FUNC_11 (TYPE_1__*,int,int ) ;
 void* FUNC_12 (struct platform_device*,int ) ;
 int FUNC_13 (TYPE_1__*,int,int ,int ,int ,struct sahara_dev*) ;
 void* FUNC_14 (TYPE_1__*,int,scalar_t__*,int ) ;
 int FUNC_15 (int *) ;
 void* FUNC_16 (int ,struct sahara_dev*,char*) ;
 int FUNC_17 (void*) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int ,char*) ;
 int FUNC_20 (struct platform_device*,int ) ;
 int FUNC_21 (struct platform_device*,struct sahara_dev*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_22 (struct sahara_dev*,int ) ;
 int FUNC_23 (struct sahara_dev*) ;
 int FUNC_24 (struct sahara_dev*,int,int ) ;

__attribute__((used)) static int FUNC_25(struct platform_device *VAR_20)
{
 struct sahara_dev *VAR_21;
 u32 VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25;

 VAR_21 = FUNC_11(&VAR_20->dev, sizeof(*VAR_21), VAR_3);
 if (!VAR_21)
  return -VAR_2;

 VAR_21->device = &VAR_20->dev;
 FUNC_21(VAR_20, VAR_21);


 VAR_21->regs_base = FUNC_12(VAR_20, 0);
 if (FUNC_0(VAR_21->regs_base))
  return FUNC_1(VAR_21->regs_base);


 VAR_23 = FUNC_20(VAR_20, 0);
 if (VAR_23 < 0)
  return VAR_23;

 VAR_24 = FUNC_13(&VAR_20->dev, VAR_23, VAR_18,
          0, FUNC_9(&VAR_20->dev), VAR_21);
 if (VAR_24) {
  FUNC_7(&VAR_20->dev, "failed to request irq\n");
  return VAR_24;
 }


 VAR_21->clk_ipg = FUNC_10(&VAR_20->dev, "ipg");
 if (FUNC_0(VAR_21->clk_ipg)) {
  FUNC_7(&VAR_20->dev, "Could not get ipg clock\n");
  return FUNC_1(VAR_21->clk_ipg);
 }

 VAR_21->clk_ahb = FUNC_10(&VAR_20->dev, "ahb");
 if (FUNC_0(VAR_21->clk_ahb)) {
  FUNC_7(&VAR_20->dev, "Could not get ahb clock\n");
  return FUNC_1(VAR_21->clk_ahb);
 }


 VAR_21->hw_desc[0] = FUNC_14(&VAR_20->dev,
   VAR_8 * sizeof(struct sahara_hw_desc),
   &VAR_21->hw_phys_desc[0], VAR_3);
 if (!VAR_21->hw_desc[0]) {
  FUNC_7(&VAR_20->dev, "Could not allocate hw descriptors\n");
  return -VAR_2;
 }
 VAR_21->hw_desc[1] = VAR_21->hw_desc[0] + 1;
 VAR_21->hw_phys_desc[1] = VAR_21->hw_phys_desc[0] +
    sizeof(struct sahara_hw_desc);


 VAR_21->key_base = FUNC_14(&VAR_20->dev, 2 * VAR_0,
    &VAR_21->key_phys_base, VAR_3);
 if (!VAR_21->key_base) {
  FUNC_7(&VAR_20->dev, "Could not allocate memory for key\n");
  return -VAR_2;
 }
 VAR_21->iv_base = VAR_21->key_base + VAR_0;
 VAR_21->iv_phys_base = VAR_21->key_phys_base + VAR_0;


 VAR_21->context_base = FUNC_14(&VAR_20->dev,
     VAR_16 + 4,
     &VAR_21->context_phys_base, VAR_3);
 if (!VAR_21->context_base) {
  FUNC_7(&VAR_20->dev, "Could not allocate memory for MDHA context\n");
  return -VAR_2;
 }


 VAR_21->hw_link[0] = FUNC_14(&VAR_20->dev,
   VAR_9 * sizeof(struct sahara_hw_link),
   &VAR_21->hw_phys_link[0], VAR_3);
 if (!VAR_21->hw_link[0]) {
  FUNC_7(&VAR_20->dev, "Could not allocate hw links\n");
  return -VAR_2;
 }
 for (VAR_25 = 1; VAR_25 < VAR_9; VAR_25++) {
  VAR_21->hw_phys_link[VAR_25] = VAR_21->hw_phys_link[VAR_25 - 1] +
     sizeof(struct sahara_hw_link);
  VAR_21->hw_link[VAR_25] = VAR_21->hw_link[VAR_25 - 1] + 1;
 }

 FUNC_6(&VAR_21->queue, VAR_10);

 FUNC_18(&VAR_21->queue_mutex);

 VAR_17 = VAR_21;

 VAR_21->kthread = FUNC_16(VAR_19, VAR_21, "sahara_crypto");
 if (FUNC_0(VAR_21->kthread)) {
  return FUNC_1(VAR_21->kthread);
 }

 FUNC_15(&VAR_21->dma_completion);

 VAR_24 = FUNC_5(VAR_21->clk_ipg);
 if (VAR_24)
  return VAR_24;
 VAR_24 = FUNC_5(VAR_21->clk_ahb);
 if (VAR_24)
  goto clk_ipg_disable;

 VAR_22 = FUNC_22(VAR_21, VAR_13);
 if (FUNC_19(VAR_20->dev.of_node, "fsl,imx27-sahara")) {
  if (VAR_22 != VAR_14)
   VAR_24 = -VAR_1;
 } else if (FUNC_19(VAR_20->dev.of_node,
   "fsl,imx53-sahara")) {
  if (((VAR_22 >> 8) & 0xff) != VAR_15)
   VAR_24 = -VAR_1;
  VAR_22 = (VAR_22 >> 8) & 0xff;
 }
 if (VAR_24 == -VAR_1) {
  FUNC_7(&VAR_20->dev, "SAHARA version %d not supported\n",
    VAR_22);
  goto err_algs;
 }

 VAR_21->version = VAR_22;

 FUNC_24(VAR_21, VAR_5 | VAR_4,
       VAR_11);
 FUNC_24(VAR_21, FUNC_3(0) |
   FUNC_2(8) |
   VAR_7 |
   VAR_6,
   VAR_12);

 VAR_24 = FUNC_23(VAR_21);
 if (VAR_24)
  goto err_algs;

 FUNC_8(&VAR_20->dev, "SAHARA version %d initialized\n", VAR_22);

 return 0;

err_algs:
 FUNC_17(VAR_21->kthread);
 VAR_17 = ((void*)0);
 FUNC_4(VAR_21->clk_ahb);
clk_ipg_disable:
 FUNC_4(VAR_21->clk_ipg);

 return VAR_24;
}
