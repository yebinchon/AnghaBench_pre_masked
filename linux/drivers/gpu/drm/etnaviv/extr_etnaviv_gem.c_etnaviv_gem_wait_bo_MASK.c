
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct etnaviv_gpu {int dummy; } ;
struct etnaviv_gem_object {int dummy; } ;
struct drm_gem_object {int dummy; } ;


 int FUNC_0 (struct etnaviv_gpu*,struct etnaviv_gem_object*,struct timespec*) ;
 struct etnaviv_gem_object* FUNC_1 (struct drm_gem_object*) ;

int FUNC_2(struct etnaviv_gpu *VAR_0, struct drm_gem_object *VAR_1,
 struct timespec *VAR_2)
{
 struct etnaviv_gem_object *VAR_3 = FUNC_1(VAR_1);

 return FUNC_0(VAR_0, VAR_3, VAR_2);
}
