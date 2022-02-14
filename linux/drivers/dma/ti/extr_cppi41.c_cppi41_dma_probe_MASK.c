
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct cppi_glue_infos {int first_completion_queue; int qmgr_num_pend; int td_queue; int queues_tx; int queues_rx; } ;
struct TYPE_6__ {int directions; int cap_mask; int channels; struct device* dev; int residue_granularity; void* dst_addr_widths; void* src_addr_widths; int device_terminate_all; int device_prep_slave_sg; int device_issue_pending; int device_tx_status; int device_free_chan_resources; int device_alloc_chan_resources; } ;
struct cppi41_dd {int irq; TYPE_2__ ddev; int n_chans; int first_completion_queue; int qmgr_num_pend; int td_queue; int queues_tx; int queues_rx; int pending; int lock; void* qmgr_mem; void* sched_mem; void* ctrl_mem; } ;
struct TYPE_5__ {int dma_cap; } ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 TYPE_1__ VAR_10 ;
 int FUNC_4 (struct device*,struct cppi41_dd*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (struct device*,struct cppi41_dd*) ;
 int FUNC_6 (struct device*) ;
 void* FUNC_7 (struct device*,struct resource*) ;
 struct cppi41_dd* FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (struct device*,int,int ,int ,int ,struct cppi41_dd*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int ,int ) ;
 struct cppi_glue_infos* FUNC_13 (struct device*) ;
 int FUNC_14 (struct device*,struct cppi41_dd*) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ,TYPE_1__*) ;
 int FUNC_17 (int ,char*,char*) ;
 int FUNC_18 (int ,char*,int *) ;
 struct resource* FUNC_19 (struct platform_device*,int ,int) ;
 int FUNC_20 (struct platform_device*,struct cppi41_dd*) ;
 int FUNC_21 (struct device*) ;
 int FUNC_22 (struct device*) ;
 int FUNC_23 (struct device*) ;
 int FUNC_24 (struct device*) ;
 int FUNC_25 (struct device*) ;
 int FUNC_26 (struct device*) ;
 int FUNC_27 (struct device*) ;
 int FUNC_28 (struct device*,int) ;
 int FUNC_29 (struct device*) ;
 int FUNC_30 (int *) ;

__attribute__((used)) static int FUNC_31(struct platform_device *VAR_19)
{
 struct cppi41_dd *VAR_20;
 struct device *VAR_21 = &VAR_19->dev;
 const struct cppi_glue_infos *VAR_22;
 struct resource *VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26;

 VAR_22 = FUNC_13(VAR_21);
 if (!VAR_22)
  return -VAR_5;

 VAR_20 = FUNC_8(&VAR_19->dev, sizeof(*VAR_20), VAR_7);
 if (!VAR_20)
  return -VAR_6;

 FUNC_12(VAR_4, VAR_20->ddev.cap_mask);
 VAR_20->ddev.device_alloc_chan_resources = VAR_11;
 VAR_20->ddev.device_free_chan_resources = VAR_12;
 VAR_20->ddev.device_tx_status = VAR_15;
 VAR_20->ddev.device_issue_pending = VAR_13;
 VAR_20->ddev.device_prep_slave_sg = VAR_14;
 VAR_20->ddev.device_terminate_all = VAR_18;
 VAR_20->ddev.directions = FUNC_0(VAR_1) | FUNC_0(VAR_2);
 VAR_20->ddev.src_addr_widths = VAR_0;
 VAR_20->ddev.dst_addr_widths = VAR_0;
 VAR_20->ddev.residue_granularity = VAR_3;
 VAR_20->ddev.dev = VAR_21;
 FUNC_1(&VAR_20->ddev.channels);
 VAR_10.dma_cap = VAR_20->ddev.cap_mask;

 VAR_24 = FUNC_17(VAR_21->of_node,
      "reg-names", "controller");
 if (VAR_24 < 0)
  return VAR_24;

 VAR_23 = FUNC_19(VAR_19, VAR_8, VAR_24);
 VAR_20->ctrl_mem = FUNC_7(VAR_21, VAR_23);
 if (FUNC_2(VAR_20->ctrl_mem))
  return FUNC_3(VAR_20->ctrl_mem);

 VAR_23 = FUNC_19(VAR_19, VAR_8, VAR_24 + 1);
 VAR_20->sched_mem = FUNC_7(VAR_21, VAR_23);
 if (FUNC_2(VAR_20->sched_mem))
  return FUNC_3(VAR_20->sched_mem);

 VAR_23 = FUNC_19(VAR_19, VAR_8, VAR_24 + 2);
 VAR_20->qmgr_mem = FUNC_7(VAR_21, VAR_23);
 if (FUNC_2(VAR_20->qmgr_mem))
  return FUNC_3(VAR_20->qmgr_mem);

 FUNC_30(&VAR_20->lock);
 FUNC_1(&VAR_20->pending);

 FUNC_20(VAR_19, VAR_20);

 FUNC_23(VAR_21);
 FUNC_28(VAR_21, 100);
 FUNC_29(VAR_21);
 VAR_26 = FUNC_24(VAR_21);
 if (VAR_26 < 0)
  goto err_get_sync;

 VAR_20->queues_rx = VAR_22->queues_rx;
 VAR_20->queues_tx = VAR_22->queues_tx;
 VAR_20->td_queue = VAR_22->td_queue;
 VAR_20->qmgr_num_pend = VAR_22->qmgr_num_pend;
 VAR_20->first_completion_queue = VAR_22->first_completion_queue;

 VAR_26 = FUNC_18(VAR_21->of_node,
       "#dma-channels", &VAR_20->n_chans);
 if (VAR_26)
  goto err_get_n_chans;

 VAR_26 = FUNC_14(VAR_21, VAR_20);
 if (VAR_26)
  goto err_init_cppi;

 VAR_26 = FUNC_4(VAR_21, VAR_20);
 if (VAR_26)
  goto err_chans;

 VAR_25 = FUNC_15(VAR_21->of_node, 0);
 if (!VAR_25) {
  VAR_26 = -VAR_5;
  goto err_chans;
 }

 VAR_26 = FUNC_9(&VAR_19->dev, VAR_25, VAR_17, VAR_9,
   FUNC_6(VAR_21), VAR_20);
 if (VAR_26)
  goto err_chans;
 VAR_20->irq = VAR_25;

 VAR_26 = FUNC_10(&VAR_20->ddev);
 if (VAR_26)
  goto err_chans;

 VAR_26 = FUNC_16(VAR_21->of_node,
   VAR_16, &VAR_10);
 if (VAR_26)
  goto err_of;

 FUNC_25(VAR_21);
 FUNC_26(VAR_21);

 return 0;
err_of:
 FUNC_11(&VAR_20->ddev);
err_chans:
 FUNC_5(VAR_21, VAR_20);
err_init_cppi:
 FUNC_22(VAR_21);
err_get_n_chans:
err_get_sync:
 FUNC_27(VAR_21);
 FUNC_21(VAR_21);
 return VAR_26;
}
