
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct virt_dma_desc {int tx; } ;
struct TYPE_7__ {int lock; } ;
struct edma_chan {TYPE_2__ vchan; TYPE_5__* edesc; } ;
struct dma_tx_state {int residue; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef scalar_t__ dma_cookie_t ;
struct TYPE_6__ {scalar_t__ cookie; } ;
struct TYPE_8__ {TYPE_1__ tx; } ;
struct TYPE_10__ {TYPE_3__ vdesc; scalar_t__ polled; } ;
struct TYPE_9__ {int residue; } ;


 int VAR_0 ;
 int FUNC_0 (struct dma_chan*,scalar_t__,struct dma_tx_state*) ;
 int FUNC_1 (struct edma_chan*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (struct edma_chan*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct edma_chan* FUNC_6 (struct dma_chan*) ;
 TYPE_4__* FUNC_7 (int *) ;
 int FUNC_8 (TYPE_3__*) ;
 struct virt_dma_desc* FUNC_9 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static enum dma_status FUNC_10(struct dma_chan *VAR_1,
          dma_cookie_t VAR_2,
          struct dma_tx_state *VAR_3)
{
 struct edma_chan *VAR_4 = FUNC_6(VAR_1);
 struct dma_tx_state VAR_5;
 enum dma_status VAR_6;
 unsigned long VAR_7;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3);

 if (VAR_6 == VAR_0)
  return VAR_6;


 if (!VAR_3)
  VAR_3 = &VAR_5;

 FUNC_4(&VAR_4->vchan.lock, VAR_7);
 if (VAR_4->edesc && VAR_4->edesc->vdesc.tx.cookie == VAR_2) {
  VAR_3->residue = FUNC_2(VAR_4->edesc);
 } else {
  struct virt_dma_desc *VAR_8 = FUNC_9(&VAR_4->vchan,
             VAR_2);

  if (VAR_8)
   VAR_3->residue = FUNC_7(&VAR_8->tx)->residue;
  else
   VAR_3->residue = 0;
 }





 if (VAR_6 != VAR_0 && !VAR_3->residue &&
     VAR_4->edesc && VAR_4->edesc->polled &&
     VAR_4->edesc->vdesc.tx.cookie == VAR_2) {
  FUNC_3(VAR_4);
  FUNC_8(&VAR_4->edesc->vdesc);
  VAR_4->edesc = ((void*)0);
  FUNC_1(VAR_4);
  VAR_6 = VAR_0;
 }

 FUNC_5(&VAR_4->vchan.lock, VAR_7);

 return VAR_6;
}
