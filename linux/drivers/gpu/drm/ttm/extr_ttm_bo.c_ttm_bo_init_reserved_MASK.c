
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct ttm_placement {int dummy; } ;
struct ttm_operation_ctx {int dummy; } ;
struct ttm_mem_global {int dummy; } ;
struct TYPE_5__ {int io_reserved_vm; scalar_t__ io_reserved_count; } ;
struct TYPE_7__ {unsigned long size; unsigned long num_pages; int placement; TYPE_1__ bus; int page_alignment; int * mm_node; int mem_type; } ;
struct dma_resv {int dummy; } ;
struct TYPE_6__ {struct dma_resv* resv; int vma_node; struct dma_resv _resv; } ;
struct ttm_buffer_object {void (* destroy ) (struct ttm_buffer_object*) ;int type; unsigned long num_pages; size_t acc_size; TYPE_3__ mem; TYPE_2__ base; struct ttm_bo_device* bdev; struct sg_table* sg; int * moving; int wu_mutex; int io_reserve_lru; int swap; int ddestroy; int lru; int cpu_writers; int list_kref; int kref; } ;
struct ttm_bo_device {TYPE_4__* glob; int vma_manager; } ;
struct sg_table {int dummy; } ;
typedef enum ttm_bo_type { ____Placeholder_ttm_bo_type } ttm_bo_type ;
struct TYPE_8__ {int lru_lock; int bo_count; struct ttm_mem_global* mem_glob; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct dma_resv*) ;
 int FUNC_5 (struct dma_resv*) ;
 int FUNC_6 (struct dma_resv*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,unsigned long) ;
 int FUNC_9 (struct ttm_buffer_object*) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 void FUNC_16 (struct ttm_buffer_object*) ;
 void FUNC_17 (struct ttm_buffer_object*) ;
 int FUNC_18 (struct ttm_buffer_object*) ;
 void FUNC_19 (struct ttm_buffer_object*) ;
 int FUNC_20 (struct ttm_buffer_object*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_21 (struct ttm_buffer_object*) ;
 int FUNC_22 (struct ttm_buffer_object*) ;
 int FUNC_23 (struct ttm_buffer_object*,struct ttm_placement*,struct ttm_operation_ctx*) ;
 int FUNC_24 (struct ttm_mem_global*,size_t,struct ttm_operation_ctx*) ;
 int FUNC_25 (struct ttm_mem_global*,size_t) ;
 scalar_t__ FUNC_26 (int) ;

int FUNC_27(struct ttm_bo_device *VAR_10,
    struct ttm_buffer_object *VAR_11,
    unsigned long VAR_12,
    enum ttm_bo_type VAR_13,
    struct ttm_placement *VAR_14,
    uint32_t VAR_15,
    struct ttm_operation_ctx *VAR_16,
    size_t VAR_17,
    struct sg_table *VAR_18,
    struct dma_resv *VAR_19,
    void (*VAR_20) (struct ttm_buffer_object *))
{
 int VAR_21 = 0;
 unsigned long VAR_22;
 struct ttm_mem_global *VAR_23 = VAR_10->glob->mem_glob;
 bool VAR_24;

 VAR_21 = FUNC_24(VAR_23, VAR_17, VAR_16);
 if (VAR_21) {
  FUNC_13("Out of kernel memory\n");
  if (VAR_20)
   (*VAR_20)(VAR_11);
  else
   FUNC_9(VAR_11);
  return -VAR_1;
 }

 VAR_22 = (VAR_12 + VAR_3 - 1) >> VAR_2;
 if (VAR_22 == 0) {
  FUNC_13("Illegal buffer object size\n");
  if (VAR_20)
   (*VAR_20)(VAR_11);
  else
   FUNC_9(VAR_11);
  FUNC_25(VAR_23, VAR_17);
  return -VAR_0;
 }
 VAR_11->destroy = VAR_20 ? VAR_20 : FUNC_19;

 FUNC_10(&VAR_11->kref);
 FUNC_10(&VAR_11->list_kref);
 FUNC_3(&VAR_11->cpu_writers, 0);
 FUNC_0(&VAR_11->lru);
 FUNC_0(&VAR_11->ddestroy);
 FUNC_0(&VAR_11->swap);
 FUNC_0(&VAR_11->io_reserve_lru);
 FUNC_12(&VAR_11->wu_mutex);
 VAR_11->bdev = VAR_10;
 VAR_11->type = VAR_13;
 VAR_11->num_pages = VAR_22;
 VAR_11->mem.size = VAR_22 << VAR_2;
 VAR_11->mem.mem_type = VAR_7;
 VAR_11->mem.num_pages = VAR_11->num_pages;
 VAR_11->mem.mm_node = ((void*)0);
 VAR_11->mem.page_alignment = VAR_15;
 VAR_11->mem.bus.io_reserved_vm = 0;
 VAR_11->mem.bus.io_reserved_count = 0;
 VAR_11->moving = ((void*)0);
 VAR_11->mem.placement = (VAR_6 | VAR_4);
 VAR_11->acc_size = VAR_17;
 VAR_11->sg = VAR_18;
 if (VAR_19) {
  VAR_11->base.resv = VAR_19;
  FUNC_4(VAR_11->base.resv);
 } else {
  VAR_11->base.resv = &VAR_11->base._resv;
 }
 if (!FUNC_22(VAR_11)) {




  FUNC_5(&VAR_11->base._resv);
  FUNC_7(&VAR_11->base.vma_node);
 }
 FUNC_2(&VAR_11->bdev->glob->bo_count);





 if (VAR_11->type == VAR_8 ||
     VAR_11->type == VAR_9)
  VAR_21 = FUNC_8(&VAR_10->vma_manager, &VAR_11->base.vma_node,
      VAR_11->mem.num_pages);




 if (!VAR_19) {
  VAR_24 = FUNC_6(VAR_11->base.resv);
  FUNC_1(!VAR_24);
 }

 if (FUNC_11(!VAR_21))
  VAR_21 = FUNC_23(VAR_11, VAR_14, VAR_16);

 if (FUNC_26(VAR_21)) {
  if (!VAR_19)
   FUNC_21(VAR_11);

  FUNC_20(VAR_11);
  return VAR_21;
 }

 if (VAR_19 && !(VAR_11->mem.placement & VAR_5)) {
  FUNC_14(&VAR_10->glob->lru_lock);
  FUNC_18(VAR_11);
  FUNC_15(&VAR_10->glob->lru_lock);
 }

 return VAR_21;
}
