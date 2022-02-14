
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct drm_vgem_gem_object {int dummy; } ;
struct drm_gem_object {long size; } ;


 scalar_t__ FUNC_0 (struct page**) ;
 long VAR_0 ;
 int FUNC_1 (struct page**) ;
 int FUNC_2 (struct page**,long) ;
 struct drm_vgem_gem_object* FUNC_3 (struct drm_gem_object*) ;
 struct page** FUNC_4 (struct drm_vgem_gem_object*) ;

__attribute__((used)) static int FUNC_5(struct drm_gem_object *VAR_1)
{
 struct drm_vgem_gem_object *VAR_2 = FUNC_3(VAR_1);
 long VAR_3 = VAR_1->size >> VAR_0;
 struct page **VAR_4;

 VAR_4 = FUNC_4(VAR_2);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);




 FUNC_2(VAR_4, VAR_3);

 return 0;
}
