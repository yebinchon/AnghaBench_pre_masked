
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_gem_object {scalar_t__ dma_addr_cnt; int flags; int lock; int sgt; scalar_t__ vaddr; int dma_addr; struct omap_gem_object* pages; int mm_list; } ;
struct omap_drm_private {int list_lock; } ;
struct drm_gem_object {scalar_t__ import_attach; int size; struct drm_device* dev; } ;
struct drm_device {int dev; struct omap_drm_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;
 int FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (struct drm_gem_object*,int ) ;
 int FUNC_4 (struct omap_gem_object*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct drm_gem_object*) ;
 int FUNC_10 (struct drm_gem_object*) ;
 struct omap_gem_object* FUNC_11 (struct drm_gem_object*) ;
 int FUNC_12 (scalar_t__) ;

void FUNC_13(struct drm_gem_object *VAR_2)
{
 struct drm_device *VAR_3 = VAR_2->dev;
 struct omap_drm_private *VAR_4 = VAR_3->dev_private;
 struct omap_gem_object *VAR_5 = FUNC_11(VAR_2);

 FUNC_10(VAR_2);

 FUNC_7(&VAR_4->list_lock);
 FUNC_5(&VAR_5->mm_list);
 FUNC_8(&VAR_4->list_lock);







 FUNC_7(&VAR_5->lock);


 FUNC_0(VAR_5->dma_addr_cnt > 0);

 if (VAR_5->pages) {
  if (VAR_5->flags & VAR_0)
   FUNC_4(VAR_5->pages);
  else
   FUNC_9(VAR_2);
 }

 if (VAR_5->flags & VAR_1) {
  FUNC_1(VAR_3->dev, VAR_2->size, VAR_5->vaddr,
       VAR_5->dma_addr);
 } else if (VAR_5->vaddr) {
  FUNC_12(VAR_5->vaddr);
 } else if (VAR_2->import_attach) {
  FUNC_3(VAR_2, VAR_5->sgt);
 }

 FUNC_8(&VAR_5->lock);

 FUNC_2(VAR_2);

 FUNC_6(&VAR_5->lock);

 FUNC_4(VAR_5);
}
