
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct drm_vgem_gem_object {int dummy; } ;
struct drm_gem_object {long size; } ;


 scalar_t__ FUNC_0 (struct page**) ;
 int VAR_0 ;
 long VAR_1 ;
 int FUNC_1 (int ) ;
 struct drm_vgem_gem_object* FUNC_2 (struct drm_gem_object*) ;
 struct page** FUNC_3 (struct drm_vgem_gem_object*) ;
 void* FUNC_4 (struct page**,long,int ,int ) ;

__attribute__((used)) static void *FUNC_5(struct drm_gem_object *VAR_2)
{
 struct drm_vgem_gem_object *VAR_3 = FUNC_2(VAR_2);
 long VAR_4 = VAR_2->size >> VAR_1;
 struct page **VAR_5;

 VAR_5 = FUNC_3(VAR_3);
 if (FUNC_0(VAR_5))
  return ((void*)0);

 return FUNC_4(VAR_5, VAR_4, 0, FUNC_1(VAR_0));
}
