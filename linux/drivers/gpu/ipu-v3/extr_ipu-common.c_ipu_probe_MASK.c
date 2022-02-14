
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct resource {unsigned long start; } ;
struct TYPE_10__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct ipu_soc {scalar_t__ id; int irq_sync; int irq_err; int clk; TYPE_1__* dev; void* idmac_reg; void* cm_reg; int channels; int channel_lock; int lock; int ipu_type; struct ipu_devtype const* devtype; int prg_priv; } ;
struct ipu_devtype {unsigned long cm_ofs; unsigned long cpmem_ofs; unsigned long csi0_ofs; unsigned long csi1_ofs; unsigned long ic_ofs; unsigned long disp0_ofs; unsigned long disp1_ofs; unsigned long srm_ofs; unsigned long tpm_ofs; unsigned long vdi_ofs; int name; int type; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_13 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,char*,unsigned long,...) ;
 int FUNC_7 (TYPE_1__*,char*,int) ;
 int FUNC_8 (TYPE_1__*,char*,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,char*) ;
 void* FUNC_11 (TYPE_1__*,unsigned long,int ) ;
 struct ipu_soc* FUNC_12 (TYPE_1__*,int,int ) ;
 int FUNC_13 (struct ipu_soc*,unsigned long) ;
 int FUNC_14 (struct ipu_soc*,int,int ) ;
 int FUNC_15 (struct ipu_soc*) ;
 int FUNC_16 (struct ipu_soc*) ;
 int FUNC_17 (struct ipu_soc*) ;
 int FUNC_18 (TYPE_1__*,char*,scalar_t__) ;
 int FUNC_19 (struct ipu_soc*) ;
 int FUNC_20 (struct ipu_soc*,struct platform_device*,unsigned long,int ) ;
 int FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (struct device_node*,char*) ;
 struct ipu_devtype* FUNC_23 (TYPE_1__*) ;
 scalar_t__ FUNC_24 (struct device_node*,char*) ;
 int FUNC_25 (struct platform_device*,int) ;
 struct resource* FUNC_26 (struct platform_device*,int ,int ) ;
 int FUNC_27 (struct platform_device*,struct ipu_soc*) ;
 int FUNC_28 (int *) ;

