
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_7__ {int channels; } ;
struct zynqmp_dma_device {TYPE_1__ common; struct zynqmp_dma_chan* chan; TYPE_3__* dev; } ;
struct zynqmp_dma_desc_ll {int dummy; } ;
struct TYPE_8__ {int device_node; TYPE_1__* device; } ;
struct zynqmp_dma_chan {scalar_t__ bus_width; scalar_t__ irq; int desc_size; int idle; TYPE_2__ common; int free_list; int done_list; int pending_list; int active_list; int lock; int tasklet; int is_dmacoherent; int src_burst_len; int dst_burst_len; int regs; struct zynqmp_dma_device* zdev; TYPE_3__* dev; } ;
struct resource {int dummy; } ;
struct TYPE_9__ {struct device_node* of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int FUNC_4 (TYPE_3__*,struct resource*) ;
 struct zynqmp_dma_chan* FUNC_5 (TYPE_3__*,int,int ) ;
 int FUNC_6 (TYPE_3__*,scalar_t__,int ,int ,char*,struct zynqmp_dma_chan*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct device_node*,char*) ;
 int FUNC_10 (struct device_node*,char*,scalar_t__*) ;
 scalar_t__ FUNC_11 (struct platform_device*,int ) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ,int ) ;
 int VAR_9 ;
 int FUNC_15 (struct zynqmp_dma_chan*) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_16(struct zynqmp_dma_device *VAR_11,
      struct platform_device *VAR_12)
{
 struct zynqmp_dma_chan *VAR_13;
 struct resource *VAR_14;
 struct device_node *VAR_15 = VAR_12->dev.of_node;
 int VAR_16;

 VAR_13 = FUNC_5(VAR_11->dev, sizeof(*VAR_13), VAR_3);
 if (!VAR_13)
  return -VAR_1;
 VAR_13->dev = VAR_11->dev;
 VAR_13->zdev = VAR_11;

 VAR_14 = FUNC_12(VAR_12, VAR_4, 0);
 VAR_13->regs = FUNC_4(&VAR_12->dev, VAR_14);
 if (FUNC_1(VAR_13->regs))
  return FUNC_2(VAR_13->regs);

 VAR_13->bus_width = VAR_8;
 VAR_13->dst_burst_len = VAR_6;
 VAR_13->src_burst_len = VAR_5;
 VAR_16 = FUNC_10(VAR_15, "xlnx,bus-width", &VAR_13->bus_width);
 if (VAR_16 < 0) {
  FUNC_3(&VAR_12->dev, "missing xlnx,bus-width property\n");
  return VAR_16;
 }

 if (VAR_13->bus_width != VAR_8 &&
     VAR_13->bus_width != VAR_7) {
  FUNC_3(VAR_11->dev, "invalid bus-width value");
  return -VAR_0;
 }

 VAR_13->is_dmacoherent = FUNC_9(VAR_15, "dma-coherent");
 VAR_11->chan = VAR_13;
 FUNC_14(&VAR_13->tasklet, VAR_9, (ulong)VAR_13);
 FUNC_13(&VAR_13->lock);
 FUNC_0(&VAR_13->active_list);
 FUNC_0(&VAR_13->pending_list);
 FUNC_0(&VAR_13->done_list);
 FUNC_0(&VAR_13->free_list);

 FUNC_7(&VAR_13->common);
 VAR_13->common.device = &VAR_11->common;
 FUNC_8(&VAR_13->common.device_node, &VAR_11->common.channels);

 FUNC_15(VAR_13);
 VAR_13->irq = FUNC_11(VAR_12, 0);
 if (VAR_13->irq < 0)
  return -VAR_2;
 VAR_16 = FUNC_6(&VAR_12->dev, VAR_13->irq, VAR_10, 0,
          "zynqmp-dma", VAR_13);
 if (VAR_16)
  return VAR_16;

 VAR_13->desc_size = sizeof(struct zynqmp_dma_desc_ll);
 VAR_13->idle = 1;
 return 0;
}
