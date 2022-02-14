
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_vgem_gem_object {scalar_t__ pages_pin_count; int pages_lock; int * pages; int base; } ;


 int FUNC_0 (int *,int *,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct drm_vgem_gem_object *VAR_0)
{
 FUNC_1(&VAR_0->pages_lock);
 if (--VAR_0->pages_pin_count == 0) {
  FUNC_0(&VAR_0->base, VAR_0->pages, 1, 1);
  VAR_0->pages = ((void*)0);
 }
 FUNC_2(&VAR_0->pages_lock);
}
