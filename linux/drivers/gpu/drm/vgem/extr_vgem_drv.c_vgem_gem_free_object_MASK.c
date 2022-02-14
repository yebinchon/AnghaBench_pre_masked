
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_vgem_gem_object {int table; int pages_lock; int pages; } ;
struct drm_gem_object {scalar_t__ import_attach; } ;


 int FUNC_0 (struct drm_gem_object*) ;
 int FUNC_1 (struct drm_gem_object*,int ) ;
 int FUNC_2 (struct drm_vgem_gem_object*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 struct drm_vgem_gem_object* FUNC_5 (struct drm_gem_object*) ;

__attribute__((used)) static void FUNC_6(struct drm_gem_object *VAR_0)
{
 struct drm_vgem_gem_object *VAR_1 = FUNC_5(VAR_0);

 FUNC_3(VAR_1->pages);
 FUNC_4(&VAR_1->pages_lock);

 if (VAR_0->import_attach)
  FUNC_1(VAR_0, VAR_1->table);

 FUNC_0(VAR_0);
 FUNC_2(VAR_1);
}
