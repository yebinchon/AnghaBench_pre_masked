
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int phys; int flags; int tx_submit; } ;
struct pch_dma_desc {TYPE_1__ txd; int tx_list; } ;
struct pch_dma {int pool; } ;
struct dma_chan {int device; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,struct dma_chan*) ;
 struct pch_dma_desc* FUNC_2 (int ,int ,int *) ;
 int VAR_1 ;
 struct pch_dma* FUNC_3 (int ) ;

__attribute__((used)) static struct pch_dma_desc *FUNC_4(struct dma_chan *VAR_2, gfp_t VAR_3)
{
 struct pch_dma_desc *VAR_4 = ((void*)0);
 struct pch_dma *VAR_5 = FUNC_3(VAR_2->device);
 dma_addr_t VAR_6;

 VAR_4 = FUNC_2(VAR_5->pool, VAR_3, &VAR_6);
 if (VAR_4) {
  FUNC_0(&VAR_4->tx_list);
  FUNC_1(&VAR_4->txd, VAR_2);
  VAR_4->txd.tx_submit = VAR_1;
  VAR_4->txd.flags = VAR_0;
  VAR_4->txd.phys = VAR_6;
 }

 return VAR_4;
}
