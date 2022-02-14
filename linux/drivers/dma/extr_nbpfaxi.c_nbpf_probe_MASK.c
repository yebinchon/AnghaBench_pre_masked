
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; int end; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct dma_device {int directions; void* dst_addr_widths; void* src_addr_widths; int device_terminate_all; int device_pause; int device_config; int device_prep_slave_sg; int device_issue_pending; int device_tx_status; int device_prep_dma_memcpy; int device_free_chan_resources; int device_alloc_chan_resources; int cap_mask; int channels; struct device* dev; } ;
struct nbpf_device {int eirq; int clk; struct nbpf_channel* chan; struct nbpf_config const* config; int max_burst_mem_write; int max_burst_mem_read; int base; struct dma_device dma_dev; } ;
struct nbpf_desc_page {int dummy; } ;
struct nbpf_config {int num_channels; } ;
struct nbpf_channel {int irq; } ;
struct device_node {int dummy; } ;


 unsigned int FUNC_0 (int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
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
 int FUNC_3 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_4 (int ) ;
 void* VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int ) ;
 int VAR_15 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct device*,int *) ;
 int FUNC_9 (struct device*,struct resource*) ;
 struct nbpf_device* FUNC_10 (struct device*,int ,int ) ;
 int FUNC_11 (struct device*,int,int ,int ,char*,struct nbpf_device*) ;
 int FUNC_12 (struct dma_device*) ;
 int FUNC_13 (struct dma_device*) ;
 int FUNC_14 (int ,int ) ;
 int VAR_16 ;
 int FUNC_15 (struct nbpf_device*,int) ;
 int VAR_17 ;
 int FUNC_16 (struct nbpf_device*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 struct nbpf_config* FUNC_17 (struct device*) ;
 int FUNC_18 (struct device_node*,int ,struct nbpf_device*) ;
 int FUNC_19 (struct device_node*,char*,int *) ;
 int FUNC_20 (struct platform_device*,char*) ;
 struct resource* FUNC_21 (struct platform_device*,int ,int) ;
 int FUNC_22 (struct platform_device*,struct nbpf_device*) ;
 int FUNC_23 (struct nbpf_device*,int ,int) ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_27)
{
 struct device *VAR_28 = &VAR_27->dev;
 struct device_node *VAR_29 = VAR_28->of_node;
 struct nbpf_device *VAR_30;
 struct dma_device *VAR_31;
 struct resource *VAR_32, *VAR_33;
 const struct nbpf_config *VAR_34;
 int VAR_35;
 int VAR_36, VAR_37, VAR_38, VAR_39;
 int VAR_40[9] ;
 unsigned int VAR_41 = 0;

 FUNC_2(sizeof(struct nbpf_desc_page) > VAR_14);


 if (!VAR_29)
  return -VAR_6;

 VAR_34 = FUNC_17(VAR_28);
 VAR_35 = VAR_34->num_channels;

 VAR_30 = FUNC_10(VAR_28, FUNC_23(VAR_30, VAR_15, VAR_35),
       VAR_9);
 if (!VAR_30)
  return -VAR_7;

 VAR_31 = &VAR_30->dma_dev;
 VAR_31->dev = VAR_28;

 VAR_32 = FUNC_21(VAR_27, VAR_11, 0);
 VAR_30->base = FUNC_9(VAR_28, VAR_32);
 if (FUNC_4(VAR_30->base))
  return FUNC_5(VAR_30->base);

 VAR_30->clk = FUNC_8(VAR_28, ((void*)0));
 if (FUNC_4(VAR_30->clk))
  return FUNC_5(VAR_30->clk);

 FUNC_19(VAR_29, "max-burst-mem-read",
        &VAR_30->max_burst_mem_read);
 FUNC_19(VAR_29, "max-burst-mem-write",
        &VAR_30->max_burst_mem_write);

 VAR_30->config = VAR_34;

 for (VAR_39 = 0; VAR_41 < FUNC_0(VAR_40); VAR_39++) {
  VAR_33 = FUNC_21(VAR_27, VAR_10, VAR_39);
  if (!VAR_33)
   break;

  for (VAR_37 = VAR_33->start; VAR_37 <= VAR_33->end;
       VAR_37++, VAR_41++)
   VAR_40[VAR_41] = VAR_37;
 }







 if (VAR_41 != 1 && VAR_41 != 2 && VAR_41 != VAR_35 + 1)
  return -VAR_8;

 if (VAR_41 == 1) {
  VAR_38 = VAR_40[0];

  for (VAR_39 = 0; VAR_39 <= VAR_35; VAR_39++)
   VAR_30->chan[VAR_39].irq = VAR_40[0];
 } else {
  VAR_38 = FUNC_20(VAR_27, "error");
  if (VAR_38 < 0)
   return VAR_38;

  if (VAR_41 == VAR_35 + 1) {
   struct nbpf_channel *VAR_42;

   for (VAR_39 = 0, VAR_42 = VAR_30->chan; VAR_39 <= VAR_35;
        VAR_39++, VAR_42++) {

    if (VAR_40[VAR_39] == VAR_38)
     VAR_39++;
    VAR_42->irq = VAR_40[VAR_39];
   }

   if (VAR_42 != VAR_30->chan + VAR_35)
    return -VAR_5;
  } else {

   if (VAR_40[0] == VAR_38)
    VAR_37 = VAR_40[1];
   else
    VAR_37 = VAR_40[0];

   for (VAR_39 = 0; VAR_39 <= VAR_35; VAR_39++)
    VAR_30->chan[VAR_39].irq = VAR_37;
  }
 }

 VAR_36 = FUNC_11(VAR_28, VAR_38, VAR_18,
          VAR_12, "dma error", VAR_30);
 if (VAR_36 < 0)
  return VAR_36;
 VAR_30->eirq = VAR_38;

 FUNC_3(&VAR_31->channels);


 for (VAR_39 = 0; VAR_39 < VAR_35; VAR_39++) {
  VAR_36 = FUNC_15(VAR_30, VAR_39);
  if (VAR_36 < 0)
   return VAR_36;
 }

 FUNC_14(VAR_1, VAR_31->cap_mask);
 FUNC_14(VAR_4, VAR_31->cap_mask);
 FUNC_14(VAR_3, VAR_31->cap_mask);


 VAR_31->device_alloc_chan_resources
  = VAR_16;
 VAR_31->device_free_chan_resources = VAR_19;
 VAR_31->device_prep_dma_memcpy = VAR_23;
 VAR_31->device_tx_status = VAR_26;
 VAR_31->device_issue_pending = VAR_20;
 VAR_31->device_prep_slave_sg = VAR_24;
 VAR_31->device_config = VAR_17;
 VAR_31->device_pause = VAR_22;
 VAR_31->device_terminate_all = VAR_25;

 VAR_31->src_addr_widths = VAR_13;
 VAR_31->dst_addr_widths = VAR_13;
 VAR_31->directions = FUNC_1(VAR_0) | FUNC_1(VAR_2);

 FUNC_22(VAR_27, VAR_30);

 VAR_36 = FUNC_7(VAR_30->clk);
 if (VAR_36 < 0)
  return VAR_36;

 FUNC_16(VAR_30);

 VAR_36 = FUNC_12(VAR_31);
 if (VAR_36 < 0)
  goto e_clk_off;

 VAR_36 = FUNC_18(VAR_29, VAR_21, VAR_30);
 if (VAR_36 < 0)
  goto e_dma_dev_unreg;

 return 0;

e_dma_dev_unreg:
 FUNC_13(VAR_31);
e_clk_off:
 FUNC_6(VAR_30->clk);

 return VAR_36;
}
