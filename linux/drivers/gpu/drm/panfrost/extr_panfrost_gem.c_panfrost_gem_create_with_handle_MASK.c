
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct panfrost_gem_object {int noexec; int is_heap; } ;
struct drm_gem_shmem_object {int base; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 struct panfrost_gem_object* FUNC_0 (struct drm_gem_shmem_object*) ;
 struct panfrost_gem_object* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct drm_gem_shmem_object*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct drm_file*,int *,int *) ;
 int FUNC_4 (int *) ;
 struct drm_gem_shmem_object* FUNC_5 (struct drm_device*,size_t) ;
 size_t FUNC_6 (size_t,int ) ;
 struct panfrost_gem_object* FUNC_7 (int *) ;

struct panfrost_gem_object *
FUNC_8(struct drm_file *VAR_3,
    struct drm_device *VAR_4, size_t VAR_5,
    u32 VAR_6,
    uint32_t *VAR_7)
{
 int VAR_8;
 struct drm_gem_shmem_object *VAR_9;
 struct panfrost_gem_object *VAR_10;


 if (VAR_6 & VAR_0)
  VAR_5 = FUNC_6(VAR_5, VAR_2);

 VAR_9 = FUNC_5(VAR_4, VAR_5);
 if (FUNC_2(VAR_9))
  return FUNC_0(VAR_9);

 VAR_10 = FUNC_7(&VAR_9->base);
 VAR_10->noexec = !!(VAR_6 & VAR_1);
 VAR_10->is_heap = !!(VAR_6 & VAR_0);





 VAR_8 = FUNC_3(VAR_3, &VAR_9->base, VAR_7);

 FUNC_4(&VAR_9->base);
 if (VAR_8)
  return FUNC_1(VAR_8);

 return VAR_10;
}
