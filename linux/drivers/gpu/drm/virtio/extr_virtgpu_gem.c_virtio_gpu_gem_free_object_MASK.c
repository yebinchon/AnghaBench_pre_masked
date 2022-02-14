
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_gpu_object {int dummy; } ;
struct drm_gem_object {int dummy; } ;


 struct virtio_gpu_object* FUNC_0 (struct drm_gem_object*) ;
 int FUNC_1 (struct virtio_gpu_object**) ;

void FUNC_2(struct drm_gem_object *VAR_0)
{
 struct virtio_gpu_object *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1)
  FUNC_1(&VAR_1);
}
