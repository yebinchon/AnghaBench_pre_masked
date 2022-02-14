
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_chan {int device; } ;
struct at_dma {int dma_desc_pool; } ;
struct TYPE_2__ {int phys; int tx_submit; int flags; } ;
struct at_desc {TYPE_1__ txd; int tx_list; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,struct dma_chan*) ;
 struct at_desc* FUNC_2 (int ,int ,int *) ;
 struct at_dma* FUNC_3 (int ) ;

__attribute__((used)) static struct at_desc *FUNC_4(struct dma_chan *VAR_2,
         gfp_t VAR_3)
{
 struct at_desc *VAR_4 = ((void*)0);
 struct at_dma *VAR_5 = FUNC_3(VAR_2->device);
 dma_addr_t VAR_6;

 VAR_4 = FUNC_2(VAR_5->dma_desc_pool, VAR_3, &VAR_6);
 if (VAR_4) {
  FUNC_0(&VAR_4->tx_list);
  FUNC_1(&VAR_4->txd, VAR_2);

  VAR_4->txd.flags = VAR_0;
  VAR_4->txd.tx_submit = VAR_1;
  VAR_4->txd.phys = VAR_6;
 }

 return VAR_4;
}
