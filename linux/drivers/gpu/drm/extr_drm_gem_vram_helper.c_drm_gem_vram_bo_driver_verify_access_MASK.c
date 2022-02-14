
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ttm_buffer_object {int dummy; } ;
struct file {int private_data; } ;
struct TYPE_3__ {int vma_node; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct drm_gem_vram_object {TYPE_2__ bo; } ;


 struct drm_gem_vram_object* FUNC_0 (struct ttm_buffer_object*) ;
 int FUNC_1 (int *,int ) ;

int FUNC_2(struct ttm_buffer_object *VAR_0,
      struct file *VAR_1)
{
 struct drm_gem_vram_object *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(&VAR_2->bo.base.vma_node,
       VAR_1->private_data);
}
