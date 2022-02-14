
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int data_size_bytes; int flags; int data; int tiling_info; } ;
struct drm_amdgpu_gem_metadata {scalar_t__ op; TYPE_1__ data; int handle; } ;
struct amdgpu_bo {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct amdgpu_bo*,int ,int,int*,int *) ;
 int FUNC_2 (struct amdgpu_bo*,int *) ;
 int FUNC_3 (struct amdgpu_bo*,int) ;
 int FUNC_4 (struct amdgpu_bo*,int ,int,int ) ;
 int FUNC_5 (struct amdgpu_bo*,int ) ;
 int FUNC_6 (struct amdgpu_bo*) ;
 struct drm_gem_object* FUNC_7 (struct drm_file*,int ) ;
 int FUNC_8 (struct drm_gem_object*) ;
 struct amdgpu_bo* FUNC_9 (struct drm_gem_object*) ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(struct drm_device *VAR_4, void *VAR_5,
    struct drm_file *VAR_6)
{
 struct drm_amdgpu_gem_metadata *VAR_7 = VAR_5;
 struct drm_gem_object *VAR_8;
 struct amdgpu_bo *VAR_9;
 int VAR_10 = -1;

 FUNC_0("%d \n", VAR_7->handle);
 VAR_8 = FUNC_7(VAR_6, VAR_7->handle);
 if (VAR_8 == ((void*)0))
  return -VAR_3;
 VAR_9 = FUNC_9(VAR_8);

 VAR_10 = FUNC_3(VAR_9, 0);
 if (FUNC_10(VAR_10 != 0))
  goto out;

 if (VAR_7->op == VAR_0) {
  FUNC_2(VAR_9, &VAR_7->data.tiling_info);
  VAR_10 = FUNC_1(VAR_9, VAR_7->data.data,
        sizeof(VAR_7->data.data),
        &VAR_7->data.data_size_bytes,
        &VAR_7->data.flags);
 } else if (VAR_7->op == VAR_1) {
  if (VAR_7->data.data_size_bytes > sizeof(VAR_7->data.data)) {
   VAR_10 = -VAR_2;
   goto unreserve;
  }
  VAR_10 = FUNC_5(VAR_9, VAR_7->data.tiling_info);
  if (!VAR_10)
   VAR_10 = FUNC_4(VAR_9, VAR_7->data.data,
         VAR_7->data.data_size_bytes,
         VAR_7->data.flags);
 }

unreserve:
 FUNC_6(VAR_9);
out:
 FUNC_8(VAR_8);
 return VAR_10;
}
