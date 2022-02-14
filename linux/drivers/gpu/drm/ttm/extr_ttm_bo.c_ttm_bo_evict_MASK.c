
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ttm_placement {scalar_t__ num_busy_placement; scalar_t__ num_placement; } ;
struct ttm_operation_ctx {int dummy; } ;
struct TYPE_6__ {int io_reserved_vm; scalar_t__ io_reserved_count; } ;
struct ttm_mem_reg {TYPE_3__ bus; int * mm_node; } ;
struct TYPE_4__ {int resv; } ;
struct ttm_buffer_object {int evicted; struct ttm_mem_reg mem; TYPE_1__ base; struct ttm_bo_device* bdev; } ;
struct ttm_bo_device {TYPE_2__* driver; } ;
struct TYPE_5__ {int (* evict_flags ) (struct ttm_buffer_object*,struct ttm_placement*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct ttm_buffer_object*,struct ttm_placement*) ;
 int FUNC_3 (struct ttm_buffer_object*,struct ttm_mem_reg*,int,struct ttm_operation_ctx*) ;
 int FUNC_4 (struct ttm_buffer_object*,struct ttm_mem_reg*) ;
 int FUNC_5 (struct ttm_buffer_object*,struct ttm_placement*,struct ttm_mem_reg*,struct ttm_operation_ctx*) ;
 int FUNC_6 (struct ttm_buffer_object*,struct ttm_placement*) ;
 int FUNC_7 (struct ttm_buffer_object*) ;
 int FUNC_8 (struct ttm_buffer_object*,int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct ttm_buffer_object *VAR_1,
   struct ttm_operation_ctx *VAR_2)
{
 struct ttm_bo_device *VAR_3 = VAR_1->bdev;
 struct ttm_mem_reg VAR_4;
 struct ttm_placement VAR_5;
 int VAR_6 = 0;

 FUNC_0(VAR_1->base.resv);

 VAR_5.num_placement = 0;
 VAR_5.num_busy_placement = 0;
 VAR_3->driver->evict_flags(VAR_1, &VAR_5);

 if (!VAR_5.num_placement && !VAR_5.num_busy_placement) {
  VAR_6 = FUNC_7(VAR_1);
  if (VAR_6)
   return VAR_6;

  return FUNC_8(VAR_1, 0);
 }

 VAR_4 = VAR_1->mem;
 VAR_4.mm_node = ((void*)0);
 VAR_4.bus.io_reserved_vm = 0;
 VAR_4.bus.io_reserved_count = 0;

 VAR_6 = FUNC_5(VAR_1, &VAR_5, &VAR_4, VAR_2);
 if (VAR_6) {
  if (VAR_6 != -VAR_0) {
   FUNC_1("Failed to find memory space for buffer 0x%p eviction\n",
          VAR_1);
   FUNC_6(VAR_1, &VAR_5);
  }
  goto out;
 }

 VAR_6 = FUNC_3(VAR_1, &VAR_4, 1, VAR_2);
 if (FUNC_9(VAR_6)) {
  if (VAR_6 != -VAR_0)
   FUNC_1("Buffer eviction failed\n");
  FUNC_4(VAR_1, &VAR_4);
  goto out;
 }
 VAR_1->evicted = 1;
out:
 return VAR_6;
}
