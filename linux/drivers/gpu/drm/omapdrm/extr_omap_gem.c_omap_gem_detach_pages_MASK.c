
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_gem_object {int * pages; scalar_t__* dma_addrs; int lock; } ;
struct drm_gem_object {unsigned int size; TYPE_1__* dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int ,int ) ;
 int FUNC_1 (struct drm_gem_object*,int *,int,int) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (int *) ;
 struct omap_gem_object* FUNC_4 (struct drm_gem_object*) ;

__attribute__((used)) static void FUNC_5(struct drm_gem_object *VAR_3)
{
 struct omap_gem_object *VAR_4 = FUNC_4(VAR_3);
 unsigned int VAR_5 = VAR_3->size >> VAR_1;
 unsigned int VAR_6;

 FUNC_3(&VAR_4->lock);

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  if (VAR_4->dma_addrs[VAR_6])
   FUNC_0(VAR_3->dev->dev, VAR_4->dma_addrs[VAR_6],
           VAR_2, VAR_0);
 }

 FUNC_2(VAR_4->dma_addrs);
 VAR_4->dma_addrs = ((void*)0);

 FUNC_1(VAR_3, VAR_4->pages, 1, 0);
 VAR_4->pages = ((void*)0);
}
