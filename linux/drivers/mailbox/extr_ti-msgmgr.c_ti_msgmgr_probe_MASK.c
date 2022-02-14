
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_queue_inst {int dummy; } ;
typedef struct ti_msgmgr_valid_queue_desc {int proxy_id; scalar_t__ queue_id; } const ti_msgmgr_valid_queue_desc ;
struct mbox_controller {int num_chans; int txdone_irq; int of_xlate; int txpoll_period; scalar_t__ txdone_poll; struct mbox_chan* chans; int * ops; struct device* dev; } ;
struct ti_msgmgr_inst {int num_valid_queues; struct mbox_chan* chans; struct mbox_controller mbox; struct ti_queue_inst* qinsts; void* queue_state_debug_region; void* queue_proxy_region; void* queue_ctrl_region; struct ti_msgmgr_desc const* desc; struct device* dev; } ;
struct ti_msgmgr_desc {int num_valid_queues; int queue_count; int tx_poll_timeout_ms; scalar_t__ tx_polled; struct ti_msgmgr_valid_queue_desc const* valid_queues; scalar_t__ is_sproxy; int ctrl_region_name; int status_region_name; int data_region_name; } ;
struct resource {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {struct ti_msgmgr_desc* data; } ;
struct mbox_chan {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*,int,int) ;
 int FUNC_3 (struct device*,char*,void*,void*) ;
 int FUNC_4 (struct device*,char*,...) ;
 void* FUNC_5 (struct device*,struct resource*) ;
 void* FUNC_6 (struct device*,int,int,int ) ;
 struct ti_msgmgr_inst* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct device*,struct mbox_controller*) ;
 struct of_device_id* FUNC_9 (int ,struct device*) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct ti_msgmgr_inst*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (int,struct device*,struct device_node*,struct ti_msgmgr_inst*,struct ti_msgmgr_desc const*,struct ti_msgmgr_valid_queue_desc const*,struct ti_queue_inst*,struct mbox_chan*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 const struct of_device_id *VAR_10;
 struct device_node *VAR_11;
 struct resource *VAR_12;
 const struct ti_msgmgr_desc *VAR_13;
 struct ti_msgmgr_inst *VAR_14;
 struct ti_queue_inst *VAR_15;
 struct mbox_controller *VAR_16;
 struct mbox_chan *VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20 = -VAR_0;
 const struct ti_msgmgr_valid_queue_desc *VAR_21;

 if (!VAR_9->of_node) {
  FUNC_4(VAR_9, "no OF information\n");
  return -VAR_0;
 }
 VAR_11 = VAR_9->of_node;

 VAR_10 = FUNC_9(VAR_6, VAR_9);
 if (!VAR_10) {
  FUNC_4(VAR_9, "OF data missing\n");
  return -VAR_0;
 }
 VAR_13 = VAR_10->data;

 VAR_14 = FUNC_7(VAR_9, sizeof(*VAR_14), VAR_3);
 if (!VAR_14)
  return -VAR_1;

 VAR_14->dev = VAR_9;
 VAR_14->desc = VAR_13;

 VAR_12 = FUNC_10(VAR_8, VAR_4,
        VAR_13->data_region_name);
 VAR_14->queue_proxy_region = FUNC_5(VAR_9, VAR_12);
 if (FUNC_0(VAR_14->queue_proxy_region))
  return FUNC_1(VAR_14->queue_proxy_region);

 VAR_12 = FUNC_10(VAR_8, VAR_4,
        VAR_13->status_region_name);
 VAR_14->queue_state_debug_region = FUNC_5(VAR_9, VAR_12);
 if (FUNC_0(VAR_14->queue_state_debug_region))
  return FUNC_1(VAR_14->queue_state_debug_region);

 if (VAR_13->is_sproxy) {
  VAR_12 = FUNC_10(VAR_8, VAR_4,
         VAR_13->ctrl_region_name);
  VAR_14->queue_ctrl_region = FUNC_5(VAR_9, VAR_12);
  if (FUNC_0(VAR_14->queue_ctrl_region))
   return FUNC_1(VAR_14->queue_ctrl_region);
 }

 FUNC_3(VAR_9, "proxy region=%p, queue_state=%p\n",
  VAR_14->queue_proxy_region, VAR_14->queue_state_debug_region);

 VAR_18 = VAR_13->num_valid_queues;
 if (!VAR_18 || VAR_18 > VAR_13->queue_count) {
  FUNC_2(VAR_9, "Invalid Number of queues %d. Max %d\n",
    VAR_18, VAR_13->queue_count);
  return -VAR_2;
 }
 VAR_14->num_valid_queues = VAR_18;

 VAR_15 = FUNC_6(VAR_9, VAR_18, sizeof(*VAR_15), VAR_3);
 if (!VAR_15)
  return -VAR_1;
 VAR_14->qinsts = VAR_15;

 VAR_17 = FUNC_6(VAR_9, VAR_18, sizeof(*VAR_17), VAR_3);
 if (!VAR_17)
  return -VAR_1;
 VAR_14->chans = VAR_17;

 if (VAR_13->is_sproxy) {
  struct ti_msgmgr_valid_queue_desc VAR_22;


  for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++, VAR_15++, VAR_17++) {
   VAR_22.queue_id = 0;
   VAR_22.proxy_id = VAR_19;
   VAR_20 = FUNC_12(VAR_19, VAR_9, VAR_11, VAR_14,
          VAR_13, &VAR_22, VAR_15,
          VAR_17);
   if (VAR_20)
    return VAR_20;
  }
 } else {

  for (VAR_19 = 0, VAR_21 = VAR_13->valid_queues;
       VAR_19 < VAR_18; VAR_19++, VAR_15++, VAR_17++, VAR_21++) {
   VAR_20 = FUNC_12(VAR_19, VAR_9, VAR_11, VAR_14,
          VAR_13, VAR_21, VAR_15,
          VAR_17);
   if (VAR_20)
    return VAR_20;
  }
 }

 VAR_16 = &VAR_14->mbox;
 VAR_16->dev = VAR_9;
 VAR_16->ops = &VAR_5;
 VAR_16->chans = VAR_14->chans;
 VAR_16->num_chans = VAR_14->num_valid_queues;
 VAR_16->txdone_irq = 0;
 VAR_16->txdone_poll = VAR_13->tx_polled;
 if (VAR_13->tx_polled)
  VAR_16->txpoll_period = VAR_13->tx_poll_timeout_ms;
 VAR_16->of_xlate = VAR_7;

 FUNC_11(VAR_8, VAR_14);
 VAR_20 = FUNC_8(VAR_9, VAR_16);
 if (VAR_20)
  FUNC_4(VAR_9, "Failed to register mbox_controller(%d)\n", VAR_20);

 return VAR_20;
}
