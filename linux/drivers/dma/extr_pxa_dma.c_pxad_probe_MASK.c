
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_10__ {int mapcnt; int fn; struct dma_slave_map const* map; } ;
struct TYPE_11__ {int src_addr_widths; int dst_addr_widths; int directions; int descriptor_reuse; TYPE_3__* dev; int residue_granularity; int copy_align; TYPE_1__ filter; int device_prep_dma_cyclic; int device_prep_slave_sg; int device_prep_dma_memcpy; int cap_mask; } ;
struct pxad_device {TYPE_2__ slave; int base; int phy_lock; } ;
struct TYPE_12__ {scalar_t__ of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct of_device_id {int dummy; } ;
struct mmp_dma_platdata {int dma_channels; int nb_requestors; int slave_map_cnt; struct dma_slave_map* slave_map; } ;
struct dma_slave_map {int dummy; } ;
typedef enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
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
 scalar_t__ FUNC_1 (int ) ;
 int VAR_13 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 struct mmp_dma_platdata* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,char*,int,int) ;
 int FUNC_6 (TYPE_3__*,char*,int) ;
 int FUNC_7 (TYPE_3__*,struct resource*) ;
 struct pxad_device* FUNC_8 (TYPE_3__*,int,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (scalar_t__,int ,struct pxad_device*) ;
 struct of_device_id* FUNC_11 (int ,TYPE_3__*) ;
 int FUNC_12 (scalar_t__,char*,int*) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct platform_device*,struct pxad_device*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_15 (struct pxad_device*) ;
 int FUNC_16 (struct platform_device*,struct pxad_device*,int,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_20)
{
 struct pxad_device *VAR_21;
 const struct of_device_id *VAR_22;
 const struct dma_slave_map *VAR_23 = ((void*)0);
 struct mmp_dma_platdata *VAR_24 = FUNC_4(&VAR_20->dev);
 struct resource *VAR_25;
 int VAR_26, VAR_27 = 0, VAR_28 = 0, VAR_29 = 0;
 const enum dma_slave_buswidth VAR_30 =
  VAR_7 | VAR_8 |
  VAR_9;

 VAR_21 = FUNC_8(&VAR_20->dev, sizeof(*VAR_21), VAR_11);
 if (!VAR_21)
  return -VAR_10;

 FUNC_17(&VAR_21->phy_lock);

 VAR_25 = FUNC_13(VAR_20, VAR_12, 0);
 VAR_21->base = FUNC_7(&VAR_20->dev, VAR_25);
 if (FUNC_1(VAR_21->base))
  return FUNC_2(VAR_21->base);

 VAR_22 = FUNC_11(VAR_15, &VAR_20->dev);
 if (VAR_22) {
  FUNC_12(VAR_20->dev.of_node, "#dma-channels",
         &VAR_27);
  VAR_26 = FUNC_12(VAR_20->dev.of_node, "#dma-requests",
        &VAR_28);
  if (VAR_26) {
   FUNC_6(VAR_21->slave.dev,
     "#dma-requests set to default 32 as missing in OF: %d",
     VAR_26);
   VAR_28 = 32;
  }
 } else if (VAR_24 && VAR_24->dma_channels) {
  VAR_27 = VAR_24->dma_channels;
  VAR_28 = VAR_24->nb_requestors;
  VAR_23 = VAR_24->slave_map;
  VAR_29 = VAR_24->slave_map_cnt;
 } else {
  VAR_27 = 32;
 }

 FUNC_9(VAR_6, VAR_21->slave.cap_mask);
 FUNC_9(VAR_2, VAR_21->slave.cap_mask);
 FUNC_9(VAR_0, VAR_21->slave.cap_mask);
 FUNC_9(VAR_4, VAR_21->slave.cap_mask);
 VAR_21->slave.device_prep_dma_memcpy = VAR_18;
 VAR_21->slave.device_prep_slave_sg = VAR_19;
 VAR_21->slave.device_prep_dma_cyclic = VAR_17;
 VAR_21->slave.filter.map = VAR_23;
 VAR_21->slave.filter.mapcnt = VAR_29;
 VAR_21->slave.filter.fn = VAR_16;

 VAR_21->slave.copy_align = VAR_13;
 VAR_21->slave.src_addr_widths = VAR_30;
 VAR_21->slave.dst_addr_widths = VAR_30;
 VAR_21->slave.directions = FUNC_0(VAR_3) | FUNC_0(VAR_1);
 VAR_21->slave.residue_granularity = VAR_5;
 VAR_21->slave.descriptor_reuse = 1;

 VAR_21->slave.dev = &VAR_20->dev;
 VAR_26 = FUNC_16(VAR_20, VAR_21, VAR_27, VAR_28);
 if (VAR_26) {
  FUNC_3(VAR_21->slave.dev, "unable to register\n");
  return VAR_26;
 }

 if (VAR_20->dev.of_node) {

  VAR_26 = FUNC_10(VAR_20->dev.of_node,
       VAR_14, VAR_21);
  if (VAR_26 < 0) {
   FUNC_3(VAR_21->slave.dev,
    "of_dma_controller_register failed\n");
   return VAR_26;
  }
 }

 FUNC_14(VAR_20, VAR_21);
 FUNC_15(VAR_21);
 FUNC_5(VAR_21->slave.dev, "initialized %d channels on %d requestors\n",
   VAR_27, VAR_28);
 return 0;
}
