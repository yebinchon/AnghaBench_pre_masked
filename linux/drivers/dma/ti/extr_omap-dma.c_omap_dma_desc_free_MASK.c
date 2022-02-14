
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* chan; } ;
struct virt_dma_desc {TYPE_3__ tx; } ;
struct omap_dmadev {int desc_pool; } ;
struct omap_desc {int sglen; TYPE_1__* sg; scalar_t__ using_ll; } ;
struct TYPE_5__ {int device; } ;
struct TYPE_4__ {int t2_desc_paddr; scalar_t__ t2_desc; } ;


 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (struct omap_desc*) ;
 struct omap_desc* FUNC_2 (TYPE_3__*) ;
 struct omap_dmadev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct virt_dma_desc *VAR_0)
{
 struct omap_desc *VAR_1 = FUNC_2(&VAR_0->tx);

 if (VAR_1->using_ll) {
  struct omap_dmadev *VAR_2 = FUNC_3(VAR_0->tx.chan->device);
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_1->sglen; VAR_3++) {
   if (VAR_1->sg[VAR_3].t2_desc)
    FUNC_0(VAR_2->desc_pool, VAR_1->sg[VAR_3].t2_desc,
           VAR_1->sg[VAR_3].t2_desc_paddr);
  }
 }

 FUNC_1(VAR_1);
}
