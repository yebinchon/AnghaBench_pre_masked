
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int device; } ;
struct dw_dma_chan {TYPE_2__ chan; int descs_allocated; } ;
struct dw_dma {int desc_pool; } ;
struct TYPE_3__ {int phys; int flags; int tx_submit; } ;
struct dw_desc {TYPE_1__ txd; int tx_list; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 struct dw_desc* FUNC_2 (int ,int ,int *) ;
 int VAR_2 ;
 struct dw_dma* FUNC_3 (int ) ;

__attribute__((used)) static struct dw_desc *FUNC_4(struct dw_dma_chan *VAR_3)
{
 struct dw_dma *VAR_4 = FUNC_3(VAR_3->chan.device);
 struct dw_desc *VAR_5;
 dma_addr_t VAR_6;

 VAR_5 = FUNC_2(VAR_4->desc_pool, VAR_1, &VAR_6);
 if (!VAR_5)
  return ((void*)0);

 VAR_3->descs_allocated++;
 FUNC_0(&VAR_5->tx_list);
 FUNC_1(&VAR_5->txd, &VAR_3->chan);
 VAR_5->txd.tx_submit = VAR_2;
 VAR_5->txd.flags = VAR_0;
 VAR_5->txd.phys = VAR_6;
 return VAR_5;
}
