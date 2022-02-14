
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timb_dma_platform_data_channel {int rx; int bytes_per_line; int descriptor_elements; int descriptors; } ;
struct timb_dma_platform_data {int nr_channels; struct timb_dma_platform_data_channel* channels; } ;
struct TYPE_3__ {int device_node; TYPE_2__* device; } ;
struct timb_dma_chan {TYPE_1__ chan; scalar_t__ membase; int direction; int bytes_per_line; int desc_elems; int descs; int free_list; int queue; int active_list; int lock; } ;
struct TYPE_4__ {int channels; int * dev; int device_terminate_all; int device_prep_slave_sg; int cap_mask; int device_issue_pending; int device_tx_status; int device_free_chan_resources; int device_alloc_chan_resources; } ;
struct timb_dma {scalar_t__ membase; int tasklet; TYPE_2__ dma; struct timb_dma_chan* channels; } ;
struct resource {int start; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*) ;
 struct timb_dma_platform_data* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int,struct timb_dma*) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int,scalar_t__) ;
 int FUNC_11 (struct timb_dma*) ;
 struct timb_dma* FUNC_12 (int ,int ) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (struct platform_device*,int ) ;
 struct resource* FUNC_15 (struct platform_device*,int ,int ) ;
 int FUNC_16 (struct platform_device*,struct timb_dma*) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int,int ,int ,int ,struct timb_dma*) ;
 int FUNC_19 (int ,int ,int ) ;
 int FUNC_20 (struct resource*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (struct timb_dma*,int ,int) ;
 int FUNC_23 (int *,int ,unsigned long) ;
 int FUNC_24 (int *) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;

__attribute__((used)) static int FUNC_25(struct platform_device *VAR_26)
{
 struct timb_dma_platform_data *VAR_27 = FUNC_3(&VAR_26->dev);
 struct timb_dma *VAR_28;
 struct resource *VAR_29;
 int VAR_30;
 int VAR_31;
 int VAR_32;

 if (!VAR_27) {
  FUNC_2(&VAR_26->dev, "No platform data\n");
  return -VAR_6;
 }

 VAR_29 = FUNC_15(VAR_26, VAR_9, 0);
 if (!VAR_29)
  return -VAR_6;

 VAR_30 = FUNC_14(VAR_26, 0);
 if (VAR_30 < 0)
  return VAR_30;

 if (!FUNC_19(VAR_29->start, FUNC_20(VAR_29),
  VAR_4))
  return -VAR_5;

 VAR_28 = FUNC_12(FUNC_22(VAR_28, VAR_17, VAR_27->nr_channels),
        VAR_8);
 if (!VAR_28) {
  VAR_31 = -VAR_7;
  goto err_release_region;
 }

 FUNC_1(&VAR_26->dev, "Allocated TD: %p\n", VAR_28);

 VAR_28->membase = FUNC_8(VAR_29->start, FUNC_20(VAR_29));
 if (!VAR_28->membase) {
  FUNC_2(&VAR_26->dev, "Failed to remap I/O memory\n");
  VAR_31 = -VAR_7;
  goto err_free_mem;
 }


 FUNC_10(VAR_11, VAR_28->membase + VAR_12);


 FUNC_10(0x0, VAR_28->membase + VAR_13);
 FUNC_10(0xFFFFFFFF, VAR_28->membase + VAR_16);

 FUNC_23(&VAR_28->tasklet, VAR_23, (unsigned long)VAR_28);

 VAR_31 = FUNC_18(VAR_30, VAR_20, VAR_10, VAR_4, VAR_28);
 if (VAR_31) {
  FUNC_2(&VAR_26->dev, "Failed to request IRQ\n");
  goto err_tasklet_kill;
 }

 VAR_28->dma.device_alloc_chan_resources = VAR_18;
 VAR_28->dma.device_free_chan_resources = VAR_19;
 VAR_28->dma.device_tx_status = VAR_25;
 VAR_28->dma.device_issue_pending = VAR_21;

 FUNC_5(VAR_3, VAR_28->dma.cap_mask);
 FUNC_5(VAR_2, VAR_28->dma.cap_mask);
 VAR_28->dma.device_prep_slave_sg = VAR_22;
 VAR_28->dma.device_terminate_all = VAR_24;

 VAR_28->dma.dev = &VAR_26->dev;

 FUNC_0(&VAR_28->dma.channels);

 for (VAR_32 = 0; VAR_32 < VAR_27->nr_channels; VAR_32++) {
  struct timb_dma_chan *VAR_33 = &VAR_28->channels[VAR_32];
  struct timb_dma_platform_data_channel *VAR_34 =
   VAR_27->channels + VAR_32;


  if ((VAR_32 % 2) == VAR_34->rx) {
   FUNC_2(&VAR_26->dev, "Wrong channel configuration\n");
   VAR_31 = -VAR_6;
   goto err_free_irq;
  }

  VAR_33->chan.device = &VAR_28->dma;
  FUNC_6(&VAR_33->chan);
  FUNC_21(&VAR_33->lock);
  FUNC_0(&VAR_33->active_list);
  FUNC_0(&VAR_33->queue);
  FUNC_0(&VAR_33->free_list);

  VAR_33->descs = VAR_34->descriptors;
  VAR_33->desc_elems = VAR_34->descriptor_elements;
  VAR_33->bytes_per_line = VAR_34->bytes_per_line;
  VAR_33->direction = VAR_34->rx ? VAR_0 :
   VAR_1;

  VAR_33->membase = VAR_28->membase +
   (VAR_32 / 2) * VAR_14 +
   (VAR_34->rx ? 0 : VAR_15);

  FUNC_1(&VAR_26->dev, "Chan: %d, membase: %p\n",
   VAR_32, VAR_33->membase);

  FUNC_13(&VAR_33->chan.device_node, &VAR_28->dma.channels);
 }

 VAR_31 = FUNC_4(&VAR_28->dma);
 if (VAR_31) {
  FUNC_2(&VAR_26->dev, "Failed to register async device\n");
  goto err_free_irq;
 }

 FUNC_16(VAR_26, VAR_28);

 FUNC_1(&VAR_26->dev, "Probe result: %d\n", VAR_31);
 return VAR_31;

err_free_irq:
 FUNC_7(VAR_30, VAR_28);
err_tasklet_kill:
 FUNC_24(&VAR_28->tasklet);
 FUNC_9(VAR_28->membase);
err_free_mem:
 FUNC_11(VAR_28);
err_release_region:
 FUNC_17(VAR_29->start, FUNC_20(VAR_29));

 return VAR_31;

}
