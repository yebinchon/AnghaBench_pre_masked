
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct etnaviv_gem_object {void* vaddr; int lock; TYPE_1__* ops; } ;
struct drm_gem_object {int dummy; } ;
struct TYPE_2__ {void* (* vmap ) (struct etnaviv_gem_object*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (struct etnaviv_gem_object*) ;
 struct etnaviv_gem_object* FUNC_3 (struct drm_gem_object*) ;

void *FUNC_4(struct drm_gem_object *VAR_0)
{
 struct etnaviv_gem_object *VAR_1 = FUNC_3(VAR_0);

 if (VAR_1->vaddr)
  return VAR_1->vaddr;

 FUNC_0(&VAR_1->lock);




 if (!VAR_1->vaddr)
  VAR_1->vaddr = VAR_1->ops->vmap(VAR_1);
 FUNC_1(&VAR_1->lock);

 return VAR_1->vaddr;
}
