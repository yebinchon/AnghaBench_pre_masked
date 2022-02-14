
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_printer {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_gem_cma_object {int * vaddr; int paddr; } ;


 int FUNC_0 (struct drm_printer*,unsigned int,char*,int *) ;
 struct drm_gem_cma_object* FUNC_1 (struct drm_gem_object const*) ;

void FUNC_2(struct drm_printer *VAR_0, unsigned int VAR_1,
       const struct drm_gem_object *VAR_2)
{
 const struct drm_gem_cma_object *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_0, VAR_1, "paddr=%pad\n", &VAR_3->paddr);
 FUNC_0(VAR_0, VAR_1, "vaddr=%p\n", VAR_3->vaddr);
}
