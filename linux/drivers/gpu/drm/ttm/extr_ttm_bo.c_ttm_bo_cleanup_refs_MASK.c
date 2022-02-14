
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dma_resv {int dummy; } ;
struct TYPE_4__ {struct dma_resv* resv; struct dma_resv _resv; } ;
struct ttm_buffer_object {TYPE_2__ base; int list_kref; int ddestroy; TYPE_1__* bdev; } ;
struct ttm_bo_global {int lru_lock; } ;
struct TYPE_3__ {struct ttm_bo_global* glob; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dma_resv*,int) ;
 int FUNC_1 (struct dma_resv*) ;
 int FUNC_2 (struct dma_resv*) ;
 long FUNC_3 (struct dma_resv*,int,int,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ttm_buffer_object*) ;
 int FUNC_10 (struct ttm_buffer_object*) ;
 int VAR_2 ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct ttm_buffer_object *VAR_3,
          bool VAR_4, bool VAR_5,
          bool VAR_6)
{
 struct ttm_bo_global *VAR_7 = VAR_3->bdev->glob;
 struct dma_resv *VAR_8;
 int VAR_9;

 if (FUNC_11(FUNC_6(&VAR_3->ddestroy)))
  VAR_8 = VAR_3->base.resv;
 else
  VAR_8 = &VAR_3->base._resv;

 if (FUNC_0(VAR_8, 1))
  VAR_9 = 0;
 else
  VAR_9 = -VAR_0;

 if (VAR_9 && !VAR_5) {
  long VAR_10;

  if (VAR_6)
   FUNC_2(VAR_3->base.resv);
  FUNC_8(&VAR_7->lru_lock);

  VAR_10 = FUNC_3(VAR_8, 1,
          VAR_4,
          30 * VAR_1);

  if (VAR_10 < 0)
   return VAR_10;
  else if (VAR_10 == 0)
   return -VAR_0;

  FUNC_7(&VAR_7->lru_lock);
  if (VAR_6 && !FUNC_1(VAR_3->base.resv)) {
   FUNC_8(&VAR_7->lru_lock);
   return 0;
  }
  VAR_9 = 0;
 }

 if (VAR_9 || FUNC_11(FUNC_6(&VAR_3->ddestroy))) {
  if (VAR_6)
   FUNC_2(VAR_3->base.resv);
  FUNC_8(&VAR_7->lru_lock);
  return VAR_9;
 }

 FUNC_10(VAR_3);
 FUNC_5(&VAR_3->ddestroy);
 FUNC_4(&VAR_3->list_kref, VAR_2);

 FUNC_8(&VAR_7->lru_lock);
 FUNC_9(VAR_3);

 if (VAR_6)
  FUNC_2(VAR_3->base.resv);

 return 0;
}
