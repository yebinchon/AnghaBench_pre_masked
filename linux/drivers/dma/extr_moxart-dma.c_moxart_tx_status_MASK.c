
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct virt_dma_desc {int tx; } ;
struct moxart_desc {int dummy; } ;
struct TYPE_8__ {int lock; } ;
struct moxart_chan {scalar_t__ error; TYPE_4__ vc; TYPE_3__* desc; } ;
struct dma_tx_state {int residue; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef scalar_t__ dma_cookie_t ;
struct TYPE_5__ {scalar_t__ cookie; } ;
struct TYPE_6__ {TYPE_1__ tx; } ;
struct TYPE_7__ {TYPE_2__ vd; } ;


 int VAR_0 ;
 int FUNC_0 (struct dma_chan*,scalar_t__,struct dma_tx_state*) ;
 int FUNC_1 (struct moxart_desc*,int ) ;
 int FUNC_2 (struct moxart_chan*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct moxart_chan* FUNC_5 (struct dma_chan*) ;
 struct moxart_desc* FUNC_6 (int *) ;
 struct virt_dma_desc* FUNC_7 (TYPE_4__*,scalar_t__) ;

__attribute__((used)) static enum dma_status FUNC_8(struct dma_chan *VAR_1,
     dma_cookie_t VAR_2,
     struct dma_tx_state *VAR_3)
{
 struct moxart_chan *VAR_4 = FUNC_5(VAR_1);
 struct virt_dma_desc *VAR_5;
 struct moxart_desc *VAR_6;
 enum dma_status VAR_7;
 unsigned long VAR_8;




 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3);

 FUNC_3(&VAR_4->vc.lock, VAR_8);
 VAR_5 = FUNC_7(&VAR_4->vc, VAR_2);
 if (VAR_5) {
  VAR_6 = FUNC_6(&VAR_5->tx);
  VAR_3->residue = FUNC_1(VAR_6, 0);
 } else if (VAR_4->desc && VAR_4->desc->vd.tx.cookie == VAR_2) {
  VAR_3->residue = FUNC_2(VAR_4);
 }
 FUNC_4(&VAR_4->vc.lock, VAR_8);

 if (VAR_4->error)
  return VAR_0;

 return VAR_7;
}
