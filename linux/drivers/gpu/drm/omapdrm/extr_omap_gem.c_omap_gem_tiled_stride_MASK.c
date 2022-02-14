
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_gem_object {int flags; } ;
struct drm_gem_object {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 struct omap_gem_object* FUNC_2 (struct drm_gem_object*) ;

int FUNC_3(struct drm_gem_object *VAR_2, u32 VAR_3)
{
 struct omap_gem_object *VAR_4 = FUNC_2(VAR_2);
 int VAR_5 = -VAR_0;
 if (VAR_4->flags & VAR_1)
  VAR_5 = FUNC_1(FUNC_0(VAR_4->flags), VAR_3);
 return VAR_5;
}
