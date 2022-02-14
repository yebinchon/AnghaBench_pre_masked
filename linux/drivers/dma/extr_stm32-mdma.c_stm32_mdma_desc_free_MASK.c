
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int chan; } ;
struct virt_dma_desc {TYPE_1__ tx; } ;
struct stm32_mdma_desc {int count; TYPE_2__* node; } ;
struct stm32_mdma_chan {int desc_pool; } ;
struct TYPE_4__ {int hwdesc_phys; int hwdesc; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct stm32_mdma_desc*) ;
 struct stm32_mdma_chan* FUNC_2 (int ) ;
 struct stm32_mdma_desc* FUNC_3 (struct virt_dma_desc*) ;

__attribute__((used)) static void FUNC_4(struct virt_dma_desc *VAR_0)
{
 struct stm32_mdma_desc *VAR_1 = FUNC_3(VAR_0);
 struct stm32_mdma_chan *VAR_2 = FUNC_2(VAR_0->tx.chan);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->count; VAR_3++)
  FUNC_0(VAR_2->desc_pool, VAR_1->node[VAR_3].hwdesc,
         VAR_1->node[VAR_3].hwdesc_phys);
 FUNC_1(VAR_1);
}
