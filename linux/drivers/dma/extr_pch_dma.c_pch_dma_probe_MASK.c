
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_device_id {unsigned int driver_data; } ;
struct pci_dev {int irq; int dev; } ;
struct pch_dma_regs {int * desc; } ;
struct pch_dma_desc {int dummy; } ;
struct TYPE_3__ {int device_node; TYPE_2__* device; } ;
struct pch_dma_chan {TYPE_1__ chan; int tasklet; int free_list; int queue; int active_list; int lock; int * membase; } ;
struct TYPE_4__ {int device_terminate_all; int device_prep_slave_sg; int device_issue_pending; int device_tx_status; int device_free_chan_resources; int device_alloc_chan_resources; int cap_mask; int channels; int * dev; } ;
struct pch_dma {struct pch_dma_regs* membase; int pool; TYPE_2__ dma; struct pch_dma_chan* channels; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*,int *,int,int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,struct pch_dma*) ;
 int FUNC_10 (struct pch_dma*) ;
 struct pch_dma* FUNC_11 (int,int ) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*) ;
 struct pch_dma_regs* FUNC_15 (struct pci_dev*,int,int ) ;
 int FUNC_16 (struct pci_dev*,struct pch_dma_regs*) ;
 int FUNC_17 (struct pci_dev*) ;
 int FUNC_18 (struct pci_dev*,int ) ;
 int FUNC_19 (struct pci_dev*,int) ;
 int FUNC_20 (struct pci_dev*,int ) ;
 int FUNC_21 (struct pci_dev*,struct pch_dma*) ;
 int FUNC_22 (struct pci_dev*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_23 (int ,int ,int ,int ,struct pch_dma*) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_26(struct pci_dev *VAR_16,
       const struct pci_device_id *VAR_17)
{
 struct pch_dma *VAR_18;
 struct pch_dma_regs *VAR_19;
 unsigned int VAR_20;
 int VAR_21;
 int VAR_22;

 VAR_20 = VAR_17->driver_data;
 VAR_18 = FUNC_11(sizeof(*VAR_18), VAR_5);
 if (!VAR_18)
  return -VAR_4;

 FUNC_21(VAR_16, VAR_18);

 VAR_21 = FUNC_14(VAR_16);
 if (VAR_21) {
  FUNC_2(&VAR_16->dev, "Cannot enable PCI device\n");
  goto err_free_mem;
 }

 if (!(FUNC_19(VAR_16, 1) & VAR_6)) {
  FUNC_2(&VAR_16->dev, "Cannot find proper base address\n");
  VAR_21 = -VAR_3;
  goto err_disable_pdev;
 }

 VAR_21 = FUNC_18(VAR_16, VAR_2);
 if (VAR_21) {
  FUNC_2(&VAR_16->dev, "Cannot obtain PCI resources\n");
  goto err_disable_pdev;
 }

 VAR_21 = FUNC_20(VAR_16, FUNC_0(32));
 if (VAR_21) {
  FUNC_2(&VAR_16->dev, "Cannot set proper DMA config\n");
  goto err_free_res;
 }

 VAR_19 = VAR_18->membase = FUNC_15(VAR_16, 1, 0);
 if (!VAR_18->membase) {
  FUNC_2(&VAR_16->dev, "Cannot map MMIO registers\n");
  VAR_21 = -VAR_4;
  goto err_free_res;
 }

 FUNC_22(VAR_16);

 VAR_21 = FUNC_23(VAR_16->irq, VAR_11, VAR_7, VAR_2, VAR_18);
 if (VAR_21) {
  FUNC_2(&VAR_16->dev, "Failed to request IRQ\n");
  goto err_iounmap;
 }

 VAR_18->pool = FUNC_7("pch_dma_desc_pool", &VAR_16->dev,
       sizeof(struct pch_dma_desc), 4, 0);
 if (!VAR_18->pool) {
  FUNC_2(&VAR_16->dev, "Failed to alloc DMA descriptors\n");
  VAR_21 = -VAR_4;
  goto err_free_irq;
 }

 VAR_18->dma.dev = &VAR_16->dev;

 FUNC_1(&VAR_18->dma.channels);

 for (VAR_22 = 0; VAR_22 < VAR_20; VAR_22++) {
  struct pch_dma_chan *VAR_23 = &VAR_18->channels[VAR_22];

  VAR_23->chan.device = &VAR_18->dma;
  FUNC_6(&VAR_23->chan);

  VAR_23->membase = &VAR_19->desc[VAR_22];

  FUNC_24(&VAR_23->lock);

  FUNC_1(&VAR_23->active_list);
  FUNC_1(&VAR_23->queue);
  FUNC_1(&VAR_23->free_list);

  FUNC_25(&VAR_23->tasklet, VAR_15,
        (unsigned long)VAR_23);
  FUNC_12(&VAR_23->chan.device_node, &VAR_18->dma.channels);
 }

 FUNC_5(VAR_18->dma.cap_mask);
 FUNC_4(VAR_0, VAR_18->dma.cap_mask);
 FUNC_4(VAR_1, VAR_18->dma.cap_mask);

 VAR_18->dma.device_alloc_chan_resources = VAR_8;
 VAR_18->dma.device_free_chan_resources = VAR_10;
 VAR_18->dma.device_tx_status = VAR_14;
 VAR_18->dma.device_issue_pending = VAR_12;
 VAR_18->dma.device_prep_slave_sg = VAR_13;
 VAR_18->dma.device_terminate_all = VAR_9;

 VAR_21 = FUNC_3(&VAR_18->dma);
 if (VAR_21) {
  FUNC_2(&VAR_16->dev, "Failed to register DMA device\n");
  goto err_free_pool;
 }

 return 0;

err_free_pool:
 FUNC_8(VAR_18->pool);
err_free_irq:
 FUNC_9(VAR_16->irq, VAR_18);
err_iounmap:
 FUNC_16(VAR_16, VAR_18->membase);
err_free_res:
 FUNC_17(VAR_16);
err_disable_pdev:
 FUNC_13(VAR_16);
err_free_mem:
 FUNC_10(VAR_18);
 return VAR_21;
}
