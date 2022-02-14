
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_gem_object {int flags; int height; int width; } ;
struct drm_gem_object {size_t size; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int ,int ,int ) ;
 struct omap_gem_object* FUNC_2 (struct drm_gem_object*) ;

size_t FUNC_3(struct drm_gem_object *VAR_1)
{
 struct omap_gem_object *VAR_2 = FUNC_2(VAR_1);
 size_t VAR_3 = VAR_1->size;

 if (VAR_2->flags & VAR_0) {






  VAR_3 = FUNC_1(FUNC_0(VAR_2->flags),
    VAR_2->width, VAR_2->height);
 }

 return VAR_3;
}
