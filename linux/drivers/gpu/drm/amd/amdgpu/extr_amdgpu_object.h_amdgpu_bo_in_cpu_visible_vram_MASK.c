
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_mm_node {unsigned int start; scalar_t__ size; } ;
struct TYPE_4__ {unsigned int visible_vram_size; } ;
struct amdgpu_device {TYPE_1__ gmc; } ;
struct TYPE_5__ {scalar_t__ mem_type; unsigned long num_pages; struct drm_mm_node* mm_node; } ;
struct TYPE_6__ {TYPE_2__ mem; int bdev; } ;
struct amdgpu_bo {TYPE_3__ tbo; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct amdgpu_device* FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct amdgpu_bo *VAR_2)
{
 struct amdgpu_device *VAR_3 = FUNC_0(VAR_2->tbo.bdev);
 unsigned VAR_4 = VAR_3->gmc.visible_vram_size >> VAR_0;
 struct drm_mm_node *VAR_5 = VAR_2->tbo.mem.mm_node;
 unsigned long VAR_6;

 if (VAR_2->tbo.mem.mem_type != VAR_1)
  return 0;

 for (VAR_6 = VAR_2->tbo.mem.num_pages; VAR_6;
      VAR_6 -= VAR_5->size, VAR_5++)
  if (VAR_5->start < VAR_4)
   return 1;

 return 0;
}
