
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_tt {scalar_t__ state; int page_flags; } ;
struct ttm_operation_ctx {int no_wait_gpu; int interruptible; } ;
struct ttm_mem_type_manager {int flags; } ;
struct ttm_mem_reg {size_t mem_type; int num_pages; scalar_t__ start; scalar_t__ size; int * mm_node; int placement; } ;
struct ttm_buffer_object {struct ttm_tt* ttm; struct ttm_mem_reg mem; struct ttm_bo_device* bdev; } ;
struct ttm_bo_device {struct ttm_mem_type_manager* man; } ;
typedef int pgprot_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (void*,int ,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct ttm_buffer_object*,struct ttm_mem_reg*) ;
 int FUNC_3 (struct ttm_buffer_object*,int ,int ) ;
 int FUNC_4 (void*,void*,unsigned long) ;
 int FUNC_5 (struct ttm_tt*,void*,unsigned long,int ) ;
 int FUNC_6 (struct ttm_tt*,void*,unsigned long,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct ttm_bo_device*,struct ttm_mem_reg*,void**) ;
 int FUNC_9 (struct ttm_bo_device*,struct ttm_mem_reg*,void*) ;
 int FUNC_10 (struct ttm_tt*) ;
 int FUNC_11 (struct ttm_tt*,struct ttm_operation_ctx*) ;

int FUNC_12(struct ttm_buffer_object *VAR_5,
         struct ttm_operation_ctx *VAR_6,
         struct ttm_mem_reg *VAR_7)
{
 struct ttm_bo_device *VAR_8 = VAR_5->bdev;
 struct ttm_mem_type_manager *VAR_9 = &VAR_8->man[VAR_7->mem_type];
 struct ttm_tt *VAR_10 = VAR_5->ttm;
 struct ttm_mem_reg *VAR_11 = &VAR_5->mem;
 struct ttm_mem_reg VAR_12 = *VAR_11;
 void *VAR_13;
 void *VAR_14;
 int VAR_15;
 unsigned long VAR_16;
 unsigned long VAR_17;
 unsigned long VAR_18 = 0;
 int VAR_19;

 VAR_15 = FUNC_3(VAR_5, VAR_6->interruptible, VAR_6->no_wait_gpu);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_8(VAR_8, VAR_11, &VAR_13);
 if (VAR_15)
  return VAR_15;
 VAR_15 = FUNC_8(VAR_8, VAR_7, &VAR_14);
 if (VAR_15)
  goto out;




 if (VAR_13 == ((void*)0) && VAR_14 == ((void*)0))
  goto out2;




 if (VAR_13 == ((void*)0) &&
     (VAR_10 == ((void*)0) || (VAR_10->state == VAR_4 &&
        !(VAR_10->page_flags & VAR_3)))) {
  FUNC_1(VAR_14, 0, VAR_7->num_pages*VAR_1);
  goto out2;
 }




 if (VAR_10) {
  VAR_15 = FUNC_11(VAR_10, VAR_6);
  if (VAR_15)
   goto out1;
 }

 VAR_18 = 0;
 VAR_19 = 1;

 if ((VAR_11->mem_type == VAR_7->mem_type) &&
     (VAR_7->start < VAR_11->start + VAR_11->size)) {
  VAR_19 = -1;
  VAR_18 = VAR_7->num_pages - 1;
 }

 for (VAR_16 = 0; VAR_16 < VAR_7->num_pages; ++VAR_16) {
  VAR_17 = VAR_16 * VAR_19 + VAR_18;
  if (VAR_13 == ((void*)0)) {
   pgprot_t VAR_20 = FUNC_7(VAR_11->placement,
          VAR_0);
   VAR_15 = FUNC_6(VAR_10, VAR_14, VAR_17,
         VAR_20);
  } else if (VAR_14 == ((void*)0)) {
   pgprot_t VAR_21 = FUNC_7(VAR_7->placement,
          VAR_0);
   VAR_15 = FUNC_5(VAR_10, VAR_13, VAR_17,
         VAR_21);
  } else {
   VAR_15 = FUNC_4(VAR_14, VAR_13, VAR_17);
  }
  if (VAR_15)
   goto out1;
 }
 FUNC_0();
out2:
 VAR_12 = *VAR_11;
 *VAR_11 = *VAR_7;
 VAR_7->mm_node = ((void*)0);

 if (VAR_9->flags & VAR_2) {
  FUNC_10(VAR_10);
  VAR_5->ttm = ((void*)0);
 }

out1:
 FUNC_9(VAR_8, VAR_11, VAR_14);
out:
 FUNC_9(VAR_8, &VAR_12, VAR_13);




 if (!VAR_15)
  FUNC_2(VAR_5, &VAR_12);
 return VAR_15;
}
