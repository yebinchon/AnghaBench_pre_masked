
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ttm_mem_type_manager {struct list_head* lru; } ;
struct ttm_lru_bulk_move_pos {TYPE_6__* last; TYPE_5__* first; } ;
struct ttm_lru_bulk_move {struct ttm_lru_bulk_move_pos* swap; struct ttm_lru_bulk_move_pos* vram; struct ttm_lru_bulk_move_pos* tt; } ;
struct list_head {int dummy; } ;
struct TYPE_8__ {int resv; } ;
struct TYPE_12__ {int swap; TYPE_2__ base; int lru; } ;
struct TYPE_7__ {int resv; } ;
struct TYPE_11__ {int swap; TYPE_4__* bdev; TYPE_1__ base; int lru; } ;
struct TYPE_10__ {TYPE_3__* glob; struct ttm_mem_type_manager* man; } ;
struct TYPE_9__ {struct list_head* swap_lru; } ;


 unsigned int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct list_head*,int *,int *) ;

void FUNC_2(struct ttm_lru_bulk_move *VAR_3)
{
 unsigned VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  struct ttm_lru_bulk_move_pos *VAR_5 = &VAR_3->tt[VAR_4];
  struct ttm_mem_type_manager *VAR_6;

  if (!VAR_5->first)
   continue;

  FUNC_0(VAR_5->first->base.resv);
  FUNC_0(VAR_5->last->base.resv);

  VAR_6 = &VAR_5->first->bdev->man[VAR_1];
  FUNC_1(&VAR_6->lru[VAR_4], &VAR_5->first->lru,
        &VAR_5->last->lru);
 }

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  struct ttm_lru_bulk_move_pos *VAR_7 = &VAR_3->vram[VAR_4];
  struct ttm_mem_type_manager *VAR_8;

  if (!VAR_7->first)
   continue;

  FUNC_0(VAR_7->first->base.resv);
  FUNC_0(VAR_7->last->base.resv);

  VAR_8 = &VAR_7->first->bdev->man[VAR_2];
  FUNC_1(&VAR_8->lru[VAR_4], &VAR_7->first->lru,
        &VAR_7->last->lru);
 }

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  struct ttm_lru_bulk_move_pos *VAR_9 = &VAR_3->swap[VAR_4];
  struct list_head *VAR_10;

  if (!VAR_9->first)
   continue;

  FUNC_0(VAR_9->first->base.resv);
  FUNC_0(VAR_9->last->base.resv);

  VAR_10 = &VAR_9->first->bdev->glob->swap_lru[VAR_4];
  FUNC_1(VAR_10, &VAR_9->first->swap, &VAR_9->last->swap);
 }
}
