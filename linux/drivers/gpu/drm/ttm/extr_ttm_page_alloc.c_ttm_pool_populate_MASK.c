
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ttm_tt {scalar_t__ state; unsigned int num_pages; int page_flags; int * pages; int caching_state; TYPE_2__* bdev; } ;
struct ttm_operation_ctx {int dummy; } ;
struct ttm_mem_global {int dummy; } ;
struct TYPE_4__ {TYPE_1__* glob; } ;
struct TYPE_3__ {struct ttm_mem_global* mem_glob; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct ttm_mem_global*,unsigned int,struct ttm_operation_ctx*) ;
 int FUNC_1 (int *,unsigned int,int,int ) ;
 int FUNC_2 (struct ttm_mem_global*,int ,int ,struct ttm_operation_ctx*) ;
 int FUNC_3 (struct ttm_tt*) ;
 int FUNC_4 (struct ttm_tt*,unsigned int) ;
 int FUNC_5 (struct ttm_tt*) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct ttm_tt *VAR_5, struct ttm_operation_ctx *VAR_6)
{
 struct ttm_mem_global *VAR_7 = VAR_5->bdev->glob->mem_glob;
 unsigned VAR_8;
 int VAR_9;

 if (VAR_5->state != VAR_4)
  return 0;

 if (FUNC_0(VAR_7, VAR_5->num_pages, VAR_6))
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_5->pages, VAR_5->num_pages, VAR_5->page_flags,
       VAR_5->caching_state);
 if (FUNC_6(VAR_9 != 0)) {
  FUNC_4(VAR_5, 0);
  return VAR_9;
 }

 for (VAR_8 = 0; VAR_8 < VAR_5->num_pages; ++VAR_8) {
  VAR_9 = FUNC_2(VAR_7, VAR_5->pages[VAR_8],
      VAR_1, VAR_6);
  if (FUNC_6(VAR_9 != 0)) {
   FUNC_4(VAR_5, VAR_8);
   return -VAR_0;
  }
 }

 if (FUNC_6(VAR_5->page_flags & VAR_2)) {
  VAR_9 = FUNC_5(VAR_5);
  if (FUNC_6(VAR_9 != 0)) {
   FUNC_3(VAR_5);
   return VAR_9;
  }
 }

 VAR_5->state = VAR_3;
 return 0;
}
