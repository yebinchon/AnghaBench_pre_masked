
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mkuz_fifo_queue {scalar_t__ length; scalar_t__ wakeup_len; int mtx; int cvar; struct mkuz_bchain_link* first; struct mkuz_bchain_link* last; } ;
struct mkuz_blk {int dummy; } ;
struct mkuz_bchain_link {struct mkuz_bchain_link* prev; struct mkuz_blk* this; } ;


 struct mkuz_bchain_link* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct mkuz_fifo_queue *VAR_0, struct mkuz_blk *VAR_1)
{
    struct mkuz_bchain_link *VAR_2;

    VAR_2 = FUNC_0(sizeof(struct mkuz_bchain_link));
    VAR_2->this = VAR_1;

    FUNC_2(&VAR_0->mtx);
    if (VAR_0->first != ((void*)0)) {
        VAR_0->first->prev = VAR_2;
    } else {
        VAR_0->last = VAR_2;
    }
    VAR_0->first = VAR_2;
    VAR_0->length += 1;
    if (VAR_0->length >= VAR_0->wakeup_len) {
        FUNC_1(&VAR_0->cvar);
    }
    FUNC_3(&VAR_0->mtx);
}
