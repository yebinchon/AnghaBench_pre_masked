
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct msm_gem_object {scalar_t__ madv; int lock; } ;
struct drm_gem_object {int dummy; } ;


 int VAR_0 ;
 struct page** FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 struct page** FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct msm_gem_object* FUNC_5 (struct drm_gem_object*) ;

struct page **FUNC_6(struct drm_gem_object *VAR_2)
{
 struct msm_gem_object *VAR_3 = FUNC_5(VAR_2);
 struct page **VAR_4;

 FUNC_3(&VAR_3->lock);

 if (FUNC_1(VAR_3->madv != VAR_1)) {
  FUNC_4(&VAR_3->lock);
  return FUNC_0(-VAR_0);
 }

 VAR_4 = FUNC_2(VAR_2);
 FUNC_4(&VAR_3->lock);
 return VAR_4;
}
