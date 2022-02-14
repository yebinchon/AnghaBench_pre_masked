
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
struct TYPE_6__ {unsigned int tc; } ;
struct tegra_adma_desc {TYPE_1__ ch_regs; } ;
struct TYPE_10__ {int lock; } ;
struct tegra_adma_chan {TYPE_5__ vc; TYPE_4__* desc; } ;
struct dma_tx_state {int dummy; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef scalar_t__ dma_cookie_t ;
struct TYPE_7__ {scalar_t__ cookie; } ;
struct TYPE_8__ {TYPE_2__ tx; } ;
struct TYPE_9__ {TYPE_3__ vd; } ;


 int VAR_0 ;
 int FUNC_0 (struct dma_chan*,scalar_t__,struct dma_tx_state*) ;
 int FUNC_1 (struct dma_tx_state*,unsigned int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 unsigned int FUNC_4 (struct tegra_adma_chan*) ;
 struct tegra_adma_chan* FUNC_5 (struct dma_chan*) ;
 struct tegra_adma_desc* FUNC_6 (int *) ;
 struct virt_dma_desc* FUNC_7 (TYPE_5__*,scalar_t__) ;

__attribute__((used)) static enum dma_status FUNC_8(struct dma_chan *VAR_1,
         dma_cookie_t VAR_2,
         struct dma_tx_state *VAR_3)
{
 struct tegra_adma_chan *VAR_4 = FUNC_5(VAR_1);
 struct tegra_adma_desc *VAR_5;
 struct virt_dma_desc *VAR_6;
 enum dma_status VAR_7;
 unsigned long VAR_8;
 unsigned int VAR_9;

 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_7 == VAR_0 || !VAR_3)
  return VAR_7;

 FUNC_2(&VAR_4->vc.lock, VAR_8);

 VAR_6 = FUNC_7(&VAR_4->vc, VAR_2);
 if (VAR_6) {
  VAR_5 = FUNC_6(&VAR_6->tx);
  VAR_9 = VAR_5->ch_regs.tc;
 } else if (VAR_4->desc && VAR_4->desc->vd.tx.cookie == VAR_2) {
  VAR_9 = FUNC_4(VAR_4);
 } else {
  VAR_9 = 0;
 }

 FUNC_3(&VAR_4->vc.lock, VAR_8);

 FUNC_1(VAR_3, VAR_9);

 return VAR_7;
}
