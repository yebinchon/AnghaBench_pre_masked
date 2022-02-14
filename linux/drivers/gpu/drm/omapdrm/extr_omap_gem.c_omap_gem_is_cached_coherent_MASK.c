
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_gem_object {int flags; } ;
struct drm_gem_object {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct omap_gem_object* FUNC_0 (struct drm_gem_object*) ;

__attribute__((used)) static inline bool FUNC_1(struct drm_gem_object *VAR_3)
{
 struct omap_gem_object *VAR_4 = FUNC_0(VAR_3);

 return !((VAR_4->flags & VAR_2) &&
  ((VAR_4->flags & VAR_1) == VAR_0));
}
