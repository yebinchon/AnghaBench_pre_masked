
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int _resv; int * resv; } ;
struct TYPE_3__ {int placement; } ;
struct ttm_buffer_object {int ddestroy; int list_kref; TYPE_2__ base; TYPE_1__ mem; struct ttm_bo_device* bdev; } ;
struct ttm_bo_global {int lru_lock; } ;
struct ttm_bo_device {int wq; int ddestroy; struct ttm_bo_global* glob; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ttm_buffer_object*) ;
 int FUNC_10 (struct ttm_buffer_object*) ;
 int FUNC_11 (struct ttm_buffer_object*) ;
 int FUNC_12 (struct ttm_buffer_object*) ;
 int FUNC_13 (struct ttm_buffer_object*) ;

__attribute__((used)) static void FUNC_14(struct ttm_buffer_object *VAR_3)
{
 struct ttm_bo_device *VAR_4 = VAR_3->bdev;
 struct ttm_bo_global *VAR_5 = VAR_4->glob;
 int VAR_6;

 VAR_6 = FUNC_13(VAR_3);
 if (VAR_6) {



  FUNC_3(VAR_3->base.resv, 1, 0,
          30 * VAR_1);
  FUNC_7(&VAR_5->lru_lock);
  goto error;
 }

 FUNC_7(&VAR_5->lru_lock);
 VAR_6 = FUNC_1(VAR_3->base.resv) ? 0 : -VAR_0;
 if (!VAR_6) {
  if (FUNC_0(&VAR_3->base._resv, 1)) {
   FUNC_11(VAR_3);
   FUNC_8(&VAR_5->lru_lock);
   if (VAR_3->base.resv != &VAR_3->base._resv)
    FUNC_2(&VAR_3->base._resv);

   FUNC_10(VAR_3);
   FUNC_2(VAR_3->base.resv);
   return;
  }

  FUNC_12(VAR_3);






  if (VAR_3->mem.placement & VAR_2) {
   VAR_3->mem.placement &= ~VAR_2;
   FUNC_9(VAR_3);
  }

  FUNC_2(VAR_3->base.resv);
 }
 if (VAR_3->base.resv != &VAR_3->base._resv)
  FUNC_2(&VAR_3->base._resv);

error:
 FUNC_4(&VAR_3->list_kref);
 FUNC_5(&VAR_3->ddestroy, &VAR_4->ddestroy);
 FUNC_8(&VAR_5->lru_lock);

 FUNC_6(&VAR_4->wq,
         ((VAR_1 / 100) < 1) ? 1 : VAR_1 / 100);
}
