
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct list {struct list* next; } ;
struct gkc_tuple {scalar_t__ g; int delta; } ;
struct gkc_summary {int nr_elems; int epsilon; scalar_t__ alloced; struct list head; } ;


 int FUNC_0 (int) ;
 struct gkc_tuple* FUNC_1 (struct list*) ;

void FUNC_2(struct gkc_summary *VAR_0)
{
    uint64_t VAR_1, VAR_2;
    struct list *VAR_3;
    struct gkc_tuple *VAR_4;

    VAR_1 = 0;
    VAR_2 = 0;
    VAR_3 = VAR_0->head.next;
    while (VAR_3 != &VAR_0->head) {
        VAR_4 = FUNC_1(VAR_3);
        VAR_3 = VAR_3->next;
        VAR_1 += VAR_4->g;
        VAR_2++;
        if (VAR_0->nr_elems > (1/VAR_0->epsilon)) {

            FUNC_0(VAR_4->g + VAR_4->delta <= (VAR_0->nr_elems * VAR_0->epsilon * 2));
        }
        FUNC_0(VAR_2 <= VAR_0->alloced);
    }
    FUNC_0(VAR_1 == VAR_0->nr_elems);
    FUNC_0(VAR_2 == VAR_0->alloced);
}
