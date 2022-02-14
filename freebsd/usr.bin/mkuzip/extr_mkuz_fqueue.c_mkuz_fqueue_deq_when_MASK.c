
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mkuz_fifo_queue {int length; int mtx; struct mkuz_bchain_link* last; struct mkuz_bchain_link* first; int cvar; } ;
struct mkuz_blk {int dummy; } ;
struct mkuz_bchain_link {struct mkuz_blk* this; struct mkuz_bchain_link* prev; } ;
typedef scalar_t__ (* cmp_cb_t ) (struct mkuz_blk*,void*) ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mkuz_bchain_link*) ;
 int FUNC_2 (struct mkuz_fifo_queue*,scalar_t__ (*) (struct mkuz_blk*,void*),void*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

struct mkuz_blk *
FUNC_6(struct mkuz_fifo_queue *VAR_0, cmp_cb_t VAR_1, void *VAR_2)
{
    struct mkuz_bchain_link *VAR_3, *VAR_4, *VAR_5, *VAR_6;
    struct mkuz_blk *VAR_7;

    FUNC_4(&VAR_0->mtx);
    while (VAR_0->last == ((void*)0) || !FUNC_2(VAR_0, VAR_1, VAR_2)) {
        FUNC_3(&VAR_0->cvar, &VAR_0->mtx);
    }
    if (VAR_1(VAR_0->last->this, VAR_2)) {
        VAR_6 = VAR_0->last;
        VAR_0->last = VAR_6->prev;
        if (VAR_0->last == ((void*)0)) {



            VAR_0->first = ((void*)0);
        }
    } else {



        VAR_5 = VAR_4 = VAR_0->last;
        VAR_6 = ((void*)0);
        for (VAR_3 = VAR_0->last->prev; VAR_3 != ((void*)0); VAR_3 = VAR_3->prev) {
            if (VAR_1(VAR_3->this, VAR_2)) {
                VAR_6 = VAR_3;
                continue;
            }
            VAR_5->prev = VAR_3;
            VAR_5 = VAR_3;
        }
        VAR_5->prev = ((void*)0);
        VAR_0->first = VAR_5;
        VAR_0->last = VAR_4;
    }
    VAR_0->length -= 1;
    FUNC_5(&VAR_0->mtx);
    VAR_7 = VAR_6->this;
    FUNC_1(VAR_6);

    return VAR_7;
}
