
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list {struct list* next; } ;
struct gkc_tuple {double value; int g; int delta; int node; } ;
struct gkc_summary {int nr_elems; int epsilon; struct list head; } ;


 struct gkc_tuple* FUNC_0 (struct gkc_summary*) ;
 int FUNC_1 (struct gkc_summary*) ;
 int FUNC_2 (struct list*,int *) ;
 int FUNC_3 (struct list*,int *) ;
 scalar_t__ FUNC_4 (struct list*) ;
 int FUNC_5 (int *) ;
 struct gkc_tuple* FUNC_6 (struct list*) ;
 int FUNC_7 (struct gkc_tuple*,int ,int) ;

void FUNC_8(struct gkc_summary *VAR_0, double VAR_1)
{
    struct list *VAR_2 = ((void*)0);
    struct gkc_tuple *VAR_3, *VAR_4, *VAR_5 = ((void*)0);

    VAR_3 = FUNC_0(VAR_0);
    FUNC_7(VAR_3, 0, sizeof(*VAR_3));
    VAR_3->value = VAR_1;
    VAR_3->g = 1;
    FUNC_5(&VAR_3->node);


    VAR_0->nr_elems++;



    if (FUNC_4(&VAR_0->head)) {
        FUNC_2(&VAR_0->head, &VAR_3->node);
        return;
    }

    VAR_2 = VAR_0->head.next;
    VAR_4 = FUNC_6(VAR_2);

    if (VAR_4->value > VAR_3->value) {
        FUNC_2(&VAR_0->head, &VAR_3->node);
        goto out;
    }

    double VAR_6 = 0;
    while (VAR_2->next != &VAR_0->head) {
        VAR_5 = FUNC_6(VAR_2->next);
        VAR_4 = FUNC_6(VAR_2);

        VAR_6 += VAR_4->g;
        if (VAR_4->value <= VAR_3->value && VAR_3->value < VAR_5->value) {

            VAR_3->delta = VAR_4->g + VAR_4->delta - 1;
            FUNC_2(VAR_2, &VAR_3->node);
            goto out;
        }
        VAR_2 = VAR_2->next;
    }

    FUNC_3(&VAR_0->head, &VAR_3->node);
out:
    if (VAR_0->nr_elems % (int)(1/(2*VAR_0->epsilon))) {
        FUNC_1(VAR_0);
    }
}
