
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct omap_gem_object {int lock; struct page** pages; } ;
struct drm_gem_object {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_gem_object*) ;
 struct omap_gem_object* FUNC_3 (struct drm_gem_object*) ;

int FUNC_4(struct drm_gem_object *VAR_1, struct page ***VAR_2,
  bool VAR_3)
{
 struct omap_gem_object *VAR_4 = FUNC_3(VAR_1);
 int VAR_5 = 0;

 FUNC_0(&VAR_4->lock);

 if (VAR_3) {
  VAR_5 = FUNC_2(VAR_1);
  if (VAR_5)
   goto unlock;
 }

 if (!VAR_4->pages) {
  VAR_5 = -VAR_0;
  goto unlock;
 }

 *VAR_2 = VAR_4->pages;

unlock:
 FUNC_1(&VAR_4->lock);

 return VAR_5;
}
