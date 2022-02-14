
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct vm_area_struct {int vm_flags; int vm_page_prot; } ;
struct mm_struct {int mmap_sem; } ;
struct TYPE_3__ {int filp; scalar_t__ size; } ;
struct drm_i915_gem_object {TYPE_1__ base; } ;
struct drm_i915_gem_mmap {int flags; scalar_t__ addr_ptr; int size; int offset; int handle; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_4__ {struct mm_struct* mm; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (struct vm_area_struct*,int ,unsigned long,int ) ;
 int FUNC_2 (int ) ;
 TYPE_2__* VAR_11 ;
 scalar_t__ FUNC_3 (int *) ;
 struct vm_area_struct* FUNC_4 (struct mm_struct*,unsigned long) ;
 struct drm_i915_gem_object* FUNC_5 (struct drm_file*,int ) ;
 int FUNC_6 (struct drm_i915_gem_object*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 unsigned long FUNC_11 (int ,int ,int ,int,int ,int ) ;

int
FUNC_12(struct drm_device *VAR_12, void *VAR_13,
      struct drm_file *VAR_14)
{
 struct drm_i915_gem_mmap *VAR_15 = VAR_13;
 struct drm_i915_gem_object *VAR_16;
 unsigned long VAR_17;

 if (VAR_15->flags & ~(VAR_6))
  return -VAR_1;

 if (VAR_15->flags & VAR_6 && !FUNC_2(VAR_10))
  return -VAR_2;

 VAR_16 = FUNC_5(VAR_14, VAR_15->handle);
 if (!VAR_16)
  return -VAR_3;




 if (!VAR_16->base.filp) {
  VAR_17 = -VAR_5;
  goto err;
 }

 if (FUNC_8(VAR_15->offset, VAR_15->size, (u64)VAR_16->base.size)) {
  VAR_17 = -VAR_1;
  goto err;
 }

 VAR_17 = FUNC_11(VAR_16->base.filp, 0, VAR_15->size,
         VAR_8 | VAR_9, VAR_7,
         VAR_15->offset);
 if (FUNC_0(VAR_17))
  goto err;

 if (VAR_15->flags & VAR_6) {
  struct mm_struct *VAR_18 = VAR_11->mm;
  struct vm_area_struct *VAR_19;

  if (FUNC_3(&VAR_18->mmap_sem)) {
   VAR_17 = -VAR_0;
   goto err;
  }
  VAR_19 = FUNC_4(VAR_18, VAR_17);
  if (VAR_19 && FUNC_1(VAR_19, VAR_16->base.filp, VAR_17, VAR_15->size))
   VAR_19->vm_page_prot =
    FUNC_7(FUNC_10(VAR_19->vm_flags));
  else
   VAR_17 = -VAR_4;
  FUNC_9(&VAR_18->mmap_sem);
  if (FUNC_0(VAR_17))
   goto err;
 }
 FUNC_6(VAR_16);

 VAR_15->addr_ptr = (u64)VAR_17;
 return 0;

err:
 FUNC_6(VAR_16);
 return VAR_17;
}
