
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct ttm_operation_ctx {int member_0; int member_1; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_amdgpu_gem_userptr {int addr; int size; int flags; int handle; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_4__ {TYPE_2__* ttm; } ;
struct amdgpu_bo {TYPE_1__ tbo; int placement; void* allowed_domains; void* preferred_domains; } ;
struct TYPE_5__ {int pages; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct amdgpu_bo*,void*) ;
 int FUNC_1 (struct amdgpu_bo*,int) ;
 int FUNC_2 (struct amdgpu_bo*) ;
 int FUNC_3 (struct amdgpu_device*,int,int ,int ,int ,int ,int *,struct drm_gem_object**) ;
 int FUNC_4 (struct amdgpu_bo*,int) ;
 int FUNC_5 (struct amdgpu_bo*,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int,int) ;
 int FUNC_8 (struct drm_file*,struct drm_gem_object*,int *) ;
 int FUNC_9 (struct drm_gem_object*) ;
 struct amdgpu_bo* FUNC_10 (struct drm_gem_object*) ;
 scalar_t__ FUNC_11 (int) ;
 int VAR_8 ;
 int FUNC_12 (TYPE_1__*,int *,struct ttm_operation_ctx*) ;
 int FUNC_13 (int) ;

int FUNC_14(struct drm_device *VAR_9, void *VAR_10,
        struct drm_file *VAR_11)
{
 struct ttm_operation_ctx VAR_12 = { 1, 0 };
 struct amdgpu_device *VAR_13 = VAR_9->dev_private;
 struct drm_amdgpu_gem_userptr *VAR_14 = VAR_10;
 struct drm_gem_object *VAR_15;
 struct amdgpu_bo *VAR_16;
 uint32_t VAR_17;
 int VAR_18;

 VAR_14->addr = FUNC_13(VAR_14->addr);

 if (FUNC_11(VAR_14->addr | VAR_14->size))
  return -VAR_7;


 if (VAR_14->flags & ~(VAR_3 |
     VAR_2 | VAR_5 |
     VAR_4))
  return -VAR_7;

 if (!(VAR_14->flags & VAR_3) &&
      !(VAR_14->flags & VAR_4)) {


  return -VAR_6;
 }


 VAR_18 = FUNC_3(VAR_13, VAR_14->size, 0, VAR_0,
         0, VAR_8, ((void*)0), &VAR_15);
 if (VAR_18)
  return VAR_18;

 VAR_16 = FUNC_10(VAR_15);
 VAR_16->preferred_domains = VAR_1;
 VAR_16->allowed_domains = VAR_1;
 VAR_18 = FUNC_7(VAR_16->tbo.ttm, VAR_14->addr, VAR_14->flags);
 if (VAR_18)
  goto release_object;

 if (VAR_14->flags & VAR_4) {
  VAR_18 = FUNC_4(VAR_16, VAR_14->addr);
  if (VAR_18)
   goto release_object;
 }

 if (VAR_14->flags & VAR_5) {
  VAR_18 = FUNC_5(VAR_16, VAR_16->tbo.ttm->pages);
  if (VAR_18)
   goto release_object;

  VAR_18 = FUNC_1(VAR_16, 1);
  if (VAR_18)
   goto user_pages_done;

  FUNC_0(VAR_16, VAR_1);
  VAR_18 = FUNC_12(&VAR_16->tbo, &VAR_16->placement, &VAR_12);
  FUNC_2(VAR_16);
  if (VAR_18)
   goto user_pages_done;
 }

 VAR_18 = FUNC_8(VAR_11, VAR_15, &VAR_17);
 if (VAR_18)
  goto user_pages_done;

 VAR_14->handle = VAR_17;

user_pages_done:
 if (VAR_14->flags & VAR_5)
  FUNC_6(VAR_16->tbo.ttm);

release_object:
 FUNC_9(VAR_15);

 return VAR_18;
}
