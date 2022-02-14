
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ttm_operation_ctx {int member_0; int member_1; } ;
struct TYPE_4__ {scalar_t__ mem_type; unsigned long num_pages; unsigned long start; } ;
struct ttm_buffer_object {TYPE_1__ mem; int bdev; } ;
struct TYPE_5__ {unsigned long visible_vram_size; } ;
struct amdgpu_device {TYPE_2__ gmc; int num_vram_cpu_page_faults; } ;
struct TYPE_6__ {int num_busy_placement; int * busy_placement; } ;
struct amdgpu_bo {scalar_t__ pin_count; TYPE_3__ placement; int * placements; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct ttm_buffer_object*) ;
 int FUNC_1 (struct amdgpu_bo*,int) ;
 struct amdgpu_device* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ttm_buffer_object*,TYPE_3__*,struct ttm_operation_ctx*) ;
 struct amdgpu_bo* FUNC_5 (struct ttm_buffer_object*) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct ttm_buffer_object *VAR_6)
{
 struct amdgpu_device *VAR_7 = FUNC_2(VAR_6->bdev);
 struct ttm_operation_ctx VAR_8 = { 0, 0 };
 struct amdgpu_bo *VAR_9;
 unsigned long VAR_10, VAR_11;
 int VAR_12;

 if (!FUNC_0(VAR_6))
  return 0;

 VAR_9 = FUNC_5(VAR_6);


 VAR_9->flags |= VAR_0;

 if (VAR_6->mem.mem_type != VAR_5)
  return 0;

 VAR_11 = VAR_6->mem.num_pages << VAR_4;
 VAR_10 = VAR_6->mem.start << VAR_4;
 if ((VAR_10 + VAR_11) <= VAR_7->gmc.visible_vram_size)
  return 0;


 if (VAR_9->pin_count > 0)
  return -VAR_3;


 FUNC_3(&VAR_7->num_vram_cpu_page_faults);
 FUNC_1(VAR_9, VAR_2 |
     VAR_1);


 VAR_9->placement.num_busy_placement = 1;
 VAR_9->placement.busy_placement = &VAR_9->placements[1];

 VAR_12 = FUNC_4(VAR_6, &VAR_9->placement, &VAR_8);
 if (FUNC_6(VAR_12 != 0))
  return VAR_12;

 VAR_10 = VAR_6->mem.start << VAR_4;

 if (VAR_6->mem.mem_type == VAR_5 &&
     (VAR_10 + VAR_11) > VAR_7->gmc.visible_vram_size)
  return -VAR_3;

 return 0;
}
