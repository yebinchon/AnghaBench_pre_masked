
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nouveau_fence {int dummy; } ;
struct nouveau_drm {TYPE_3__* dev; TYPE_2__* dmem; } ;
struct migrate_vma {unsigned long start; unsigned long end; scalar_t__* dst; int * src; } ;
typedef int dma_addr_t ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int chan; } ;
struct TYPE_5__ {TYPE_1__ migrate; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__,int ) ;
 int FUNC_1 (struct migrate_vma*) ;
 int FUNC_2 (struct migrate_vma*) ;
 int FUNC_3 (struct nouveau_fence**) ;
 scalar_t__ FUNC_4 (struct nouveau_drm*,int ,int *) ;
 int FUNC_5 (int ,int,struct nouveau_fence**) ;

__attribute__((used)) static void FUNC_6(struct nouveau_drm *VAR_2,
  struct migrate_vma *VAR_3, dma_addr_t *VAR_4)
{
 struct nouveau_fence *VAR_5;
 unsigned long VAR_6 = VAR_3->start, VAR_7 = 0, VAR_8;

 for (VAR_8 = 0; VAR_6 < VAR_3->end; VAR_8++) {
  VAR_3->dst[VAR_8] = FUNC_4(VAR_2, VAR_3->src[VAR_8],
    VAR_4 + VAR_7);
  if (VAR_3->dst[VAR_8])
   VAR_7++;
  VAR_6 += VAR_1;
 }

 FUNC_5(VAR_2->dmem->migrate.chan, 0, &VAR_5);
 FUNC_2(VAR_3);
 FUNC_3(&VAR_5);

 while (VAR_7--) {
  FUNC_0(VAR_2->dev->dev, VAR_4[VAR_7], VAR_1,
    VAR_0);
 }




 FUNC_1(VAR_3);
}
