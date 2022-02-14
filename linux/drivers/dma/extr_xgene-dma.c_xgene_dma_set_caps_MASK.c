
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_dma_chan {scalar_t__ id; int dev; int pdma; } ;
struct dma_device {void* pq_align; void* max_pq; int device_prep_dma_pq; int cap_mask; void* xor_align; void* max_xor; int device_prep_dma_xor; int device_tx_status; int device_issue_pending; int device_free_chan_resources; int device_alloc_chan_resources; int dev; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_4(struct xgene_dma_chan *VAR_12,
          struct dma_device *VAR_13)
{

 FUNC_1(VAR_13->cap_mask);
 if ((VAR_12->id == VAR_4) &&
     FUNC_3(VAR_12->pdma)) {
  FUNC_0(VAR_1, VAR_13->cap_mask);
  FUNC_0(VAR_2, VAR_13->cap_mask);
 } else if ((VAR_12->id == VAR_5) &&
     !FUNC_3(VAR_12->pdma)) {
  FUNC_0(VAR_2, VAR_13->cap_mask);
 }


 VAR_13->dev = VAR_12->dev;
 VAR_13->device_alloc_chan_resources = VAR_6;
 VAR_13->device_free_chan_resources = VAR_7;
 VAR_13->device_issue_pending = VAR_8;
 VAR_13->device_tx_status = VAR_11;

 if (FUNC_2(VAR_2, VAR_13->cap_mask)) {
  VAR_13->device_prep_dma_xor = VAR_10;
  VAR_13->max_xor = VAR_3;
  VAR_13->xor_align = VAR_0;
 }

 if (FUNC_2(VAR_1, VAR_13->cap_mask)) {
  VAR_13->device_prep_dma_pq = VAR_9;
  VAR_13->max_pq = VAR_3;
  VAR_13->pq_align = VAR_0;
 }
}
