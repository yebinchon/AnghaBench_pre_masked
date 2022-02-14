
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dw_axi_dma {int desc_pool; } ;
struct TYPE_4__ {int phys; } ;
struct TYPE_5__ {TYPE_1__ tx; } ;
struct axi_dma_desc {struct axi_dma_chan* chan; TYPE_2__ vd; int xfer_list; } ;
struct axi_dma_chan {int descs_allocated; TYPE_3__* chip; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {struct dw_axi_dma* dw; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct axi_dma_chan*) ;
 int FUNC_3 (struct axi_dma_chan*) ;
 int FUNC_4 (int ,char*,int ) ;
 struct axi_dma_desc* FUNC_5 (int ,int ,int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static struct axi_dma_desc *FUNC_7(struct axi_dma_chan *VAR_1)
{
 struct dw_axi_dma *VAR_2 = VAR_1->chip->dw;
 struct axi_dma_desc *VAR_3;
 dma_addr_t VAR_4;

 VAR_3 = FUNC_5(VAR_2->desc_pool, VAR_0, &VAR_4);
 if (FUNC_6(!VAR_3)) {
  FUNC_4(FUNC_3(VAR_1), "%s: not enough descriptors available\n",
   FUNC_2(VAR_1));
  return ((void*)0);
 }

 FUNC_1(&VAR_1->descs_allocated);
 FUNC_0(&VAR_3->xfer_list);
 VAR_3->vd.tx.phys = VAR_4;
 VAR_3->chan = VAR_1;

 return VAR_3;
}
