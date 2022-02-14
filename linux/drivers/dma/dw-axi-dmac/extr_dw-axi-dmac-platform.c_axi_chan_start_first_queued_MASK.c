
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cookie; } ;
struct virt_dma_desc {TYPE_1__ tx; } ;
struct axi_dma_desc {int dummy; } ;
struct axi_dma_chan {int vc; } ;


 int FUNC_0 (struct axi_dma_chan*,struct axi_dma_desc*) ;
 int FUNC_1 (struct axi_dma_chan*) ;
 int FUNC_2 (struct axi_dma_chan*) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 struct virt_dma_desc* FUNC_4 (int *) ;
 struct axi_dma_desc* FUNC_5 (struct virt_dma_desc*) ;

__attribute__((used)) static void FUNC_6(struct axi_dma_chan *VAR_0)
{
 struct axi_dma_desc *VAR_1;
 struct virt_dma_desc *VAR_2;

 VAR_2 = FUNC_4(&VAR_0->vc);
 if (!VAR_2)
  return;

 VAR_1 = FUNC_5(VAR_2);
 FUNC_3(FUNC_2(VAR_0), "%s: started %u\n", FUNC_1(VAR_0),
  VAR_2->tx.cookie);
 FUNC_0(VAR_0, VAR_1);
}
