
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ttm_place {unsigned long fpfn; unsigned long lpfn; int flags; } ;
struct ttm_mem_type_manager {struct amdgpu_gtt_mgr* priv; int bdev; } ;
struct ttm_mem_reg {int start; int page_alignment; int num_pages; struct amdgpu_gtt_node* mm_node; } ;
struct ttm_buffer_object {int dummy; } ;
struct TYPE_4__ {int start; } ;
struct amdgpu_gtt_node {TYPE_2__ node; } ;
struct amdgpu_gtt_mgr {int lock; int mm; } ;
struct TYPE_3__ {unsigned long num_cpu_pages; } ;
struct amdgpu_device {TYPE_1__ gart; } ;
typedef enum drm_mm_insert_mode { ____Placeholder_drm_mm_insert_mode } drm_mm_insert_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ttm_mem_reg*) ;
 struct amdgpu_device* FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_2__*,int ,int ,int ,unsigned long,unsigned long,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ttm_mem_type_manager *VAR_3,
    struct ttm_buffer_object *VAR_4,
    const struct ttm_place *VAR_5,
    struct ttm_mem_reg *VAR_6)
{
 struct amdgpu_device *VAR_7 = FUNC_1(VAR_3->bdev);
 struct amdgpu_gtt_mgr *VAR_8 = VAR_3->priv;
 struct amdgpu_gtt_node *VAR_9 = VAR_6->mm_node;
 enum drm_mm_insert_mode VAR_10;
 unsigned long VAR_11, VAR_12;
 int VAR_13;

 if (FUNC_0(VAR_6))
  return 0;

 if (VAR_5)
  VAR_11 = VAR_5->fpfn;
 else
  VAR_11 = 0;

 if (VAR_5 && VAR_5->lpfn)
  VAR_12 = VAR_5->lpfn;
 else
  VAR_12 = VAR_7->gart.num_cpu_pages;

 VAR_10 = VAR_0;
 if (VAR_5 && VAR_5->flags & VAR_2)
  VAR_10 = VAR_1;

 FUNC_3(&VAR_8->lock);
 VAR_13 = FUNC_2(&VAR_8->mm, &VAR_9->node, VAR_6->num_pages,
     VAR_6->page_alignment, 0, VAR_11, VAR_12,
     VAR_10);
 FUNC_4(&VAR_8->lock);

 if (!VAR_13)
  VAR_6->start = VAR_9->node.start;

 return VAR_13;
}
