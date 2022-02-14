
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vmw_diff_cpy {scalar_t__ line_offset; scalar_t__ line; } ;
struct vmw_bo_blit_line_data {void* dst_prot; int * dst_addr; void* src_prot; int * src_addr; struct vmw_diff_cpy* diff; int src_num_pages; int dst_num_pages; int src_pages; int dst_pages; scalar_t__ mapped_src; scalar_t__ mapped_dst; } ;
struct ttm_operation_ctx {int interruptible; int no_wait_gpu; } ;
struct TYPE_10__ {int placement; } ;
struct TYPE_7__ {int resv; } ;
struct ttm_buffer_object {TYPE_4__ mem; int num_pages; TYPE_5__* ttm; TYPE_1__ base; } ;
struct TYPE_11__ {scalar_t__ state; int pages; TYPE_3__* bdev; } ;
struct TYPE_9__ {TYPE_2__* driver; } ;
struct TYPE_8__ {int (* ttm_tt_populate ) (TYPE_5__*,struct ttm_operation_ctx*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*,struct ttm_operation_ctx*) ;
 int FUNC_2 (TYPE_5__*,struct ttm_operation_ctx*) ;
 scalar_t__ VAR_2 ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,void*) ;
 int FUNC_5 (struct vmw_bo_blit_line_data*,scalar_t__,scalar_t__,scalar_t__) ;

int FUNC_6(struct ttm_buffer_object *VAR_3,
      u32 VAR_4, u32 VAR_5,
      struct ttm_buffer_object *VAR_6,
      u32 VAR_7, u32 VAR_8,
      u32 VAR_9, u32 VAR_10,
      struct vmw_diff_cpy *VAR_11)
{
 struct ttm_operation_ctx VAR_12 = {
  .interruptible = 0,
  .no_wait_gpu = 0
 };
 u32 VAR_13, VAR_14 = VAR_4 / VAR_5;
 struct vmw_bo_blit_line_data VAR_15;
 int VAR_16 = 0;


 if (!(VAR_3->mem.placement & VAR_1))
  FUNC_0(VAR_3->base.resv);
 if (!(VAR_6->mem.placement & VAR_1))
  FUNC_0(VAR_6->base.resv);

 if (VAR_3->ttm->state == VAR_2) {
  VAR_16 = VAR_3->ttm->bdev->driver->ttm_tt_populate(VAR_3->ttm, &VAR_12);
  if (VAR_16)
   return VAR_16;
 }

 if (VAR_6->ttm->state == VAR_2) {
  VAR_16 = VAR_6->ttm->bdev->driver->ttm_tt_populate(VAR_6->ttm, &VAR_12);
  if (VAR_16)
   return VAR_16;
 }

 VAR_15.mapped_dst = 0;
 VAR_15.mapped_src = 0;
 VAR_15.dst_addr = ((void*)0);
 VAR_15.src_addr = ((void*)0);
 VAR_15.dst_pages = VAR_3->ttm->pages;
 VAR_15.src_pages = VAR_6->ttm->pages;
 VAR_15.dst_num_pages = VAR_3->num_pages;
 VAR_15.src_num_pages = VAR_6->num_pages;
 VAR_15.dst_prot = FUNC_3(VAR_3->mem.placement, VAR_0);
 VAR_15.src_prot = FUNC_3(VAR_6->mem.placement, VAR_0);
 VAR_15.diff = VAR_11;

 for (VAR_13 = 0; VAR_13 < VAR_10; ++VAR_13) {
  VAR_11->line = VAR_13 + VAR_14;
  VAR_11->line_offset = VAR_4 % VAR_5;
  VAR_16 = FUNC_5(&VAR_15, VAR_4, VAR_7, VAR_9);
  if (VAR_16)
   goto out;

  VAR_4 += VAR_5;
  VAR_7 += VAR_8;
 }
out:
 if (VAR_15.src_addr)
  FUNC_4(VAR_15.src_addr, VAR_15.src_prot);
 if (VAR_15.dst_addr)
  FUNC_4(VAR_15.dst_addr, VAR_15.dst_prot);

 return VAR_16;
}
