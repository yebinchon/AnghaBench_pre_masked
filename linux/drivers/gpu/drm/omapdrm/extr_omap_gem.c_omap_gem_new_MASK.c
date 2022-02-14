
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int height; int width; } ;
union omap_gem_size {int bytes; TYPE_1__ tiled; } ;
typedef int u32 ;
struct drm_gem_object {TYPE_2__* filp; } ;
struct omap_gem_object {int flags; int mm_list; int vaddr; int dma_addr; int height; int width; int lock; struct drm_gem_object base; } ;
struct omap_drm_private {int list_lock; int obj_list; int has_dmm; int usergart; } ;
struct drm_device {int dev; struct omap_drm_private* dev_private; } ;
struct address_space {int dummy; } ;
struct TYPE_4__ {struct address_space* f_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t FUNC_0 (int ) ;
 int VAR_10 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,size_t,int *,int ) ;
 int FUNC_3 (struct drm_device*,struct drm_gem_object*,size_t) ;
 int FUNC_4 (struct drm_gem_object*) ;
 int FUNC_5 (struct drm_device*,struct drm_gem_object*,size_t) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct omap_gem_object*) ;
 struct omap_gem_object* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (struct address_space*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int *,int *) ;
 int FUNC_15 () ;
 size_t FUNC_16 (int ,int ,int ) ;

struct drm_gem_object *FUNC_17(struct drm_device *VAR_11,
  union omap_gem_size VAR_12, u32 VAR_13)
{
 struct omap_drm_private *VAR_14 = VAR_11->dev_private;
 struct omap_gem_object *VAR_15;
 struct drm_gem_object *VAR_16;
 struct address_space *VAR_17;
 size_t VAR_18;
 int VAR_19;


 if (VAR_13 & VAR_7) {
  if (!VAR_14->usergart) {
   FUNC_1(VAR_11->dev, "Tiled buffers require DMM\n");
   return ((void*)0);
  }





  VAR_13 &= ~VAR_6;
  VAR_13 |= VAR_5;





  VAR_13 &= ~(VAR_2|VAR_9|VAR_8);
  VAR_13 |= FUNC_15();
 } else if ((VAR_13 & VAR_6) && !VAR_14->has_dmm) {





  VAR_13 |= VAR_4;
 } else if (!(VAR_13 & VAR_3)) {



  VAR_13 |= VAR_5;
 }


 VAR_15 = FUNC_8(sizeof(*VAR_15), VAR_0);
 if (!VAR_15)
  return ((void*)0);

 VAR_16 = &VAR_15->base;
 VAR_15->flags = VAR_13;
 FUNC_11(&VAR_15->lock);

 if (VAR_13 & VAR_7) {




  FUNC_14(FUNC_6(VAR_13), &VAR_12.tiled.width,
       &VAR_12.tiled.height);

  VAR_18 = FUNC_16(FUNC_6(VAR_13), VAR_12.tiled.width,
      VAR_12.tiled.height);

  VAR_15->width = VAR_12.tiled.width;
  VAR_15->height = VAR_12.tiled.height;
 } else {
  VAR_18 = FUNC_0(VAR_12.bytes);
 }


 if (!(VAR_13 & VAR_5)) {
  FUNC_5(VAR_11, VAR_16, VAR_18);
 } else {
  VAR_19 = FUNC_3(VAR_11, VAR_16, VAR_18);
  if (VAR_19)
   goto err_free;

  VAR_17 = VAR_16->filp->f_mapping;
  FUNC_10(VAR_17, VAR_1 | VAR_10);
 }


 if (VAR_13 & VAR_4) {
  VAR_15->vaddr = FUNC_2(VAR_11->dev, VAR_18,
            &VAR_15->dma_addr,
            VAR_0);
  if (!VAR_15->vaddr)
   goto err_release;
 }

 FUNC_12(&VAR_14->list_lock);
 FUNC_9(&VAR_15->mm_list, &VAR_14->obj_list);
 FUNC_13(&VAR_14->list_lock);

 return VAR_16;

err_release:
 FUNC_4(VAR_16);
err_free:
 FUNC_7(VAR_15);
 return ((void*)0);
}
