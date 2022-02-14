
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int channels; int copy_align; } ;
struct xilinx_dma_device {scalar_t__ flush_on_fsync; int nr_channels; int dev; struct xilinx_dma_chan** chan; TYPE_4__ common; TYPE_2__* dma_config; int ext_addr; } ;
struct TYPE_7__ {int device_node; TYPE_4__* device; } ;
struct TYPE_5__ {int park; int vflip_en; } ;
struct xilinx_dma_chan {int desc_pendingcount; int idle; int id; int tdest; int flush_on_fsync; int has_vflip; int has_sg; TYPE_3__ common; int tasklet; int dev; void* stop_transfer; int start_transfer; int irq; TYPE_1__ config; int desc_offset; int ctrl_offset; int direction; void* genlock; int free_seg_list; int active_list; int done_list; int pending_list; int lock; int ext_addr; struct xilinx_dma_device* xdev; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {scalar_t__ dmatype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int ,char*,int,char*) ;
 int FUNC_2 (int ,char*,...) ;
 struct xilinx_dma_chan* FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct xilinx_dma_chan*,int ) ;
 int FUNC_5 (struct xilinx_dma_chan*,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct device_node*,int ) ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (struct device_node*,char*) ;
 void* FUNC_10 (struct device_node*,char*) ;
 int FUNC_11 (struct device_node*,char*,int*) ;
 int FUNC_12 (int ,int ,int ,char*,struct xilinx_dma_chan*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ,unsigned long) ;
 int VAR_20 ;
 void* VAR_21 ;
 int FUNC_15 (struct xilinx_dma_chan*) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 void* VAR_25 ;
 int VAR_26 ;

__attribute__((used)) static int FUNC_16(struct xilinx_dma_device *VAR_27,
      struct device_node *VAR_28, int VAR_29)
{
 struct xilinx_dma_chan *VAR_30;
 bool VAR_31 = 0;
 u32 VAR_32, VAR_33;
 int VAR_34;


 VAR_30 = FUNC_3(VAR_27->dev, sizeof(*VAR_30), VAR_4);
 if (!VAR_30)
  return -VAR_3;

 VAR_30->dev = VAR_27->dev;
 VAR_30->xdev = VAR_27;
 VAR_30->desc_pendingcount = 0x0;
 VAR_30->ext_addr = VAR_27->ext_addr;





 VAR_30->idle = 1;

 FUNC_13(&VAR_30->lock);
 FUNC_0(&VAR_30->pending_list);
 FUNC_0(&VAR_30->done_list);
 FUNC_0(&VAR_30->active_list);
 FUNC_0(&VAR_30->free_seg_list);


 VAR_31 = FUNC_10(VAR_28, "xlnx,include-dre");

 VAR_30->genlock = FUNC_10(VAR_28, "xlnx,genlock-mode");

 VAR_34 = FUNC_11(VAR_28, "xlnx,datawidth", &VAR_32);
 if (VAR_34) {
  FUNC_2(VAR_27->dev, "missing xlnx,datawidth property\n");
  return VAR_34;
 }
 VAR_33 = VAR_32 >> 3;


 if (VAR_33 > 8)
  VAR_31 = 0;

 if (!VAR_31)
  VAR_27->common.copy_align = FUNC_6(VAR_33 - 1);

 if (FUNC_9(VAR_28, "xlnx,axi-vdma-mm2s-channel") ||
     FUNC_9(VAR_28, "xlnx,axi-dma-mm2s-channel") ||
     FUNC_9(VAR_28, "xlnx,axi-cdma-channel")) {
  VAR_30->direction = VAR_1;
  VAR_30->id = VAR_29;
  VAR_30->tdest = VAR_29;

  VAR_30->ctrl_offset = VAR_13;
  if (VAR_27->dma_config->dmatype == VAR_8) {
   VAR_30->desc_offset = VAR_17;
   VAR_30->config.park = 1;

   if (VAR_27->flush_on_fsync == VAR_10 ||
       VAR_27->flush_on_fsync == VAR_11)
    VAR_30->flush_on_fsync = 1;
  }
 } else if (FUNC_9(VAR_28,
        "xlnx,axi-vdma-s2mm-channel") ||
     FUNC_9(VAR_28,
        "xlnx,axi-dma-s2mm-channel")) {
  VAR_30->direction = VAR_0;
  VAR_30->id = VAR_29;
  VAR_30->tdest = VAR_29 - VAR_27->nr_channels;
  VAR_30->has_vflip = FUNC_10(VAR_28,
     "xlnx,enable-vert-flip");
  if (VAR_30->has_vflip) {
   VAR_30->config.vflip_en = FUNC_5(VAR_30,
    VAR_18) &
    VAR_16;
  }

  VAR_30->ctrl_offset = VAR_15;
  if (VAR_27->dma_config->dmatype == VAR_8) {
   VAR_30->desc_offset = VAR_19;
   VAR_30->config.park = 1;

   if (VAR_27->flush_on_fsync == VAR_10 ||
       VAR_27->flush_on_fsync == VAR_12)
    VAR_30->flush_on_fsync = 1;
  }
 } else {
  FUNC_2(VAR_27->dev, "Invalid channel compatible node\n");
  return -VAR_2;
 }


 VAR_30->irq = FUNC_7(VAR_28, 0);
 VAR_34 = FUNC_12(VAR_30->irq, VAR_23, VAR_5,
     "xilinx-dma-controller", VAR_30);
 if (VAR_34) {
  FUNC_2(VAR_27->dev, "unable to request IRQ %d\n", VAR_30->irq);
  return VAR_34;
 }

 if (VAR_27->dma_config->dmatype == VAR_6) {
  VAR_30->start_transfer = VAR_24;
  VAR_30->stop_transfer = VAR_25;
 } else if (VAR_27->dma_config->dmatype == VAR_7) {
  VAR_30->start_transfer = VAR_20;
  VAR_30->stop_transfer = VAR_21;
 } else {
  VAR_30->start_transfer = VAR_26;
  VAR_30->stop_transfer = VAR_25;
 }


 if (VAR_27->dma_config->dmatype != VAR_8) {
  if (FUNC_4(VAR_30, VAR_14) &
      VAR_9)
   VAR_30->has_sg = 1;
  FUNC_1(VAR_30->dev, "ch %d: SG %s\n", VAR_30->id,
   VAR_30->has_sg ? "enabled" : "disabled");
 }


 FUNC_14(&VAR_30->tasklet, VAR_22,
   (unsigned long)VAR_30);





 VAR_30->common.device = &VAR_27->common;

 FUNC_8(&VAR_30->common.device_node, &VAR_27->common.channels);
 VAR_27->chan[VAR_30->id] = VAR_30;


 VAR_34 = FUNC_15(VAR_30);
 if (VAR_34 < 0) {
  FUNC_2(VAR_27->dev, "Reset channel failed\n");
  return VAR_34;
 }

 return 0;
}
