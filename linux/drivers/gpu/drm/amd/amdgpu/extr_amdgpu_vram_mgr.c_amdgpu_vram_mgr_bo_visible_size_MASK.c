
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ttm_mem_reg {unsigned int num_pages; scalar_t__ start; struct drm_mm_node* mm_node; } ;
struct drm_mm_node {scalar_t__ size; } ;
struct TYPE_4__ {scalar_t__ visible_vram_size; } ;
struct amdgpu_device {TYPE_2__ gmc; } ;
struct TYPE_3__ {struct ttm_mem_reg mem; int bdev; } ;
struct amdgpu_bo {TYPE_1__ tbo; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct amdgpu_bo*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 struct amdgpu_device* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*,struct drm_mm_node*) ;

u64 FUNC_4(struct amdgpu_bo *VAR_1)
{
 struct amdgpu_device *VAR_2 = FUNC_2(VAR_1->tbo.bdev);
 struct ttm_mem_reg *VAR_3 = &VAR_1->tbo.mem;
 struct drm_mm_node *VAR_4 = VAR_3->mm_node;
 unsigned VAR_5 = VAR_3->num_pages;
 u64 VAR_6;

 if (FUNC_1(&VAR_2->gmc))
  return FUNC_0(VAR_1);

 if (VAR_3->start >= VAR_2->gmc.visible_vram_size >> VAR_0)
  return 0;

 for (VAR_6 = 0; VAR_4 && VAR_5; VAR_5 -= VAR_4->size, VAR_4++)
  VAR_6 += FUNC_3(VAR_2, VAR_4);

 return VAR_6;
}
