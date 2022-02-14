
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virt_dma_desc {int dummy; } ;
struct pxad_desc_sw {int nb_desc; TYPE_1__** hw_desc; int desc_pool; int first; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int ddadr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 int FUNC_2 (struct pxad_desc_sw*) ;
 struct pxad_desc_sw* FUNC_3 (struct virt_dma_desc*) ;

__attribute__((used)) static void FUNC_4(struct virt_dma_desc *VAR_0)
{
 int VAR_1;
 dma_addr_t VAR_2;
 struct pxad_desc_sw *VAR_3 = FUNC_3(VAR_0);

 FUNC_0(VAR_3->nb_desc == 0);
 for (VAR_1 = VAR_3->nb_desc - 1; VAR_1 >= 0; VAR_1--) {
  if (VAR_1 > 0)
   VAR_2 = VAR_3->hw_desc[VAR_1 - 1]->ddadr;
  else
   VAR_2 = VAR_3->first;
  FUNC_1(VAR_3->desc_pool,
         VAR_3->hw_desc[VAR_1], VAR_2);
 }
 VAR_3->nb_desc = 0;
 FUNC_2(VAR_3);
}
