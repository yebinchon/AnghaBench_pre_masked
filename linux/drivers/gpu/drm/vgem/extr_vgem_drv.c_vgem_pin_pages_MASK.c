
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct drm_vgem_gem_object {struct page** pages; int pages_lock; int pages_pin_count; int base; } ;


 scalar_t__ FUNC_0 (struct page**) ;
 struct page** FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct page **FUNC_4(struct drm_vgem_gem_object *VAR_0)
{
 FUNC_2(&VAR_0->pages_lock);
 if (VAR_0->pages_pin_count++ == 0) {
  struct page **VAR_1;

  VAR_1 = FUNC_1(&VAR_0->base);
  if (FUNC_0(VAR_1)) {
   VAR_0->pages_pin_count--;
   FUNC_3(&VAR_0->pages_lock);
   return VAR_1;
  }

  VAR_0->pages = VAR_1;
 }
 FUNC_3(&VAR_0->pages_lock);

 return VAR_0->pages;
}
