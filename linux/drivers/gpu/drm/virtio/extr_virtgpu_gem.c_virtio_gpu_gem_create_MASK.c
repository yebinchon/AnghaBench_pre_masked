
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct virtio_gpu_object_params {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct virtio_gpu_object {struct drm_gem_object gem_base; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct virtio_gpu_object*) ;
 int FUNC_1 (struct virtio_gpu_object*) ;
 int FUNC_2 (struct drm_file*,struct drm_gem_object*,int *) ;
 int FUNC_3 (struct drm_gem_object*) ;
 int FUNC_4 (struct drm_gem_object*) ;
 struct virtio_gpu_object* FUNC_5 (struct drm_device*,struct virtio_gpu_object_params*,int *) ;

int FUNC_6(struct drm_file *VAR_0,
     struct drm_device *VAR_1,
     struct virtio_gpu_object_params *VAR_2,
     struct drm_gem_object **VAR_3,
     uint32_t *VAR_4)
{
 struct virtio_gpu_object *VAR_5;
 int VAR_6;
 u32 VAR_7;

 VAR_5 = FUNC_5(VAR_1, VAR_2, ((void*)0));
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_6 = FUNC_2(VAR_0, &VAR_5->gem_base, &VAR_7);
 if (VAR_6) {
  FUNC_4(&VAR_5->gem_base);
  return VAR_6;
 }

 *VAR_3 = &VAR_5->gem_base;


 FUNC_3(&VAR_5->gem_base);

 *VAR_4 = VAR_7;
 return 0;
}
