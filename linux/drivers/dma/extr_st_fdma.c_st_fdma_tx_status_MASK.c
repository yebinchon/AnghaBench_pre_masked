
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct virt_dma_desc {int dummy; } ;
struct TYPE_8__ {int lock; } ;
struct st_fdma_chan {TYPE_4__ vchan; TYPE_3__* fdesc; } ;
struct dma_tx_state {void* residue; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef scalar_t__ dma_cookie_t ;
struct TYPE_5__ {scalar_t__ cookie; } ;
struct TYPE_6__ {TYPE_1__ tx; } ;
struct TYPE_7__ {TYPE_2__ vdesc; } ;


 int VAR_0 ;
 int FUNC_0 (struct dma_chan*,scalar_t__,struct dma_tx_state*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 void* FUNC_3 (struct st_fdma_chan*,struct virt_dma_desc*,int) ;
 struct st_fdma_chan* FUNC_4 (struct dma_chan*) ;
 struct virt_dma_desc* FUNC_5 (TYPE_4__*,scalar_t__) ;

__attribute__((used)) static enum dma_status FUNC_6(struct dma_chan *VAR_1,
      dma_cookie_t VAR_2,
      struct dma_tx_state *VAR_3)
{
 struct st_fdma_chan *VAR_4 = FUNC_4(VAR_1);
 struct virt_dma_desc *VAR_5;
 enum dma_status VAR_6;
 unsigned long VAR_7;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_6 == VAR_0 || !VAR_3)
  return VAR_6;

 FUNC_1(&VAR_4->vchan.lock, VAR_7);
 VAR_5 = FUNC_5(&VAR_4->vchan, VAR_2);
 if (VAR_4->fdesc && VAR_2 == VAR_4->fdesc->vdesc.tx.cookie)
  VAR_3->residue = FUNC_3(VAR_4, VAR_5, 1);
 else if (VAR_5)
  VAR_3->residue = FUNC_3(VAR_4, VAR_5, 0);
 else
  VAR_3->residue = 0;

 FUNC_2(&VAR_4->vchan.lock, VAR_7);

 return VAR_6;
}
