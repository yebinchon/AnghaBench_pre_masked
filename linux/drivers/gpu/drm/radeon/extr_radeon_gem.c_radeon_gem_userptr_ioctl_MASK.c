
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct ttm_operation_ctx {int member_0; int member_1; } ;
struct radeon_device {scalar_t__ family; int exclusive_lock; } ;
struct TYPE_5__ {int ttm; } ;
struct radeon_bo {int placement; TYPE_2__ tbo; } ;
struct drm_radeon_gem_userptr {int addr; int size; int flags; int handle; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct TYPE_6__ {TYPE_1__* mm; } ;
struct TYPE_4__ {int mmap_sem; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_3__* VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_file*,struct drm_gem_object*,int *) ;
 int FUNC_2 (struct drm_gem_object*) ;
 struct radeon_bo* FUNC_3 (struct drm_gem_object*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct radeon_bo*,int) ;
 int FUNC_6 (struct radeon_bo*) ;
 int FUNC_7 (struct radeon_device*,int) ;
 int FUNC_8 (struct radeon_device*,int,int ,int ,int ,int,struct drm_gem_object**) ;
 int FUNC_9 (struct radeon_bo*,int) ;
 int FUNC_10 (struct radeon_bo*,int ) ;
 int FUNC_11 (int ,int,int) ;
 int FUNC_12 (TYPE_2__*,int *,struct ttm_operation_ctx*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int *) ;

int FUNC_15(struct drm_device *VAR_10, void *VAR_11,
        struct drm_file *VAR_12)
{
 struct ttm_operation_ctx VAR_13 = { 1, 0 };
 struct radeon_device *VAR_14 = VAR_10->dev_private;
 struct drm_radeon_gem_userptr *VAR_15 = VAR_11;
 struct drm_gem_object *VAR_16;
 struct radeon_bo *VAR_17;
 uint32_t VAR_18;
 int VAR_19;

 VAR_15->addr = FUNC_13(VAR_15->addr);

 if (FUNC_4(VAR_15->addr | VAR_15->size))
  return -VAR_2;


 if (VAR_15->flags & ~(VAR_6 |
     VAR_5 | VAR_8 |
     VAR_7))
  return -VAR_2;

 if (VAR_15->flags & VAR_6) {

  if (VAR_14->family < VAR_0)
   return -VAR_2;

 } else if (!(VAR_15->flags & VAR_5) ||
     !(VAR_15->flags & VAR_7)) {



  return -VAR_1;
 }

 FUNC_0(&VAR_14->exclusive_lock);


 VAR_19 = FUNC_8(VAR_14, VAR_15->size, 0,
         VAR_3, 0,
         0, &VAR_16);
 if (VAR_19)
  goto handle_lockup;

 VAR_17 = FUNC_3(VAR_16);
 VAR_19 = FUNC_11(VAR_17->tbo.ttm, VAR_15->addr, VAR_15->flags);
 if (VAR_19)
  goto release_object;

 if (VAR_15->flags & VAR_7) {
  VAR_19 = FUNC_9(VAR_17, VAR_15->addr);
  if (VAR_19)
   goto release_object;
 }

 if (VAR_15->flags & VAR_8) {
  FUNC_0(&VAR_9->mm->mmap_sem);
  VAR_19 = FUNC_5(VAR_17, 1);
  if (VAR_19) {
   FUNC_14(&VAR_9->mm->mmap_sem);
   goto release_object;
  }

  FUNC_10(VAR_17, VAR_4);
  VAR_19 = FUNC_12(&VAR_17->tbo, &VAR_17->placement, &VAR_13);
  FUNC_6(VAR_17);
  FUNC_14(&VAR_9->mm->mmap_sem);
  if (VAR_19)
   goto release_object;
 }

 VAR_19 = FUNC_1(VAR_12, VAR_16, &VAR_18);

 FUNC_2(VAR_16);
 if (VAR_19)
  goto handle_lockup;

 VAR_15->handle = VAR_18;
 FUNC_14(&VAR_14->exclusive_lock);
 return 0;

release_object:
 FUNC_2(VAR_16);

handle_lockup:
 FUNC_14(&VAR_14->exclusive_lock);
 VAR_19 = FUNC_7(VAR_14, VAR_19);

 return VAR_19;
}
