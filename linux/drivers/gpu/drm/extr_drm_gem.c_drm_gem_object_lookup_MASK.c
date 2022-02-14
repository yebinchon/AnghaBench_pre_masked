
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;


 int FUNC_0 (struct drm_file*,int *,int,struct drm_gem_object**) ;

struct drm_gem_object *
FUNC_1(struct drm_file *VAR_0, u32 VAR_1)
{
 struct drm_gem_object *VAR_2 = ((void*)0);

 FUNC_0(VAR_0, &VAR_1, 1, &VAR_2);
 return VAR_2;
}
