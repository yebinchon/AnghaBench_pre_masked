
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ttm_lru_bulk_move {int * swap; int * vram; int * tt; } ;
struct TYPE_4__ {int placement; int mem_type; } ;
struct TYPE_6__ {int resv; } ;
struct ttm_buffer_object {size_t priority; TYPE_2__* ttm; TYPE_1__ mem; TYPE_3__ base; } ;
struct TYPE_5__ {int page_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ttm_buffer_object*) ;
 int FUNC_2 (int *,struct ttm_buffer_object*) ;
 int FUNC_3 (struct ttm_buffer_object*) ;

void FUNC_4(struct ttm_buffer_object *VAR_3,
        struct ttm_lru_bulk_move *VAR_4)
{
 FUNC_0(VAR_3->base.resv);

 FUNC_3(VAR_3);
 FUNC_1(VAR_3);

 if (VAR_4 && !(VAR_3->mem.placement & VAR_2)) {
  switch (VAR_3->mem.mem_type) {
  case 129:
   FUNC_2(&VAR_4->tt[VAR_3->priority], VAR_3);
   break;

  case 128:
   FUNC_2(&VAR_4->vram[VAR_3->priority], VAR_3);
   break;
  }
  if (VAR_3->ttm && !(VAR_3->ttm->page_flags &
     (VAR_0 | VAR_1)))
   FUNC_2(&VAR_4->swap[VAR_3->priority], VAR_3);
 }
}
