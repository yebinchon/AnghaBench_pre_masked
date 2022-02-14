
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virt_dma_desc {int dummy; } ;
struct pxad_desc_sw {int nb_desc; TYPE_1__** hw_desc; int first; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int ddadr; } ;


 struct pxad_desc_sw* FUNC_0 (struct virt_dma_desc*) ;

__attribute__((used)) static void FUNC_1(struct virt_dma_desc *VAR_0,
    struct virt_dma_desc *VAR_1)
{
 struct pxad_desc_sw *VAR_2 = FUNC_0(VAR_0);
 struct pxad_desc_sw *VAR_3 = FUNC_0(VAR_1);
 dma_addr_t VAR_4;

 VAR_4 = VAR_3->first;
 VAR_2->hw_desc[VAR_2->nb_desc - 1]->ddadr = VAR_4;
}
