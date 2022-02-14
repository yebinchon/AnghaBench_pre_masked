
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gem_object {scalar_t__ vmap_count; scalar_t__ vaddr; } ;



__attribute__((used)) static inline bool FUNC_0(struct msm_gem_object *VAR_0)
{
 return (VAR_0->vmap_count == 0) && VAR_0->vaddr;
}
