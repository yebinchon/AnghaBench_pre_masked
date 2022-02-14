
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vkms_gem_object {int vmap_count; int pages_lock; int * pages; int * vaddr; } ;
struct drm_gem_object {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_gem_object*,int *,int,int) ;
 struct vkms_gem_object* FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct drm_gem_object *VAR_0)
{
 struct vkms_gem_object *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(&VAR_1->pages_lock);
 if (VAR_1->vmap_count < 1) {
  FUNC_0(VAR_1->vaddr);
  FUNC_0(VAR_1->pages);
  FUNC_4(&VAR_1->pages_lock);
  return;
 }

 VAR_1->vmap_count--;

 if (VAR_1->vmap_count == 0) {
  FUNC_5(VAR_1->vaddr);
  VAR_1->vaddr = ((void*)0);
  FUNC_1(VAR_0, VAR_1->pages, 0, 1);
  VAR_1->pages = ((void*)0);
 }

 FUNC_4(&VAR_1->pages_lock);
}
