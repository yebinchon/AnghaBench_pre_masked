
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_device {int device_terminate_all; int device_resume; int device_pause; int device_tx_status; int device_issue_pending; int device_prep_dma_interrupt; int device_prep_dma_memcpy; int device_free_chan_resources; int channels; int cap_mask; int residue_granularity; int directions; void* dst_addr_widths; void* src_addr_widths; int dev; } ;
struct dma_chan {int device_node; struct dma_device* device; } ;
struct ccp_dma_desc {int dummy; } ;
struct ccp_dma_cmd {int dummy; } ;
struct ccp_dma_chan {int cleanup_tasklet; int complete; int active; int pending; int created; int lock; struct ccp_device* ccp; struct dma_chan dma_chan; } ;
struct ccp_device {unsigned int cmd_q_count; void* dma_cmd_cache; void* dma_desc_cache; struct ccp_dma_chan* ccp_dma_chan; int dev; int name; struct dma_device dma_dev; } ;


 void* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (struct ccp_device*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 char* FUNC_3 (int ,int ,char*,int ) ;
 struct ccp_dma_chan* FUNC_4 (int ,unsigned int,int,int ) ;
 int FUNC_5 (struct dma_device*) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (struct dma_chan*) ;
 int FUNC_8 (int ) ;
 int VAR_17 ;
 void* FUNC_9 (char*,int,int,int ,int *) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ,unsigned long) ;

int FUNC_14(struct ccp_device *VAR_18)
{
 struct ccp_dma_chan *VAR_19;
 struct dma_device *VAR_20 = &VAR_18->dma_dev;
 struct dma_chan *VAR_21;
 char *VAR_22;
 char *VAR_23;
 unsigned int VAR_24;
 int VAR_25;

 if (!VAR_17)
  return 0;

 VAR_18->ccp_dma_chan = FUNC_4(VAR_18->dev, VAR_18->cmd_q_count,
      sizeof(*(VAR_18->ccp_dma_chan)),
      VAR_6);
 if (!VAR_18->ccp_dma_chan)
  return -VAR_5;

 VAR_22 = FUNC_3(VAR_18->dev, VAR_6,
         "%s-dmaengine-cmd-cache",
         VAR_18->name);
 if (!VAR_22)
  return -VAR_5;

 VAR_18->dma_cmd_cache = FUNC_9(VAR_22,
            sizeof(struct ccp_dma_cmd),
            sizeof(void *),
            VAR_7, ((void*)0));
 if (!VAR_18->dma_cmd_cache)
  return -VAR_5;

 VAR_23 = FUNC_3(VAR_18->dev, VAR_6,
          "%s-dmaengine-desc-cache",
          VAR_18->name);
 if (!VAR_23) {
  VAR_25 = -VAR_5;
  goto err_cache;
 }

 VAR_18->dma_desc_cache = FUNC_9(VAR_23,
      sizeof(struct ccp_dma_desc),
      sizeof(void *),
      VAR_7, ((void*)0));
 if (!VAR_18->dma_desc_cache) {
  VAR_25 = -VAR_5;
  goto err_cache;
 }

 VAR_20->dev = VAR_18->dev;
 VAR_20->src_addr_widths = FUNC_0(FUNC_8(VAR_18->dev));
 VAR_20->dst_addr_widths = FUNC_0(FUNC_8(VAR_18->dev));
 VAR_20->directions = VAR_2;
 VAR_20->residue_granularity = VAR_4;
 FUNC_6(VAR_1, VAR_20->cap_mask);
 FUNC_6(VAR_0, VAR_20->cap_mask);







 if (FUNC_2(VAR_18) == VAR_3)
  FUNC_6(VAR_3, VAR_20->cap_mask);

 FUNC_1(&VAR_20->channels);
 for (VAR_24 = 0; VAR_24 < VAR_18->cmd_q_count; VAR_24++) {
  VAR_19 = VAR_18->ccp_dma_chan + VAR_24;
  VAR_21 = &VAR_19->dma_chan;

  VAR_19->ccp = VAR_18;

  FUNC_12(&VAR_19->lock);
  FUNC_1(&VAR_19->created);
  FUNC_1(&VAR_19->pending);
  FUNC_1(&VAR_19->active);
  FUNC_1(&VAR_19->complete);

  FUNC_13(&VAR_19->cleanup_tasklet, VAR_8,
        (unsigned long)VAR_19);

  VAR_21->device = VAR_20;
  FUNC_7(VAR_21);

  FUNC_11(&VAR_21->device_node, &VAR_20->channels);
 }

 VAR_20->device_free_chan_resources = VAR_9;
 VAR_20->device_prep_dma_memcpy = VAR_13;
 VAR_20->device_prep_dma_interrupt = VAR_12;
 VAR_20->device_issue_pending = VAR_10;
 VAR_20->device_tx_status = VAR_16;
 VAR_20->device_pause = VAR_11;
 VAR_20->device_resume = VAR_14;
 VAR_20->device_terminate_all = VAR_15;

 VAR_25 = FUNC_5(VAR_20);
 if (VAR_25)
  goto err_reg;

 return 0;

err_reg:
 FUNC_10(VAR_18->dma_desc_cache);

err_cache:
 FUNC_10(VAR_18->dma_cmd_cache);

 return VAR_25;
}
