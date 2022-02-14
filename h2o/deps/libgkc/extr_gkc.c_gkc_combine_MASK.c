
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list {struct list* next; } ;
struct gkc_tuple {scalar_t__ value; scalar_t__ g; int node; int delta; } ;
struct gkc_summary {scalar_t__ epsilon; int alloced; int max_alloced; int nr_elems; struct list head; } ;


 struct gkc_tuple* FUNC_0 (struct gkc_summary*) ;
 int FUNC_1 (struct gkc_summary*) ;
 struct gkc_summary* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct list*,int *) ;
 struct gkc_tuple* FUNC_4 (struct list*) ;

struct gkc_summary *FUNC_5(struct gkc_summary *VAR_0, struct gkc_summary *VAR_1)
{
    struct gkc_summary *VAR_2;
    struct list *VAR_3, *VAR_4;
    struct gkc_tuple *VAR_5, *VAR_6, *VAR_7;

    if (VAR_0->epsilon != VAR_1->epsilon) {
        return ((void*)0);
    }
    VAR_2 = FUNC_2(VAR_0->epsilon);

    VAR_3 = VAR_0->head.next;
    VAR_4 = VAR_1->head.next;
    while (VAR_3 != &VAR_0->head && VAR_4 != &VAR_1->head) {
        VAR_5 = FUNC_4(VAR_3);
        VAR_6 = FUNC_4(VAR_4);

        VAR_7 = FUNC_0(VAR_2);
        if (VAR_5->value < VAR_6->value) {
            VAR_7->value = VAR_5->value;
            VAR_7->g = VAR_5->g;
            VAR_7->delta = VAR_5->delta;
            VAR_3 = VAR_3->next;
        } else {
            VAR_7->value = VAR_6->value;
            VAR_7->g = VAR_6->g;
            VAR_7->delta = VAR_6->delta;
            VAR_4 = VAR_4->next;
        }
        FUNC_3(&VAR_2->head, &VAR_7->node);
        VAR_2->nr_elems += VAR_7->g;
    }
    while (VAR_3 != &VAR_0->head) {
        VAR_5 = FUNC_4(VAR_3);

        VAR_7 = FUNC_0(VAR_2);
        VAR_7->value = VAR_5->value;
        VAR_7->g = VAR_5->g;
        VAR_7->delta = VAR_5->delta;
        FUNC_3(&VAR_2->head, &VAR_7->node);
        VAR_2->nr_elems += VAR_7->g;
        VAR_3 = VAR_3->next;
    }
    while (VAR_4 != &VAR_1->head) {
        VAR_6 = FUNC_4(VAR_4);

        VAR_7 = FUNC_0(VAR_2);
        VAR_7->value = VAR_6->value;
        VAR_7->g = VAR_6->g;
        VAR_7->delta = VAR_6->delta;
        FUNC_3(&VAR_2->head, &VAR_7->node);
        VAR_2->nr_elems += VAR_7->g;
        VAR_4 = VAR_4->next;
    }
    VAR_2->max_alloced = VAR_2->alloced;
    FUNC_1(VAR_2);

    return VAR_2;
}
