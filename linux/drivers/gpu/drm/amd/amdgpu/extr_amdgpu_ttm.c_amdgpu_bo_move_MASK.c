
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ttm_operation_ctx {int no_wait_gpu; } ;
struct ttm_mem_reg {scalar_t__ mem_type; } ;
struct ttm_buffer_object {scalar_t__ type; scalar_t__ num_pages; int * ttm; int bdev; struct ttm_mem_reg mem; } ;
struct TYPE_2__ {int buffer_funcs_enabled; } ;
struct amdgpu_device {int num_bytes_moved; TYPE_1__ mman; } ;
struct amdgpu_bo {scalar_t__ pin_count; int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct amdgpu_device*,struct ttm_mem_reg*) ;
 int FUNC_2 (struct ttm_buffer_object*,int,int ,struct ttm_mem_reg*,struct ttm_mem_reg*) ;
 int FUNC_3 (struct ttm_buffer_object*,struct ttm_mem_reg*) ;
 int FUNC_4 (struct ttm_buffer_object*,int,struct ttm_operation_ctx*,struct ttm_mem_reg*) ;
 int FUNC_5 (struct ttm_buffer_object*,int,struct ttm_operation_ctx*,struct ttm_mem_reg*) ;
 struct amdgpu_device* FUNC_6 (int ) ;
 int FUNC_7 (int,int *) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct ttm_buffer_object*,struct ttm_operation_ctx*,struct ttm_mem_reg*) ;
 scalar_t__ VAR_10 ;
 struct amdgpu_bo* FUNC_10 (struct ttm_buffer_object*) ;

__attribute__((used)) static int FUNC_11(struct ttm_buffer_object *VAR_11, bool VAR_12,
     struct ttm_operation_ctx *VAR_13,
     struct ttm_mem_reg *VAR_14)
{
 struct amdgpu_device *VAR_15;
 struct amdgpu_bo *VAR_16;
 struct ttm_mem_reg *VAR_17 = &VAR_11->mem;
 int VAR_18;


 VAR_16 = FUNC_10(VAR_11);
 if (FUNC_0(VAR_16->pin_count > 0))
  return -VAR_4;

 VAR_15 = FUNC_6(VAR_11->bdev);

 if (VAR_17->mem_type == VAR_7 && VAR_11->ttm == ((void*)0)) {
  FUNC_3(VAR_11, VAR_14);
  return 0;
 }
 if ((VAR_17->mem_type == VAR_8 &&
      VAR_14->mem_type == VAR_7) ||
     (VAR_17->mem_type == VAR_7 &&
      VAR_14->mem_type == VAR_8)) {

  FUNC_3(VAR_11, VAR_14);
  return 0;
 }
 if (VAR_17->mem_type == VAR_1 ||
     VAR_17->mem_type == VAR_2 ||
     VAR_17->mem_type == VAR_3 ||
     VAR_14->mem_type == VAR_1 ||
     VAR_14->mem_type == VAR_2 ||
     VAR_14->mem_type == VAR_3) {

  FUNC_3(VAR_11, VAR_14);
  return 0;
 }

 if (!VAR_15->mman.buffer_funcs_enabled) {
  VAR_18 = -VAR_5;
  goto memcpy;
 }

 if (VAR_17->mem_type == VAR_9 &&
     VAR_14->mem_type == VAR_7) {
  VAR_18 = FUNC_5(VAR_11, VAR_12, VAR_13, VAR_14);
 } else if (VAR_17->mem_type == VAR_7 &&
     VAR_14->mem_type == VAR_9) {
  VAR_18 = FUNC_4(VAR_11, VAR_12, VAR_13, VAR_14);
 } else {
  VAR_18 = FUNC_2(VAR_11, VAR_12, VAR_13->no_wait_gpu,
         VAR_14, VAR_17);
 }

 if (VAR_18) {
memcpy:

  if (!FUNC_1(VAR_15, VAR_17) ||
      !FUNC_1(VAR_15, VAR_14)) {
   FUNC_8("Move buffer fallback to memcpy unavailable\n");
   return VAR_18;
  }

  VAR_18 = FUNC_9(VAR_11, VAR_13, VAR_14);
  if (VAR_18)
   return VAR_18;
 }

 if (VAR_11->type == VAR_10 &&
     VAR_14->mem_type == VAR_9 &&
     VAR_17->mem_type != VAR_9) {



  VAR_16->flags &= ~VAR_0;
 }


 FUNC_7((u64)VAR_11->num_pages << VAR_6, &VAR_15->num_bytes_moved);
 return 0;
}
