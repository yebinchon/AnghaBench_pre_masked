
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mxs_dma_engine {scalar_t__ base; } ;
struct mxs_dma_chan {scalar_t__ status; int flags; int desc_count; struct mxs_dma_ccw* ccw; struct mxs_dma_engine* mxs_dma; } ;
struct mxs_dma_ccw {scalar_t__ bufaddr; scalar_t__ xfer_bytes; } ;
struct dma_tx_state {int dummy; } ;
struct dma_chan {int cookie; int completed_cookie; int chan_id; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef int dma_cookie_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct mxs_dma_engine*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct dma_tx_state*,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 struct mxs_dma_chan* FUNC_3 (struct dma_chan*) ;

__attribute__((used)) static enum dma_status FUNC_4(struct dma_chan *VAR_2,
   dma_cookie_t VAR_3, struct dma_tx_state *VAR_4)
{
 struct mxs_dma_chan *VAR_5 = FUNC_3(VAR_2);
 struct mxs_dma_engine *VAR_6 = VAR_5->mxs_dma;
 u32 VAR_7 = 0;

 if (VAR_5->status == VAR_0 &&
   VAR_5->flags & VAR_1) {
  struct mxs_dma_ccw *VAR_8;
  u32 VAR_9;

  VAR_8 = &VAR_5->ccw[VAR_5->desc_count - 1];
  VAR_7 = VAR_8->xfer_bytes + VAR_8->bufaddr;

  VAR_9 = FUNC_2(VAR_6->base +
    FUNC_0(VAR_6, VAR_2->chan_id));
  VAR_7 -= VAR_9;
 }

 FUNC_1(VAR_4, VAR_2->completed_cookie, VAR_2->cookie,
   VAR_7);

 return VAR_5->status;
}
