
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vc4_dev {int bo_lock; TYPE_3__* dev; } ;
struct TYPE_4__ {int size; } ;
struct TYPE_5__ {TYPE_1__ base; int vaddr; } ;
struct vc4_bo {int madv; TYPE_2__ base; } ;
struct drm_printer {int dummy; } ;
struct drm_gem_cma_object {int base; } ;
struct drm_device {int dummy; } ;
typedef enum vc4_kernel_bo_type { ____Placeholder_vc4_kernel_bo_type } vc4_kernel_bo_type ;
struct TYPE_6__ {int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct vc4_bo* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct drm_gem_cma_object*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct drm_gem_cma_object* FUNC_3 (struct drm_device*,size_t) ;
 struct drm_printer FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 size_t FUNC_8 (size_t,int ) ;
 struct vc4_bo* FUNC_9 (int *) ;
 struct vc4_dev* FUNC_10 (struct drm_device*) ;
 int FUNC_11 (struct drm_device*) ;
 struct vc4_bo* FUNC_12 (struct drm_device*,size_t,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (struct drm_printer*,struct vc4_dev*) ;
 int FUNC_15 (struct drm_device*) ;

struct vc4_bo *FUNC_16(struct drm_device *VAR_4, size_t VAR_5,
        bool VAR_6, enum vc4_kernel_bo_type VAR_7)
{
 size_t VAR_8 = FUNC_8(VAR_5, VAR_2);
 struct vc4_dev *VAR_9 = FUNC_10(VAR_4);
 struct drm_gem_cma_object *VAR_10;
 struct vc4_bo *VAR_11;

 if (VAR_8 == 0)
  return FUNC_1(-VAR_0);


 VAR_11 = FUNC_12(VAR_4, VAR_8, VAR_7);
 if (VAR_11) {
  if (!VAR_6)
   FUNC_5(VAR_11->base.vaddr, 0, VAR_11->base.base.size);
  return VAR_11;
 }

 VAR_10 = FUNC_3(VAR_4, VAR_8);
 if (FUNC_2(VAR_10)) {




  FUNC_11(VAR_4);
  VAR_10 = FUNC_3(VAR_4, VAR_8);
 }

 if (FUNC_2(VAR_10)) {
  FUNC_15(VAR_4);
  VAR_10 = FUNC_3(VAR_4, VAR_8);
 }

 if (FUNC_2(VAR_10)) {
  struct drm_printer VAR_12 = FUNC_4(VAR_9->dev->dev);
  FUNC_0("Failed to allocate from CMA:\n");
  FUNC_14(&VAR_12, VAR_9);
  return FUNC_1(-VAR_1);
 }
 VAR_11 = FUNC_9(&VAR_10->base);





 VAR_11->madv = VAR_3;

 FUNC_6(&VAR_9->bo_lock);
 FUNC_13(&VAR_10->base, VAR_7);
 FUNC_7(&VAR_9->bo_lock);

 return VAR_11;
}
