
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; } ;
struct virtio_gpu_object {int hw_res_handle; TYPE_1__ gem_base; } ;
struct drm_virtgpu_resource_info {int res_handle; int size; int bo_handle; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 struct drm_gem_object* FUNC_0 (struct drm_file*,int ) ;
 int FUNC_1 (struct drm_gem_object*) ;
 struct virtio_gpu_object* FUNC_2 (struct drm_gem_object*) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_1, void *VAR_2,
       struct drm_file *VAR_3)
{
 struct drm_virtgpu_resource_info *VAR_4 = VAR_2;
 struct drm_gem_object *VAR_5 = ((void*)0);
 struct virtio_gpu_object *VAR_6 = ((void*)0);

 VAR_5 = FUNC_0(VAR_3, VAR_4->bo_handle);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_5);

 VAR_4->size = VAR_6->gem_base.size;
 VAR_4->res_handle = VAR_6->hw_res_handle;
 FUNC_1(VAR_5);
 return 0;
}
