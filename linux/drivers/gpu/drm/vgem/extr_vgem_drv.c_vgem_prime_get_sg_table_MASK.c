
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sg_table {int dummy; } ;
struct TYPE_2__ {int size; } ;
struct drm_vgem_gem_object {TYPE_1__ base; int pages; } ;
struct drm_gem_object {int dummy; } ;


 int VAR_0 ;
 struct sg_table* FUNC_0 (int ,int) ;
 struct drm_vgem_gem_object* FUNC_1 (struct drm_gem_object*) ;

__attribute__((used)) static struct sg_table *FUNC_2(struct drm_gem_object *VAR_1)
{
 struct drm_vgem_gem_object *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(VAR_2->pages, VAR_2->base.size >> VAR_0);
}
