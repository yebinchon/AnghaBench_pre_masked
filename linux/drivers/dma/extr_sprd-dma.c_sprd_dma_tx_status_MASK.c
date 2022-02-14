
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct virt_dma_desc {int dummy; } ;
struct TYPE_4__ {scalar_t__ cookie; } ;
struct TYPE_5__ {TYPE_1__ tx; } ;
struct sprd_dma_chn_hw {scalar_t__ trsc_len; scalar_t__ blk_len; scalar_t__ frg_len; } ;
struct sprd_dma_desc {scalar_t__ dir; TYPE_2__ vd; struct sprd_dma_chn_hw chn_hw; } ;
struct TYPE_6__ {int lock; } ;
struct sprd_dma_chn {TYPE_3__ vc; struct sprd_dma_desc* cur_desc; } ;
struct dma_tx_state {int dummy; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef scalar_t__ dma_cookie_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dma_chan*,scalar_t__,struct dma_tx_state*) ;
 int FUNC_1 (struct dma_tx_state*,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (struct sprd_dma_chn*) ;
 scalar_t__ FUNC_5 (struct sprd_dma_chn*) ;
 struct sprd_dma_chn* FUNC_6 (struct dma_chan*) ;
 struct sprd_dma_desc* FUNC_7 (struct virt_dma_desc*) ;
 struct virt_dma_desc* FUNC_8 (TYPE_3__*,scalar_t__) ;

__attribute__((used)) static enum dma_status FUNC_9(struct dma_chan *VAR_2,
       dma_cookie_t VAR_3,
       struct dma_tx_state *VAR_4)
{
 struct sprd_dma_chn *VAR_5 = FUNC_6(VAR_2);
 struct virt_dma_desc *VAR_6;
 unsigned long VAR_7;
 enum dma_status VAR_8;
 u32 VAR_9;

 VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (VAR_8 == VAR_0 || !VAR_4)
  return VAR_8;

 FUNC_2(&VAR_5->vc.lock, VAR_7);
 VAR_6 = FUNC_8(&VAR_5->vc, VAR_3);
 if (VAR_6) {
  struct sprd_dma_desc *VAR_10 = FUNC_7(VAR_6);
  struct sprd_dma_chn_hw *VAR_11 = &VAR_10->chn_hw;

  if (VAR_11->trsc_len > 0)
   VAR_9 = VAR_11->trsc_len;
  else if (VAR_11->blk_len > 0)
   VAR_9 = VAR_11->blk_len;
  else if (VAR_11->frg_len > 0)
   VAR_9 = VAR_11->frg_len;
  else
   VAR_9 = 0;
 } else if (VAR_5->cur_desc && VAR_5->cur_desc->vd.tx.cookie == VAR_3) {
  struct sprd_dma_desc *VAR_12 = VAR_5->cur_desc;

  if (VAR_12->dir == VAR_1)
   VAR_9 = FUNC_4(VAR_5);
  else
   VAR_9 = FUNC_5(VAR_5);
 } else {
  VAR_9 = 0;
 }
 FUNC_3(&VAR_5->vc.lock, VAR_7);

 FUNC_1(VAR_4, VAR_9);
 return VAR_8;
}
