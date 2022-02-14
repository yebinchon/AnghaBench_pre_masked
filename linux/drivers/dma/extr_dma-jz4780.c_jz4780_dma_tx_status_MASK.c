
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ cookie; } ;
struct virt_dma_desc {TYPE_1__ tx; } ;
struct TYPE_6__ {int lock; } ;
struct jz4780_dma_chan {TYPE_2__ vchan; TYPE_3__* desc; scalar_t__ curr_hwdesc; } ;
struct dma_tx_state {int dummy; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef scalar_t__ dma_cookie_t ;
struct TYPE_7__ {int status; struct virt_dma_desc vdesc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dma_chan*,scalar_t__,struct dma_tx_state*) ;
 int FUNC_1 (struct dma_tx_state*,unsigned long) ;
 unsigned long FUNC_2 (struct jz4780_dma_chan*,TYPE_3__*,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct jz4780_dma_chan* FUNC_5 (struct dma_chan*) ;
 TYPE_3__* FUNC_6 (struct virt_dma_desc*) ;
 struct virt_dma_desc* FUNC_7 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static enum dma_status FUNC_8(struct dma_chan *VAR_4,
 dma_cookie_t VAR_5, struct dma_tx_state *VAR_6)
{
 struct jz4780_dma_chan *VAR_7 = FUNC_5(VAR_4);
 struct virt_dma_desc *VAR_8;
 enum dma_status VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11 = 0;

 VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_6);
 if ((VAR_9 == VAR_0) || (VAR_6 == ((void*)0)))
  return VAR_9;

 FUNC_3(&VAR_7->vchan.lock, VAR_10);

 VAR_8 = FUNC_7(&VAR_7->vchan, VAR_5);
 if (VAR_8) {

  VAR_11 = FUNC_2(VAR_7,
     FUNC_6(VAR_8), 0);
 } else if (VAR_5 == VAR_7->desc->vdesc.tx.cookie) {
  VAR_11 = FUNC_2(VAR_7, VAR_7->desc,
     VAR_7->curr_hwdesc + 1);
 }
 FUNC_1(VAR_6, VAR_11);

 if (VAR_8 && VAR_7->desc && VAR_8 == &VAR_7->desc->vdesc
     && VAR_7->desc->status & (VAR_2 | VAR_3))
  VAR_9 = VAR_1;

 FUNC_4(&VAR_7->vchan.lock, VAR_10);
 return VAR_9;
}
