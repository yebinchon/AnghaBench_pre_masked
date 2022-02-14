
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_mem_reg {scalar_t__ mem_type; int num_pages; struct drm_mm_node* mm_node; } ;
struct drm_mm_node {int size; int start; } ;
struct TYPE_2__ {int visible_vram_size; } ;
struct amdgpu_device {TYPE_1__ gmc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool FUNC_0(struct amdgpu_device *VAR_4,
          struct ttm_mem_reg *VAR_5)
{
 struct drm_mm_node *VAR_6 = VAR_5->mm_node;

 if (VAR_5->mem_type == VAR_1 ||
     VAR_5->mem_type == VAR_2)
  return 1;
 if (VAR_5->mem_type != VAR_3)
  return 0;


 if (VAR_6->size != VAR_5->num_pages)
  return 0;

 return ((VAR_6->start + VAR_6->size) << VAR_0)
  <= VAR_4->gmc.visible_vram_size;
}
