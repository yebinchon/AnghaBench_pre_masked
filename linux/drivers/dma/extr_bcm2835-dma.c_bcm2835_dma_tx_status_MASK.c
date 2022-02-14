
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct virt_dma_desc {int tx; } ;
struct dma_tx_state {int residue; } ;
struct dma_chan {int dummy; } ;
struct TYPE_4__ {scalar_t__ cookie; } ;
struct TYPE_5__ {TYPE_1__ tx; } ;
struct bcm2835_desc {scalar_t__ dir; TYPE_2__ vd; } ;
struct TYPE_6__ {int lock; } ;
struct bcm2835_chan {TYPE_3__ vc; scalar_t__ chan_base; struct bcm2835_desc* desc; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef scalar_t__ dma_cookie_t ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bcm2835_desc*,scalar_t__) ;
 int FUNC_2 (struct dma_chan*,scalar_t__,struct dma_tx_state*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct bcm2835_chan* FUNC_6 (struct dma_chan*) ;
 int FUNC_7 (int *) ;
 struct virt_dma_desc* FUNC_8 (TYPE_3__*,scalar_t__) ;

__attribute__((used)) static enum dma_status FUNC_9(struct dma_chan *VAR_5,
 dma_cookie_t VAR_6, struct dma_tx_state *VAR_7)
{
 struct bcm2835_chan *VAR_8 = FUNC_6(VAR_5);
 struct virt_dma_desc *VAR_9;
 enum dma_status VAR_10;
 unsigned long VAR_11;

 VAR_10 = FUNC_2(VAR_5, VAR_6, VAR_7);
 if (VAR_10 == VAR_2 || !VAR_7)
  return VAR_10;

 FUNC_4(&VAR_8->vc.lock, VAR_11);
 VAR_9 = FUNC_8(&VAR_8->vc, VAR_6);
 if (VAR_9) {
  VAR_7->residue =
   FUNC_0(FUNC_7(&VAR_9->tx));
 } else if (VAR_8->desc && VAR_8->desc->vd.tx.cookie == VAR_6) {
  struct bcm2835_desc *VAR_12 = VAR_8->desc;
  dma_addr_t VAR_13;

  if (VAR_12->dir == VAR_4)
   VAR_13 = FUNC_3(VAR_8->chan_base + VAR_1);
  else if (VAR_12->dir == VAR_3)
   VAR_13 = FUNC_3(VAR_8->chan_base + VAR_0);
  else
   VAR_13 = 0;

  VAR_7->residue = FUNC_1(VAR_12, VAR_13);
 } else {
  VAR_7->residue = 0;
 }

 FUNC_5(&VAR_8->vc.lock, VAR_11);

 return VAR_10;
}
