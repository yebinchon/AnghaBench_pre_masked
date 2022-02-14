
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int num_pages; } ;
struct ttm_dma_tt {int * dma_address; TYPE_3__ ttm; } ;
struct nouveau_drm {TYPE_1__* dev; } ;
struct TYPE_5__ {scalar_t__ ttm; int bdev; } ;
struct nouveau_bo {scalar_t__ force_coherent; TYPE_2__ bo; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct nouveau_drm* FUNC_1 (int ) ;

void
FUNC_2(struct nouveau_bo *VAR_2)
{
 struct nouveau_drm *VAR_3 = FUNC_1(VAR_2->bo.bdev);
 struct ttm_dma_tt *VAR_4 = (struct ttm_dma_tt *)VAR_2->bo.ttm;
 int VAR_5;

 if (!VAR_4)
  return;


 if (VAR_2->force_coherent)
  return;

 for (VAR_5 = 0; VAR_5 < VAR_4->ttm.num_pages; VAR_5++)
  FUNC_0(VAR_3->dev->dev, VAR_4->dma_address[VAR_5],
     VAR_1, VAR_0);
}
