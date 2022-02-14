
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_11__ {scalar_t__ of_node; scalar_t__ coherent_dma_mask; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {int dummy; } ;
struct TYPE_12__ {int src_addr_widths; int dst_addr_widths; int directions; TYPE_1__* dev; int residue_granularity; int copy_align; int device_terminate_all; int device_config; int device_issue_pending; int device_prep_dma_cyclic; int device_prep_slave_sg; int device_prep_dma_memcpy; int device_tx_status; int device_free_chan_resources; int device_alloc_chan_resources; int cap_mask; int channels; } ;
struct mmp_pdma_device {int dma_channels; TYPE_3__ device; TYPE_1__* dev; int * phy; int base; int phy_lock; } ;
struct mmp_dma_platdata {int dma_channels; } ;
typedef enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int *) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 struct mmp_dma_platdata* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,char*,int) ;
 int FUNC_8 (TYPE_1__*,struct resource*) ;
 int * FUNC_9 (TYPE_1__*,int,int,int ) ;
 struct mmp_pdma_device* FUNC_10 (TYPE_1__*,int,int ) ;
 int FUNC_11 (TYPE_1__*,int,int ,int ,char*,struct mmp_pdma_device*) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (TYPE_1__*,scalar_t__) ;
 int VAR_15 ;
 int FUNC_15 (struct mmp_pdma_device*,int,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_16 (scalar_t__,int ,struct mmp_pdma_device*) ;
 struct of_device_id* FUNC_17 (int ,TYPE_1__*) ;
 int FUNC_18 (scalar_t__,char*,int*) ;
 scalar_t__ FUNC_19 (struct platform_device*,int) ;
 struct resource* FUNC_20 (struct platform_device*,int ,int ) ;
 int FUNC_21 (struct platform_device*,struct mmp_pdma_device*) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static int FUNC_23(struct platform_device *VAR_27)
{
 struct mmp_pdma_device *VAR_28;
 const struct of_device_id *VAR_29;
 struct mmp_dma_platdata *VAR_30 = FUNC_6(&VAR_27->dev);
 struct resource *VAR_31;
 int VAR_32, VAR_33, VAR_34 = 0;
 int VAR_35 = 0, VAR_36 = 0;
 const enum dma_slave_buswidth VAR_37 =
  VAR_8 | VAR_9 |
  VAR_10;

 VAR_28 = FUNC_10(&VAR_27->dev, sizeof(*VAR_28), VAR_12);
 if (!VAR_28)
  return -VAR_11;

 VAR_28->dev = &VAR_27->dev;

 FUNC_22(&VAR_28->phy_lock);

 VAR_31 = FUNC_20(VAR_27, VAR_13, 0);
 VAR_28->base = FUNC_8(VAR_28->dev, VAR_31);
 if (FUNC_3(VAR_28->base))
  return FUNC_4(VAR_28->base);

 VAR_29 = FUNC_17(VAR_18, VAR_28->dev);
 if (VAR_29)
  FUNC_18(VAR_28->dev->of_node, "#dma-channels",
         &VAR_35);
 else if (VAR_30 && VAR_30->dma_channels)
  VAR_35 = VAR_30->dma_channels;
 else
  VAR_35 = 32;
 VAR_28->dma_channels = VAR_35;

 for (VAR_32 = 0; VAR_32 < VAR_35; VAR_32++) {
  if (FUNC_19(VAR_27, VAR_32) > 0)
   VAR_36++;
 }

 VAR_28->phy = FUNC_9(VAR_28->dev, VAR_35, sizeof(*VAR_28->phy),
     VAR_12);
 if (VAR_28->phy == ((void*)0))
  return -VAR_11;

 FUNC_2(&VAR_28->device.channels);

 if (VAR_36 != VAR_35) {

  VAR_34 = FUNC_19(VAR_27, 0);
  VAR_33 = FUNC_11(VAR_28->dev, VAR_34, VAR_20,
           VAR_14, "pdma", VAR_28);
  if (VAR_33)
   return VAR_33;
 }

 for (VAR_32 = 0; VAR_32 < VAR_35; VAR_32++) {
  VAR_34 = (VAR_36 != VAR_35) ? 0 : FUNC_19(VAR_27, VAR_32);
  VAR_33 = FUNC_15(VAR_28, VAR_32, VAR_34);
  if (VAR_33)
   return VAR_33;
 }

 FUNC_13(VAR_7, VAR_28->device.cap_mask);
 FUNC_13(VAR_3, VAR_28->device.cap_mask);
 FUNC_13(VAR_1, VAR_28->device.cap_mask);
 FUNC_13(VAR_5, VAR_28->device.cap_mask);
 VAR_28->device.dev = &VAR_27->dev;
 VAR_28->device.device_alloc_chan_resources = VAR_15;
 VAR_28->device.device_free_chan_resources = VAR_19;
 VAR_28->device.device_tx_status = VAR_26;
 VAR_28->device.device_prep_dma_memcpy = VAR_23;
 VAR_28->device.device_prep_slave_sg = VAR_24;
 VAR_28->device.device_prep_dma_cyclic = VAR_22;
 VAR_28->device.device_issue_pending = VAR_21;
 VAR_28->device.device_config = VAR_16;
 VAR_28->device.device_terminate_all = VAR_25;
 VAR_28->device.copy_align = VAR_0;
 VAR_28->device.src_addr_widths = VAR_37;
 VAR_28->device.dst_addr_widths = VAR_37;
 VAR_28->device.directions = FUNC_0(VAR_4) | FUNC_0(VAR_2);
 VAR_28->device.residue_granularity = VAR_6;

 if (VAR_28->dev->coherent_dma_mask)
  FUNC_14(VAR_28->dev, VAR_28->dev->coherent_dma_mask);
 else
  FUNC_14(VAR_28->dev, FUNC_1(64));

 VAR_33 = FUNC_12(&VAR_28->device);
 if (VAR_33) {
  FUNC_5(VAR_28->device.dev, "unable to register\n");
  return VAR_33;
 }

 if (VAR_27->dev.of_node) {

  VAR_33 = FUNC_16(VAR_27->dev.of_node,
       VAR_17, VAR_28);
  if (VAR_33 < 0) {
   FUNC_5(&VAR_27->dev, "of_dma_controller_register failed\n");
   return VAR_33;
  }
 }

 FUNC_21(VAR_27, VAR_28);
 FUNC_7(VAR_28->device.dev, "initialized %d channels\n", VAR_35);
 return 0;
}
