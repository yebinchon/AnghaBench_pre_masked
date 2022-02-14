
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_gem_shmem_object {struct page** pages; scalar_t__ pages_use_count; struct drm_gem_object base; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (struct page**) ;
 int FUNC_2 (struct page**) ;
 struct page** FUNC_3 (struct drm_gem_object*) ;

__attribute__((used)) static int FUNC_4(struct drm_gem_shmem_object *VAR_0)
{
 struct drm_gem_object *VAR_1 = &VAR_0->base;
 struct page **VAR_2;

 if (VAR_0->pages_use_count++ > 0)
  return 0;

 VAR_2 = FUNC_3(VAR_1);
 if (FUNC_1(VAR_2)) {
  FUNC_0("Failed to get pages (%ld)\n", FUNC_2(VAR_2));
  VAR_0->pages_use_count = 0;
  return FUNC_2(VAR_2);
 }

 VAR_0->pages = VAR_2;

 return 0;
}
