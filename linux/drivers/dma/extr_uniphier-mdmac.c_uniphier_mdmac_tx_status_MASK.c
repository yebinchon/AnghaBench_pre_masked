
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virt_dma_desc {int dummy; } ;
struct virt_dma_chan {int lock; } ;
struct TYPE_3__ {scalar_t__ cookie; } ;
struct TYPE_4__ {TYPE_1__ tx; } ;
struct uniphier_mdmac_desc {int sg_cur; int sg_len; int * sgl; TYPE_2__ vd; } ;
struct uniphier_mdmac_chan {struct uniphier_mdmac_desc* md; scalar_t__ reg_ch_base; } ;
struct dma_tx_state {int residue; } ;
struct dma_chan {int dummy; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;
typedef scalar_t__ dma_cookie_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dma_chan*,scalar_t__,struct dma_tx_state*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct uniphier_mdmac_chan* FUNC_5 (struct virt_dma_chan*) ;
 struct uniphier_mdmac_desc* FUNC_6 (struct virt_dma_desc*) ;
 struct virt_dma_chan* FUNC_7 (struct dma_chan*) ;
 struct virt_dma_desc* FUNC_8 (struct virt_dma_chan*,scalar_t__) ;

__attribute__((used)) static enum dma_status FUNC_9(struct dma_chan *VAR_2,
      dma_cookie_t VAR_3,
      struct dma_tx_state *VAR_4)
{
 struct virt_dma_chan *VAR_5;
 struct virt_dma_desc *VAR_6;
 struct uniphier_mdmac_chan *VAR_7;
 struct uniphier_mdmac_desc *VAR_8 = ((void*)0);
 enum dma_status VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_4);

 if (VAR_9 == VAR_0 || !VAR_4)
  return VAR_9;

 VAR_5 = FUNC_7(VAR_2);

 FUNC_3(&VAR_5->lock, VAR_10);

 VAR_7 = FUNC_5(VAR_5);

 if (VAR_7->md && VAR_7->md->vd.tx.cookie == VAR_3) {

  VAR_4->residue = FUNC_1(VAR_7->reg_ch_base +
      VAR_1);
  VAR_8 = VAR_7->md;
 }

 if (!VAR_8) {
  VAR_6 = FUNC_8(VAR_5, VAR_3);
  if (VAR_6)
   VAR_8 = FUNC_6(VAR_6);
 }

 if (VAR_8) {

  for (VAR_11 = VAR_8->sg_cur; VAR_11 < VAR_8->sg_len; VAR_11++)
   VAR_4->residue += FUNC_2(&VAR_8->sgl[VAR_11]);
 }

 FUNC_4(&VAR_5->lock, VAR_10);

 return VAR_9;
}