__attribute__((used)) static int FUNC_29(struct platform_device *VAR_14)
{
 struct device_node *VAR_15 = VAR_14->dev.of_node;
 struct ipu_soc *VAR_16;
 struct resource *VAR_17;
 unsigned long VAR_18;
 int VAR_19, VAR_20, VAR_21;
 const struct ipu_devtype *VAR_22;

 VAR_22 = FUNC_23(&VAR_14->dev);
 if (!VAR_22)
  return -VAR_1;

 VAR_20 = FUNC_25(VAR_14, 0);
 VAR_21 = FUNC_25(VAR_14, 1);
 VAR_17 = FUNC_26(VAR_14, VAR_6, 0);

 FUNC_6(&VAR_14->dev, "irq_sync: %d irq_err: %d\n",
   VAR_20, VAR_21);

 if (!VAR_17 || VAR_20 < 0 || VAR_21 < 0)
  return -VAR_2;

 VAR_18 = VAR_17->start;

 VAR_16 = FUNC_12(&VAR_14->dev, sizeof(*VAR_16), VAR_5);
 if (!VAR_16)
  return -VAR_2;

 VAR_16->id = FUNC_22(VAR_15, "ipu");
 if (VAR_16->id < 0)
  VAR_16->id = 0;

 if (FUNC_24(VAR_15, "fsl,imx6qp-ipu") &&
     FUNC_1(VAR_0)) {
  VAR_16->prg_priv = FUNC_18(&VAR_14->dev,
         "fsl,prg", VAR_16->id);
  if (!VAR_16->prg_priv)
   return -VAR_4;
 }

 VAR_16->devtype = VAR_22;
 VAR_16->ipu_type = VAR_22->type;

 FUNC_28(&VAR_16->lock);
 FUNC_21(&VAR_16->channel_lock);
 FUNC_0(&VAR_16->channels);

 FUNC_6(&VAR_14->dev, "cm_reg:   0x%08lx\n",
   VAR_18 + VAR_22->cm_ofs);
 FUNC_6(&VAR_14->dev, "idmac:    0x%08lx\n",
   VAR_18 + VAR_22->cm_ofs + VAR_10);
 FUNC_6(&VAR_14->dev, "cpmem:    0x%08lx\n",
   VAR_18 + VAR_22->cpmem_ofs);
 FUNC_6(&VAR_14->dev, "csi0:    0x%08lx\n",
   VAR_18 + VAR_22->csi0_ofs);
 FUNC_6(&VAR_14->dev, "csi1:    0x%08lx\n",
   VAR_18 + VAR_22->csi1_ofs);
 FUNC_6(&VAR_14->dev, "ic:      0x%08lx\n",
   VAR_18 + VAR_22->ic_ofs);
 FUNC_6(&VAR_14->dev, "disp0:    0x%08lx\n",
   VAR_18 + VAR_22->disp0_ofs);
 FUNC_6(&VAR_14->dev, "disp1:    0x%08lx\n",
   VAR_18 + VAR_22->disp1_ofs);
 FUNC_6(&VAR_14->dev, "srm:      0x%08lx\n",
   VAR_18 + VAR_22->srm_ofs);
 FUNC_6(&VAR_14->dev, "tpm:      0x%08lx\n",
   VAR_18 + VAR_22->tpm_ofs);
 FUNC_6(&VAR_14->dev, "dc:       0x%08lx\n",
   VAR_18 + VAR_22->cm_ofs + VAR_7);
 FUNC_6(&VAR_14->dev, "ic:       0x%08lx\n",
   VAR_18 + VAR_22->cm_ofs + VAR_9);
 FUNC_6(&VAR_14->dev, "dmfc:     0x%08lx\n",
   VAR_18 + VAR_22->cm_ofs + VAR_8);
 FUNC_6(&VAR_14->dev, "vdi:      0x%08lx\n",
   VAR_18 + VAR_22->vdi_ofs);

 VAR_16->cm_reg = FUNC_11(&VAR_14->dev,
   VAR_18 + VAR_22->cm_ofs, VAR_13);
 VAR_16->idmac_reg = FUNC_11(&VAR_14->dev,
   VAR_18 + VAR_22->cm_ofs + VAR_10,
   VAR_13);

 if (!VAR_16->cm_reg || !VAR_16->idmac_reg)
  return -VAR_3;

 VAR_16->clk = FUNC_10(&VAR_14->dev, "bus");
 if (FUNC_2(VAR_16->clk)) {
  VAR_19 = FUNC_3(VAR_16->clk);
  FUNC_7(&VAR_14->dev, "clk_get failed with %d", VAR_19);
  return VAR_19;
 }

 FUNC_27(VAR_14, VAR_16);

 VAR_19 = FUNC_5(VAR_16->clk);
 if (VAR_19) {
  FUNC_7(&VAR_14->dev, "clk_prepare_enable failed: %d\n", VAR_19);
  return VAR_19;
 }

 VAR_16->dev = &VAR_14->dev;
 VAR_16->irq_sync = VAR_20;
 VAR_16->irq_err = VAR_21;

 VAR_19 = FUNC_9(&VAR_14->dev);
 if (VAR_19) {
  FUNC_7(&VAR_14->dev, "failed to reset: %d\n", VAR_19);
  goto out_failed_reset;
 }
 VAR_19 = FUNC_17(VAR_16);
 if (VAR_19)
  goto out_failed_reset;

 VAR_19 = FUNC_16(VAR_16);
 if (VAR_19)
  goto out_failed_irq;


 FUNC_14(VAR_16, 0x00400000L | (VAR_12 << 18),
   VAR_11);

 VAR_19 = FUNC_20(VAR_16, VAR_14, VAR_18, VAR_16->clk);
 if (VAR_19)
  goto failed_submodules_init;

 VAR_19 = FUNC_13(VAR_16, VAR_18);
 if (VAR_19) {
  FUNC_7(&VAR_14->dev, "adding client devices failed with %d\n",
    VAR_19);
  goto failed_add_clients;
 }

 FUNC_8(&VAR_14->dev, "%s probed\n", VAR_22->name);

 return 0;

failed_add_clients:
 FUNC_19(VAR_16);
failed_submodules_init:
 FUNC_15(VAR_16);
out_failed_irq:
out_failed_reset:
 FUNC_4(VAR_16->clk);
 return VAR_19;
}
