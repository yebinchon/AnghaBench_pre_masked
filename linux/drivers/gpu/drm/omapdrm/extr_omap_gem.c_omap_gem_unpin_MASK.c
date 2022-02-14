
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_gem_object {scalar_t__ dma_addr_cnt; int lock; int * block; scalar_t__ dma_addr; } ;
struct drm_gem_object {TYPE_1__* dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct omap_gem_object* FUNC_5 (struct drm_gem_object*) ;

void FUNC_6(struct drm_gem_object *VAR_0)
{
 struct omap_gem_object *VAR_1 = FUNC_5(VAR_0);
 int VAR_2;

 FUNC_1(&VAR_1->lock);

 if (VAR_1->dma_addr_cnt > 0) {
  VAR_1->dma_addr_cnt--;
  if (VAR_1->dma_addr_cnt == 0) {
   VAR_2 = FUNC_4(VAR_1->block);
   if (VAR_2) {
    FUNC_0(VAR_0->dev->dev,
     "could not unpin pages: %d\n", VAR_2);
   }
   VAR_2 = FUNC_3(VAR_1->block);
   if (VAR_2) {
    FUNC_0(VAR_0->dev->dev,
     "could not release unmap: %d\n", VAR_2);
   }
   VAR_1->dma_addr = 0;
   VAR_1->block = ((void*)0);
  }
 }

 FUNC_2(&VAR_1->lock);
}
