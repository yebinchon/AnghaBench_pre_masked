
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct virt_dma_desc {int tx; } ;
struct sdma_desc {int num_bd; int buf_ptail; int period_len; scalar_t__ chn_real_count; scalar_t__ chn_count; } ;
struct TYPE_8__ {int lock; } ;
struct sdma_channel {int flags; int status; TYPE_4__ vc; TYPE_3__* desc; } ;
struct dma_tx_state {int dummy; } ;
struct dma_chan {int cookie; int completed_cookie; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef scalar_t__ dma_cookie_t ;
struct TYPE_5__ {scalar_t__ cookie; } ;
struct TYPE_6__ {TYPE_1__ tx; } ;
struct TYPE_7__ {scalar_t__ chn_real_count; scalar_t__ chn_count; TYPE_2__ vd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dma_chan*,scalar_t__,struct dma_tx_state*) ;
 int FUNC_1 (struct dma_tx_state*,int ,int ,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct sdma_channel* FUNC_4 (struct dma_chan*) ;
 struct sdma_desc* FUNC_5 (int *) ;
 struct virt_dma_desc* FUNC_6 (TYPE_4__*,scalar_t__) ;

__attribute__((used)) static enum dma_status FUNC_7(struct dma_chan *VAR_2,
          dma_cookie_t VAR_3,
          struct dma_tx_state *VAR_4)
{
 struct sdma_channel *VAR_5 = FUNC_4(VAR_2);
 struct sdma_desc *VAR_6;
 u32 VAR_7;
 struct virt_dma_desc *VAR_8;
 enum dma_status VAR_9;
 unsigned long VAR_10;

 VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (VAR_9 == VAR_0 || !VAR_4)
  return VAR_9;

 FUNC_2(&VAR_5->vc.lock, VAR_10);
 VAR_8 = FUNC_6(&VAR_5->vc, VAR_3);
 if (VAR_8) {
  VAR_6 = FUNC_5(&VAR_8->tx);
  if (VAR_5->flags & VAR_1)
   VAR_7 = (VAR_6->num_bd - VAR_6->buf_ptail) *
    VAR_6->period_len - VAR_6->chn_real_count;
  else
   VAR_7 = VAR_6->chn_count - VAR_6->chn_real_count;
 } else if (VAR_5->desc && VAR_5->desc->vd.tx.cookie == VAR_3) {
  VAR_7 = VAR_5->desc->chn_count - VAR_5->desc->chn_real_count;
 } else {
  VAR_7 = 0;
 }
 FUNC_3(&VAR_5->vc.lock, VAR_10);

 FUNC_1(VAR_4, VAR_2->completed_cookie, VAR_2->cookie,
    VAR_7);

 return VAR_5->status;
}
