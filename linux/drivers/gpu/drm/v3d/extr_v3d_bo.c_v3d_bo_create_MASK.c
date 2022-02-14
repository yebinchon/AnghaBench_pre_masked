
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v3d_bo {int dummy; } ;
struct drm_gem_shmem_object {int base; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 struct v3d_bo* FUNC_0 (struct drm_gem_shmem_object*) ;
 struct v3d_bo* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct drm_gem_shmem_object*) ;
 struct drm_gem_shmem_object* FUNC_3 (struct drm_device*,size_t) ;
 int FUNC_4 (int *) ;
 struct v3d_bo* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

struct v3d_bo *FUNC_7(struct drm_device *VAR_0, struct drm_file *VAR_1,
        size_t VAR_2)
{
 struct drm_gem_shmem_object *VAR_3;
 struct v3d_bo *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_3(VAR_0, VAR_2);
 if (FUNC_2(VAR_3))
  return FUNC_0(VAR_3);
 VAR_4 = FUNC_5(&VAR_3->base);

 VAR_5 = FUNC_6(&VAR_3->base);
 if (VAR_5)
  goto free_obj;

 return VAR_4;

free_obj:
 FUNC_4(&VAR_3->base);
 return FUNC_1(VAR_5);
}
