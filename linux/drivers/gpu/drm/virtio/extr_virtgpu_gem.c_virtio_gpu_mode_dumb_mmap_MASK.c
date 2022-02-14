
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct virtio_gpu_object {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct drm_gem_object* FUNC_1 (struct drm_file*,int ) ;
 int FUNC_2 (struct drm_gem_object*) ;
 struct virtio_gpu_object* FUNC_3 (struct drm_gem_object*) ;
 int FUNC_4 (struct virtio_gpu_object*) ;

int FUNC_5(struct drm_file *VAR_1,
         struct drm_device *VAR_2,
         uint32_t VAR_3, uint64_t *VAR_4)
{
 struct drm_gem_object *VAR_5;
 struct virtio_gpu_object *VAR_6;

 FUNC_0(!VAR_4);
 VAR_5 = FUNC_1(VAR_1, VAR_3);
 if (VAR_5 == ((void*)0))
  return -VAR_0;
 VAR_6 = FUNC_3(VAR_5);
 *VAR_4 = FUNC_4(VAR_6);
 FUNC_2(VAR_5);
 return 0;
}
