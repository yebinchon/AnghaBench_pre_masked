
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_chan {int device; } ;
struct TYPE_2__ {int phys; int tx_submit; } ;
struct at_xdmac_desc {TYPE_1__ tx_dma_desc; int descs_list; } ;
struct at_xdmac {int at_xdmac_desc_pool; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,struct dma_chan*) ;
 struct at_xdmac_desc* FUNC_2 (int ,int ,int *) ;
 struct at_xdmac* FUNC_3 (int ) ;

__attribute__((used)) static struct at_xdmac_desc *FUNC_4(struct dma_chan *VAR_1,
       gfp_t VAR_2)
{
 struct at_xdmac_desc *VAR_3;
 struct at_xdmac *VAR_4 = FUNC_3(VAR_1->device);
 dma_addr_t VAR_5;

 VAR_3 = FUNC_2(VAR_4->at_xdmac_desc_pool, VAR_2, &VAR_5);
 if (VAR_3) {
  FUNC_0(&VAR_3->descs_list);
  FUNC_1(&VAR_3->tx_dma_desc, VAR_1);
  VAR_3->tx_dma_desc.tx_submit = VAR_0;
  VAR_3->tx_dma_desc.phys = VAR_5;
 }

 return VAR_3;
}
