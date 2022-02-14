
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct virt_dma_desc {int tx; } ;
struct TYPE_4__ {scalar_t__ cookie; } ;
struct TYPE_6__ {TYPE_1__ tx; } ;
struct omap_desc {scalar_t__ dir; TYPE_3__ vd; scalar_t__ polled; } ;
struct TYPE_5__ {int lock; } ;
struct omap_chan {TYPE_2__ vc; scalar_t__ running; scalar_t__ paused; struct omap_desc* desc; } ;
struct dma_tx_state {int residue; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef scalar_t__ dma_cookie_t ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct dma_chan*,scalar_t__,struct dma_tx_state*) ;
 int FUNC_1 (struct omap_chan*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct omap_desc*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct omap_chan*) ;
 scalar_t__ FUNC_5 (struct omap_chan*) ;
 int FUNC_6 (struct omap_chan*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 struct omap_chan* FUNC_9 (struct dma_chan*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_3__*) ;
 struct virt_dma_desc* FUNC_12 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static enum dma_status FUNC_13(struct dma_chan *VAR_8,
 dma_cookie_t VAR_9, struct dma_tx_state *VAR_10)
{
 struct omap_chan *VAR_11 = FUNC_9(VAR_8);
 enum dma_status VAR_12;
 unsigned long VAR_13;
 struct omap_desc *VAR_14 = ((void*)0);

 VAR_12 = FUNC_0(VAR_8, VAR_9, VAR_10);
 if (VAR_12 == VAR_2)
  return VAR_12;

 FUNC_7(&VAR_11->vc.lock, VAR_13);
 if (VAR_11->desc && VAR_11->desc->vd.tx.cookie == VAR_9)
  VAR_14 = VAR_11->desc;

 if (!VAR_10)
  goto out;

 if (VAR_14) {
  dma_addr_t VAR_15;

  if (VAR_14->dir == VAR_5)
   VAR_15 = FUNC_5(VAR_11);
  else if (VAR_14->dir == VAR_3 || VAR_14->dir == VAR_6)
   VAR_15 = FUNC_4(VAR_11);
  else
   VAR_15 = 0;

  VAR_10->residue = FUNC_3(VAR_14, VAR_15);
 } else {
  struct virt_dma_desc *VAR_16 = FUNC_12(&VAR_11->vc, VAR_9);

  if (VAR_16)
   VAR_10->residue = FUNC_2(
      FUNC_10(&VAR_16->tx));
  else
   VAR_10->residue = 0;
 }

out:
 if (VAR_12 == VAR_4 && VAR_11->paused) {
  VAR_12 = VAR_7;
 } else if (VAR_14 && VAR_14->polled && VAR_11->running) {
  uint32_t VAR_17 = FUNC_1(VAR_11, VAR_0);




  if (!(VAR_17 & VAR_1)) {
   VAR_12 = VAR_2;
   FUNC_6(VAR_11);
   FUNC_11(&VAR_14->vd);
  }
 }

 FUNC_8(&VAR_11->vc.lock, VAR_13);

 return VAR_12;
}
