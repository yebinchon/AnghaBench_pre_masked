
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sg_table {int sgl; } ;
struct TYPE_6__ {scalar_t__ madv; int lock; scalar_t__ mapping; scalar_t__ quirked; } ;
struct TYPE_5__ {int size; } ;
struct drm_i915_gem_object {TYPE_2__ mm; TYPE_3__* ops; TYPE_1__ base; } ;
struct TYPE_7__ {int (* put_pages ) (struct drm_i915_gem_object*,struct sg_table*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct sg_table*) ;
 int FUNC_1 (struct drm_i915_gem_object*) ;
 int FUNC_2 (struct drm_i915_gem_object*) ;
 int FUNC_3 (struct drm_i915_gem_object*,struct sg_table*,unsigned int) ;
 struct sg_table* FUNC_4 (struct drm_i915_gem_object*) ;
 int FUNC_5 (struct drm_i915_gem_object*,int ) ;
 TYPE_3__ VAR_5 ;
 TYPE_3__ VAR_6 ;
 unsigned int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct drm_i915_gem_object*,struct sg_table*) ;

int FUNC_10(struct drm_i915_gem_object *VAR_7, int VAR_8)
{
 struct sg_table *VAR_9;
 int VAR_10;

 if (VAR_8 > VAR_7->base.size)
  return -VAR_2;

 if (VAR_7->ops == &VAR_5)
  return 0;

 if (VAR_7->ops != &VAR_6)
  return -VAR_2;

 VAR_10 = FUNC_5(VAR_7, VAR_3);
 if (VAR_10)
  return VAR_10;

 FUNC_7(&VAR_7->mm.lock);

 if (VAR_7->mm.madv != VAR_4) {
  VAR_10 = -VAR_1;
  goto err_unlock;
 }

 if (VAR_7->mm.quirked) {
  VAR_10 = -VAR_1;
  goto err_unlock;
 }

 if (VAR_7->mm.mapping) {
  VAR_10 = -VAR_0;
  goto err_unlock;
 }

 VAR_9 = FUNC_4(VAR_7);

 VAR_7->ops = &VAR_5;

 VAR_10 = FUNC_1(VAR_7);
 if (VAR_10)
  goto err_xfer;


 FUNC_2(VAR_7);

 if (!FUNC_0(VAR_9))
  VAR_6.put_pages(VAR_7, VAR_9);
 FUNC_8(&VAR_7->mm.lock);
 return 0;

err_xfer:
 VAR_7->ops = &VAR_6;
 if (!FUNC_0(VAR_9)) {
  unsigned int VAR_11 = FUNC_6(VAR_9->sgl);

  FUNC_3(VAR_7, VAR_9, VAR_11);
 }
err_unlock:
 FUNC_8(&VAR_7->mm.lock);
 return VAR_10;
}
