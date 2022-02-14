
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct dma_device {int src_addr_widths; int dst_addr_widths; int directions; int device_issue_pending; int device_tx_status; int device_terminate_all; int device_prep_slave_sg; int device_free_chan_resources; int device_alloc_chan_resources; int residue_granularity; TYPE_1__* dev; int cap_mask; int channels; } ;
struct usb_dmac {unsigned int n_channels; struct dma_device engine; int * channels; int iomem; TYPE_1__* dev; } ;
struct resource {int dummy; } ;
struct TYPE_10__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
typedef enum dma_slave_buswidth { ____Placeholder_dma_slave_buswidth } dma_slave_buswidth ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int FUNC_4 (TYPE_1__*,char*,...) ;
 int FUNC_5 (TYPE_1__*,struct resource*) ;
 int * FUNC_6 (TYPE_1__*,unsigned int,int,int ) ;
 struct usb_dmac* FUNC_7 (TYPE_1__*,int,int ) ;
 int FUNC_8 (struct dma_device*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int *) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct usb_dmac*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int VAR_8 ;
 int FUNC_18 (struct usb_dmac*,int *,unsigned int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_19 (struct usb_dmac*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_20 (TYPE_1__*,struct usb_dmac*) ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_15)
{
 const enum dma_slave_buswidth VAR_16 = VAR_7;
 struct dma_device *VAR_17;
 struct usb_dmac *VAR_18;
 struct resource *VAR_19;
 unsigned int VAR_20;
 int VAR_21;

 VAR_18 = FUNC_7(&VAR_15->dev, sizeof(*VAR_18), VAR_5);
 if (!VAR_18)
  return -VAR_4;

 VAR_18->dev = &VAR_15->dev;
 FUNC_13(VAR_15, VAR_18);

 VAR_21 = FUNC_20(&VAR_15->dev, VAR_18);
 if (VAR_21 < 0)
  return VAR_21;

 VAR_18->channels = FUNC_6(&VAR_15->dev, VAR_18->n_channels,
          sizeof(*VAR_18->channels), VAR_5);
 if (!VAR_18->channels)
  return -VAR_4;


 VAR_19 = FUNC_12(VAR_15, VAR_6, 0);
 VAR_18->iomem = FUNC_5(&VAR_15->dev, VAR_19);
 if (FUNC_2(VAR_18->iomem))
  return FUNC_3(VAR_18->iomem);


 FUNC_15(&VAR_15->dev);
 VAR_21 = FUNC_16(&VAR_15->dev);
 if (VAR_21 < 0) {
  FUNC_4(&VAR_15->dev, "runtime PM get sync failed (%d)\n", VAR_21);
  goto error_pm;
 }

 VAR_21 = FUNC_19(VAR_18);

 if (VAR_21) {
  FUNC_4(&VAR_15->dev, "failed to reset device\n");
  goto error;
 }


 FUNC_1(&VAR_18->engine.channels);

 for (VAR_20 = 0; VAR_20 < VAR_18->n_channels; ++VAR_20) {
  VAR_21 = FUNC_18(VAR_18, &VAR_18->channels[VAR_20], VAR_20);
  if (VAR_21 < 0)
   goto error;
 }


 VAR_21 = FUNC_11(VAR_15->dev.of_node, VAR_12,
      ((void*)0));
 if (VAR_21 < 0)
  goto error;






 VAR_17 = &VAR_18->engine;
 FUNC_9(VAR_3, VAR_17->cap_mask);

 VAR_17->dev = &VAR_15->dev;

 VAR_17->src_addr_widths = VAR_16;
 VAR_17->dst_addr_widths = VAR_16;
 VAR_17->directions = FUNC_0(VAR_1) | FUNC_0(VAR_0);
 VAR_17->residue_granularity = VAR_2;

 VAR_17->device_alloc_chan_resources = VAR_8;
 VAR_17->device_free_chan_resources = VAR_10;
 VAR_17->device_prep_slave_sg = VAR_13;
 VAR_17->device_terminate_all = VAR_9;
 VAR_17->device_tx_status = VAR_14;
 VAR_17->device_issue_pending = VAR_11;

 VAR_21 = FUNC_8(VAR_17);
 if (VAR_21 < 0)
  goto error;

 FUNC_17(&VAR_15->dev);
 return 0;

error:
 FUNC_10(VAR_15->dev.of_node);
 FUNC_17(&VAR_15->dev);
error_pm:
 FUNC_14(&VAR_15->dev);
 return VAR_21;
}
