
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mkuz_fifo_queue {int length; int mtx; int * first; struct mkuz_bchain_link* last; int cvar; } ;
struct mkuz_blk {int dummy; } ;
struct mkuz_bchain_link {struct mkuz_blk* this; struct mkuz_bchain_link* prev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mkuz_bchain_link*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct mkuz_blk *
FUNC_5(struct mkuz_fifo_queue *VAR_0)
{
    struct mkuz_bchain_link *VAR_1;
    struct mkuz_blk *VAR_2;

    FUNC_3(&VAR_0->mtx);
    while (VAR_0->last == ((void*)0)) {
        FUNC_2(&VAR_0->cvar, &VAR_0->mtx);
    }



    VAR_1 = VAR_0->last;
    VAR_0->last = VAR_1->prev;
    if (VAR_0->last == ((void*)0)) {



        VAR_0->first = ((void*)0);
    }
    VAR_0->length -= 1;
    FUNC_4(&VAR_0->mtx);
    VAR_2 = VAR_1->this;
    FUNC_1(VAR_1);

    return VAR_2;
}
