
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct host1x_bo {int dummy; } ;
struct tegra_bo {struct host1x_bo base; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;


 struct drm_gem_object* FUNC_0 (struct drm_file*,int ) ;
 struct tegra_bo* FUNC_1 (struct drm_gem_object*) ;

__attribute__((used)) static struct host1x_bo *
FUNC_2(struct drm_file *VAR_0, u32 VAR_1)
{
 struct drm_gem_object *VAR_2;
 struct tegra_bo *VAR_3;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_2)
  return ((void*)0);

 VAR_3 = FUNC_1(VAR_2);
 return &VAR_3->base;
}
