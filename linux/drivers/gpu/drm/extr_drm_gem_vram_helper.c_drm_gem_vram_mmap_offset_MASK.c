
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int vma_node; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct drm_gem_vram_object {TYPE_2__ bo; } ;


 int FUNC_0 (int *) ;

u64 FUNC_1(struct drm_gem_vram_object *VAR_0)
{
 return FUNC_0(&VAR_0->bo.base.vma_node);
}
