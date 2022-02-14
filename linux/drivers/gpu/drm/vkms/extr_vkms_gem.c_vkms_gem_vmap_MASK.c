
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vkms_gem_object {int pages_lock; int * pages; int vmap_count; scalar_t__ vaddr; } ;
struct page {int dummy; } ;
struct drm_gem_object {unsigned int size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page**) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct page**) ;
 int VAR_3 ;
 struct page** FUNC_2 (struct vkms_gem_object*) ;
 int FUNC_3 (struct drm_gem_object*,int *,int,int) ;
 struct vkms_gem_object* FUNC_4 (struct drm_gem_object*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct page**,unsigned int,int ,int ) ;

int FUNC_8(struct drm_gem_object *VAR_4)
{
 struct vkms_gem_object *VAR_5 = FUNC_4(VAR_4);
 int VAR_6 = 0;

 FUNC_5(&VAR_5->pages_lock);

 if (!VAR_5->vaddr) {
  unsigned int VAR_7 = VAR_4->size >> VAR_2;
  struct page **VAR_8 = FUNC_2(VAR_5);

  if (FUNC_0(VAR_8)) {
   VAR_6 = FUNC_1(VAR_8);
   goto out;
  }

  VAR_5->vaddr = FUNC_7(VAR_8, VAR_7, VAR_3, VAR_1);
  if (!VAR_5->vaddr)
   goto err_vmap;
 }

 VAR_5->vmap_count++;
 goto out;

err_vmap:
 VAR_6 = -VAR_0;
 FUNC_3(VAR_4, VAR_5->pages, 0, 1);
 VAR_5->pages = ((void*)0);
out:
 FUNC_6(&VAR_5->pages_lock);
 return VAR_6;
}
