
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ttm_operation_ctx {int member_0; int member_1; } ;
struct TYPE_9__ {scalar_t__ start_offset; scalar_t__ size; struct amdgpu_bo* reserved_bo; int * va; } ;
struct TYPE_7__ {scalar_t__ visible_vram_size; } ;
struct amdgpu_device {TYPE_3__ fw_vram_usage; TYPE_1__ gmc; } ;
struct amdgpu_bo_param {scalar_t__ size; int flags; int * resv; int type; int domain; int byte_align; } ;
struct TYPE_10__ {int mem; } ;
struct TYPE_11__ {int num_placement; } ;
struct amdgpu_bo {TYPE_4__ tbo; TYPE_5__ placement; TYPE_2__* placements; } ;
typedef int bp ;
struct TYPE_8__ {scalar_t__ lpfn; scalar_t__ fpfn; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct amdgpu_device*,struct amdgpu_bo_param*,struct amdgpu_bo**) ;
 int FUNC_2 (struct amdgpu_bo*,int **) ;
 int FUNC_3 (struct amdgpu_bo*,int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct amdgpu_bo*,int) ;
 int FUNC_5 (struct amdgpu_bo*) ;
 int FUNC_6 (struct amdgpu_bo**) ;
 int FUNC_7 (struct amdgpu_bo*) ;
 int FUNC_8 (struct amdgpu_bo_param*,int ,int) ;
 int FUNC_9 (TYPE_4__*,int *) ;
 int FUNC_10 (TYPE_4__*,TYPE_5__*,int *,struct ttm_operation_ctx*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_11(struct amdgpu_device *VAR_6)
{
 struct ttm_operation_ctx VAR_7 = { 0, 0 };
 struct amdgpu_bo_param VAR_8;
 int VAR_9 = 0;
 int VAR_10;
 u64 VAR_11 = VAR_6->gmc.visible_vram_size;
 u64 VAR_12 = VAR_6->fw_vram_usage.start_offset;
 u64 VAR_13 = VAR_6->fw_vram_usage.size;
 struct amdgpu_bo *VAR_14;

 FUNC_8(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.size = VAR_6->fw_vram_usage.size;
 VAR_8.byte_align = VAR_4;
 VAR_8.domain = VAR_2;
 VAR_8.flags = VAR_0 |
  VAR_1;
 VAR_8.type = VAR_5;
 VAR_8.resv = ((void*)0);
 VAR_6->fw_vram_usage.va = ((void*)0);
 VAR_6->fw_vram_usage.reserved_bo = ((void*)0);

 if (VAR_6->fw_vram_usage.size > 0 &&
  VAR_6->fw_vram_usage.size <= VAR_11) {

  VAR_9 = FUNC_1(VAR_6, &VAR_8,
         &VAR_6->fw_vram_usage.reserved_bo);
  if (VAR_9)
   goto error_create;

  VAR_9 = FUNC_4(VAR_6->fw_vram_usage.reserved_bo, 0);
  if (VAR_9)
   goto error_reserve;




  VAR_14 = VAR_6->fw_vram_usage.reserved_bo;
  VAR_12 = FUNC_0(VAR_12, VAR_4);
  for (VAR_10 = 0; VAR_10 < VAR_14->placement.num_placement; ++VAR_10) {
   VAR_14->placements[VAR_10].fpfn = VAR_12 >> VAR_3;
   VAR_14->placements[VAR_10].lpfn = (VAR_12 + VAR_13) >> VAR_3;
  }

  FUNC_9(&VAR_14->tbo, &VAR_14->tbo.mem);
  VAR_9 = FUNC_10(&VAR_14->tbo, &VAR_14->placement,
         &VAR_14->tbo.mem, &VAR_7);
  if (VAR_9)
   goto error_pin;

  VAR_9 = FUNC_3(VAR_6->fw_vram_usage.reserved_bo,
   VAR_2,
   VAR_6->fw_vram_usage.start_offset,
   (VAR_6->fw_vram_usage.start_offset +
   VAR_6->fw_vram_usage.size));
  if (VAR_9)
   goto error_pin;
  VAR_9 = FUNC_2(VAR_6->fw_vram_usage.reserved_bo,
   &VAR_6->fw_vram_usage.va);
  if (VAR_9)
   goto error_kmap;

  FUNC_7(VAR_6->fw_vram_usage.reserved_bo);
 }
 return VAR_9;

error_kmap:
 FUNC_5(VAR_6->fw_vram_usage.reserved_bo);
error_pin:
 FUNC_7(VAR_6->fw_vram_usage.reserved_bo);
error_reserve:
 FUNC_6(&VAR_6->fw_vram_usage.reserved_bo);
error_create:
 VAR_6->fw_vram_usage.va = ((void*)0);
 VAR_6->fw_vram_usage.reserved_bo = ((void*)0);
 return VAR_9;
}
