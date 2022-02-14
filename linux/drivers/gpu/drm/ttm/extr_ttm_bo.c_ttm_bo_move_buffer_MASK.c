
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ttm_placement {int dummy; } ;
struct ttm_operation_ctx {int dummy; } ;
struct TYPE_6__ {int io_reserved_vm; scalar_t__ io_reserved_count; } ;
struct ttm_mem_reg {int num_pages; int size; scalar_t__ mm_node; TYPE_3__ bus; int page_alignment; } ;
struct TYPE_5__ {int page_alignment; } ;
struct TYPE_4__ {int resv; } ;
struct ttm_buffer_object {int num_pages; TYPE_2__ mem; TYPE_1__ base; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ttm_buffer_object*,struct ttm_mem_reg*,int,struct ttm_operation_ctx*) ;
 int FUNC_2 (struct ttm_buffer_object*,struct ttm_mem_reg*) ;
 int FUNC_3 (struct ttm_buffer_object*,struct ttm_placement*,struct ttm_mem_reg*,struct ttm_operation_ctx*) ;

__attribute__((used)) static int FUNC_4(struct ttm_buffer_object *VAR_1,
         struct ttm_placement *VAR_2,
         struct ttm_operation_ctx *VAR_3)
{
 int VAR_4 = 0;
 struct ttm_mem_reg VAR_5;

 FUNC_0(VAR_1->base.resv);

 VAR_5.num_pages = VAR_1->num_pages;
 VAR_5.size = VAR_5.num_pages << VAR_0;
 VAR_5.page_alignment = VAR_1->mem.page_alignment;
 VAR_5.bus.io_reserved_vm = 0;
 VAR_5.bus.io_reserved_count = 0;



 VAR_4 = FUNC_3(VAR_1, VAR_2, &VAR_5, VAR_3);
 if (VAR_4)
  goto out_unlock;
 VAR_4 = FUNC_1(VAR_1, &VAR_5, 0, VAR_3);
out_unlock:
 if (VAR_4 && VAR_5.mm_node)
  FUNC_2(VAR_1, &VAR_5);
 return VAR_4;
}
