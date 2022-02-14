
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_tt {int * pages; } ;
struct ttm_operation_ctx {int interruptible; int no_wait_gpu; } ;
struct ttm_mem_reg {int placement; } ;
struct ttm_buffer_object {struct ttm_tt* ttm; struct ttm_mem_reg mem; } ;
struct ttm_bo_kmap_obj {int virtual; int bo_kmap_type; int page; } ;
typedef int pgprot_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct ttm_tt*,struct ttm_operation_ctx*) ;
 int FUNC_4 (int *,unsigned long,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct ttm_buffer_object *VAR_5,
      unsigned long VAR_6,
      unsigned long VAR_7,
      struct ttm_bo_kmap_obj *VAR_8)
{
 struct ttm_mem_reg *VAR_9 = &VAR_5->mem;
 struct ttm_operation_ctx VAR_10 = {
  .interruptible = 0,
  .no_wait_gpu = 0
 };
 struct ttm_tt *VAR_11 = VAR_5->ttm;
 pgprot_t VAR_12;
 int VAR_13;

 FUNC_0(!VAR_11);

 VAR_13 = FUNC_3(VAR_11, &VAR_10);
 if (VAR_13)
  return VAR_13;

 if (VAR_7 == 1 && (VAR_9->placement & VAR_2)) {





  VAR_8->bo_kmap_type = VAR_3;
  VAR_8->page = VAR_11->pages[VAR_6];
  VAR_8->virtual = FUNC_1(VAR_8->page);
 } else {




  VAR_12 = FUNC_2(VAR_9->placement, VAR_1);
  VAR_8->bo_kmap_type = VAR_4;
  VAR_8->virtual = FUNC_4(VAR_11->pages + VAR_6, VAR_7,
        0, VAR_12);
 }
 return (!VAR_8->virtual) ? -VAR_0 : 0;
}
