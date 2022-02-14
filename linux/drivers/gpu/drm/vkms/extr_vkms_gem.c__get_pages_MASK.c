
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_gem_object {int dummy; } ;
struct vkms_gem_object {struct page** pages; struct drm_gem_object gem; } ;
struct page {int dummy; } ;


 scalar_t__ FUNC_0 (struct page**) ;
 scalar_t__ FUNC_1 (struct page***,int *,struct page**) ;
 struct page** FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (struct drm_gem_object*,struct page**,int,int) ;

__attribute__((used)) static struct page **FUNC_4(struct vkms_gem_object *VAR_0)
{
 struct drm_gem_object *VAR_1 = &VAR_0->gem;

 if (!VAR_0->pages) {
  struct page **VAR_2 = FUNC_2(VAR_1);

  if (FUNC_0(VAR_2))
   return VAR_2;

  if (FUNC_1(&VAR_0->pages, ((void*)0), VAR_2))
   FUNC_3(VAR_1, VAR_2, 0, 1);
 }

 return VAR_0->pages;
}
