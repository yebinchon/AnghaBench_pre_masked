
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ u64 ;
struct drm_mm_node {scalar_t__ start; scalar_t__ size; } ;
struct TYPE_2__ {scalar_t__ visible_vram_size; } ;
struct amdgpu_device {TYPE_1__ gmc; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u64 FUNC_0(struct amdgpu_device *VAR_1,
        struct drm_mm_node *VAR_2)
{
 uint64_t VAR_3 = VAR_2->start << VAR_0;
 uint64_t VAR_4 = (VAR_2->size + VAR_2->start) << VAR_0;

 if (VAR_3 >= VAR_1->gmc.visible_vram_size)
  return 0;

 return (VAR_4 > VAR_1->gmc.visible_vram_size ?
  VAR_1->gmc.visible_vram_size : VAR_4) - VAR_3;
}
