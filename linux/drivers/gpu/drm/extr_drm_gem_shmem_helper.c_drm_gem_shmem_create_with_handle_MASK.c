
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_gem_shmem_object {int base; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 struct drm_gem_shmem_object* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct drm_gem_shmem_object*) ;
 int FUNC_2 (struct drm_file*,int *,int *) ;
 int FUNC_3 (int *) ;
 struct drm_gem_shmem_object* FUNC_4 (struct drm_device*,size_t) ;

struct drm_gem_shmem_object *
FUNC_5(struct drm_file *VAR_0,
     struct drm_device *VAR_1, size_t VAR_2,
     uint32_t *VAR_3)
{
 struct drm_gem_shmem_object *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_4(VAR_1, VAR_2);
 if (FUNC_1(VAR_4))
  return VAR_4;





 VAR_5 = FUNC_2(VAR_0, &VAR_4->base, VAR_3);

 FUNC_3(&VAR_4->base);
 if (VAR_5)
  return FUNC_0(VAR_5);

 return VAR_4;
}
