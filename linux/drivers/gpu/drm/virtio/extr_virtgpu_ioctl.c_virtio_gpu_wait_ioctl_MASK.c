
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_gpu_object {int dummy; } ;
struct drm_virtgpu_3d_wait {int flags; int handle; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_gem_object* FUNC_0 (struct drm_file*,int ) ;
 int FUNC_1 (struct drm_gem_object*) ;
 struct virtio_gpu_object* FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (struct virtio_gpu_object*,int) ;

__attribute__((used)) static int FUNC_4(struct drm_device *VAR_2, void *VAR_3,
       struct drm_file *VAR_4)
{
 struct drm_virtgpu_3d_wait *VAR_5 = VAR_3;
 struct drm_gem_object *VAR_6 = ((void*)0);
 struct virtio_gpu_object *VAR_7 = ((void*)0);
 int VAR_8;
 bool VAR_9 = 0;

 VAR_6 = FUNC_0(VAR_4, VAR_5->handle);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_6);

 if (VAR_5->flags & VAR_1)
  VAR_9 = 1;
 VAR_8 = FUNC_3(VAR_7, VAR_9);

 FUNC_1(VAR_6);
 return VAR_8;
}
