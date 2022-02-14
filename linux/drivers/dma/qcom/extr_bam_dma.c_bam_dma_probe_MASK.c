
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;


struct resource {int dummy; } ;
struct TYPE_23__ {int of_node; int * dma_parms; } ;
struct platform_device {TYPE_2__ dev; } ;
struct of_device_id {int data; } ;
struct TYPE_24__ {int directions; TYPE_2__* dev; int device_tx_status; int device_issue_pending; int device_terminate_all; int device_resume; int device_pause; int device_config; int device_prep_slave_sg; int device_free_chan_resources; int device_alloc_chan_resources; void* dst_addr_widths; void* src_addr_widths; int residue_granularity; int cap_mask; int channels; } ;
struct bam_device {scalar_t__ irq; int ee; int num_channels; int num_ees; int * bamclk; int task; TYPE_15__* channels; TYPE_9__ common; scalar_t__ controlled_remotely; TYPE_2__* dev; int dma_parms; int * regs; int layout; } ;
struct TYPE_22__ {int task; } ;
struct TYPE_21__ {TYPE_1__ vc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_12 ;
 int FUNC_4 (struct bam_device*,TYPE_15__*,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_5 (struct bam_device*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,char*) ;
 int * FUNC_9 (TYPE_2__*,char*) ;
 int * FUNC_10 (TYPE_2__*,struct resource*) ;
 TYPE_15__* FUNC_11 (TYPE_2__*,int,int,int ) ;
 struct bam_device* FUNC_12 (TYPE_2__*,int,int ) ;
 int FUNC_13 (TYPE_2__*,int,int ,int ,char*,struct bam_device*) ;
 int FUNC_14 (TYPE_9__*) ;
 int FUNC_15 (TYPE_9__*) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (TYPE_2__*,int ) ;
 int VAR_24 ;
 int FUNC_19 (int ,int ,TYPE_9__*) ;
 struct of_device_id* FUNC_20 (int ,int ) ;
 scalar_t__ FUNC_21 (int ,char*) ;
 int FUNC_22 (int ,char*,int*) ;
 scalar_t__ FUNC_23 (struct platform_device*,int ) ;
 struct resource* FUNC_24 (struct platform_device*,int ,int ) ;
 int FUNC_25 (struct platform_device*,struct bam_device*) ;
 int FUNC_26 (TYPE_2__*) ;
 int FUNC_27 (TYPE_2__*) ;
 int FUNC_28 (TYPE_2__*) ;
 int FUNC_29 (TYPE_2__*) ;
 int FUNC_30 (TYPE_2__*) ;
 int FUNC_31 (TYPE_2__*,int ) ;
 int FUNC_32 (TYPE_2__*) ;
 int FUNC_33 (int *,int ,unsigned long) ;
 int FUNC_34 (int *) ;

__attribute__((used)) static int FUNC_35(struct platform_device *VAR_25)
{
 struct bam_device *VAR_26;
 const struct of_device_id *VAR_27;
 struct resource *VAR_28;
 int VAR_29, VAR_30;

 VAR_26 = FUNC_12(&VAR_25->dev, sizeof(*VAR_26), VAR_9);
 if (!VAR_26)
  return -VAR_8;

 VAR_26->dev = &VAR_25->dev;

 VAR_27 = FUNC_20(VAR_18, VAR_25->dev.of_node);
 if (!VAR_27) {
  FUNC_8(&VAR_25->dev, "Unsupported BAM module\n");
  return -VAR_7;
 }

 VAR_26->layout = VAR_27->data;

 VAR_28 = FUNC_24(VAR_25, VAR_10, 0);
 VAR_26->regs = FUNC_10(&VAR_25->dev, VAR_28);
 if (FUNC_2(VAR_26->regs))
  return FUNC_3(VAR_26->regs);

 VAR_26->irq = FUNC_23(VAR_25, 0);
 if (VAR_26->irq < 0)
  return VAR_26->irq;

 VAR_29 = FUNC_22(VAR_25->dev.of_node, "qcom,ee", &VAR_26->ee);
 if (VAR_29) {
  FUNC_8(VAR_26->dev, "Execution environment unspecified\n");
  return VAR_29;
 }

 VAR_26->controlled_remotely = FUNC_21(VAR_25->dev.of_node,
      "qcom,controlled-remotely");

 if (VAR_26->controlled_remotely) {
  VAR_29 = FUNC_22(VAR_25->dev.of_node, "num-channels",
        &VAR_26->num_channels);
  if (VAR_29)
   FUNC_8(VAR_26->dev, "num-channels unspecified in dt\n");

  VAR_29 = FUNC_22(VAR_25->dev.of_node, "qcom,num-ees",
        &VAR_26->num_ees);
  if (VAR_29)
   FUNC_8(VAR_26->dev, "num-ees unspecified in dt\n");
 }

 VAR_26->bamclk = FUNC_9(VAR_26->dev, "bam_clk");
 if (FUNC_2(VAR_26->bamclk)) {
  if (!VAR_26->controlled_remotely)
   return FUNC_3(VAR_26->bamclk);

  VAR_26->bamclk = ((void*)0);
 }

 VAR_29 = FUNC_7(VAR_26->bamclk);
 if (VAR_29) {
  FUNC_8(VAR_26->dev, "failed to prepare/enable clock\n");
  return VAR_29;
 }

 VAR_29 = FUNC_5(VAR_26);
 if (VAR_29)
  goto err_disable_clk;

 FUNC_33(&VAR_26->task, VAR_24, (unsigned long)VAR_26);

 VAR_26->channels = FUNC_11(VAR_26->dev, VAR_26->num_channels,
    sizeof(*VAR_26->channels), VAR_9);

 if (!VAR_26->channels) {
  VAR_29 = -VAR_8;
  goto err_tasklet_kill;
 }


 FUNC_1(&VAR_26->common.channels);

 for (VAR_30 = 0; VAR_30 < VAR_26->num_channels; VAR_30++)
  FUNC_4(VAR_26, &VAR_26->channels[VAR_30], VAR_30);

 VAR_29 = FUNC_13(VAR_26->dev, VAR_26->irq, VAR_13,
   VAR_11, "bam_dma", VAR_26);
 if (VAR_29)
  goto err_bam_channel_exit;


 VAR_26->common.dev = VAR_26->dev;
 VAR_26->common.dev->dma_parms = &VAR_26->dma_parms;
 VAR_29 = FUNC_18(VAR_26->common.dev, VAR_1);
 if (VAR_29) {
  FUNC_8(VAR_26->dev, "cannot set maximum segment size\n");
  goto err_bam_channel_exit;
 }

 FUNC_25(VAR_25, VAR_26);


 FUNC_17(VAR_26->common.cap_mask);
 FUNC_16(VAR_5, VAR_26->common.cap_mask);


 VAR_26->common.directions = FUNC_0(VAR_2) | FUNC_0(VAR_3);
 VAR_26->common.residue_granularity = VAR_4;
 VAR_26->common.src_addr_widths = VAR_6;
 VAR_26->common.dst_addr_widths = VAR_6;
 VAR_26->common.device_alloc_chan_resources = VAR_12;
 VAR_26->common.device_free_chan_resources = VAR_16;
 VAR_26->common.device_prep_slave_sg = VAR_20;
 VAR_26->common.device_config = VAR_22;
 VAR_26->common.device_pause = VAR_19;
 VAR_26->common.device_resume = VAR_21;
 VAR_26->common.device_terminate_all = VAR_14;
 VAR_26->common.device_issue_pending = VAR_17;
 VAR_26->common.device_tx_status = VAR_23;
 VAR_26->common.dev = VAR_26->dev;

 VAR_29 = FUNC_14(&VAR_26->common);
 if (VAR_29) {
  FUNC_8(VAR_26->dev, "failed to register dma async device\n");
  goto err_bam_channel_exit;
 }

 VAR_29 = FUNC_19(VAR_25->dev.of_node, VAR_15,
     &VAR_26->common);
 if (VAR_29)
  goto err_unregister_dma;

 if (VAR_26->controlled_remotely) {
  FUNC_26(&VAR_25->dev);
  return 0;
 }

 FUNC_28(&VAR_25->dev);
 FUNC_31(&VAR_25->dev, VAR_0);
 FUNC_32(&VAR_25->dev);
 FUNC_29(&VAR_25->dev);
 FUNC_30(&VAR_25->dev);
 FUNC_27(&VAR_25->dev);

 return 0;

err_unregister_dma:
 FUNC_15(&VAR_26->common);
err_bam_channel_exit:
 for (VAR_30 = 0; VAR_30 < VAR_26->num_channels; VAR_30++)
  FUNC_34(&VAR_26->channels[VAR_30].vc.task);
err_tasklet_kill:
 FUNC_34(&VAR_26->task);
err_disable_clk:
 FUNC_6(VAR_26->bamclk);

 return VAR_29;
}
