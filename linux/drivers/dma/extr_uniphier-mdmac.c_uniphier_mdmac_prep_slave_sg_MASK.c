
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virt_dma_chan {int dummy; } ;
struct uniphier_mdmac_desc {unsigned int sg_len; int dir; int vd; struct scatterlist* sgl; } ;
struct scatterlist {int dummy; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct uniphier_mdmac_desc* FUNC_1 (int,int ) ;
 struct virt_dma_chan* FUNC_2 (struct dma_chan*) ;
 struct dma_async_tx_descriptor* FUNC_3 (struct virt_dma_chan*,int *,unsigned long) ;

__attribute__((used)) static struct dma_async_tx_descriptor *
FUNC_4(struct dma_chan *VAR_1, struct scatterlist *VAR_2,
        unsigned int VAR_3,
        enum dma_transfer_direction VAR_4,
        unsigned long VAR_5, void *VAR_6)
{
 struct virt_dma_chan *VAR_7 = FUNC_2(VAR_1);
 struct uniphier_mdmac_desc *VAR_8;

 if (!FUNC_0(VAR_4))
  return ((void*)0);

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_0);
 if (!VAR_8)
  return ((void*)0);

 VAR_8->sgl = VAR_2;
 VAR_8->sg_len = VAR_3;
 VAR_8->dir = VAR_4;

 return FUNC_3(VAR_7, &VAR_8->vd, VAR_5);
}
