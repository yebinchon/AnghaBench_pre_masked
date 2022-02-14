
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_gpu_object {void* vmap; } ;
struct drm_gem_object {int dummy; } ;


 struct virtio_gpu_object* FUNC_0 (struct drm_gem_object*) ;
 int FUNC_1 (struct virtio_gpu_object*) ;

void *FUNC_2(struct drm_gem_object *VAR_0)
{
 struct virtio_gpu_object *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  return ((void*)0);
 return VAR_1->vmap;
}
