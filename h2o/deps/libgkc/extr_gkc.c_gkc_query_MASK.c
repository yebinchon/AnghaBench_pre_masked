
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct list {struct list* next; } ;
struct gkc_tuple {double g; double delta; int value; } ;
struct gkc_summary {double nr_elems; double epsilon; struct list head; } ;


 scalar_t__ FUNC_0 (struct list*) ;
 struct gkc_tuple* FUNC_1 (struct list*) ;

uint64_t FUNC_2(struct gkc_summary *VAR_0, double VAR_1)
{
    struct list *VAR_2, *VAR_3;
    int VAR_4;
    double VAR_5;
    double VAR_6;

    VAR_4 = 0.5 + VAR_1 * VAR_0->nr_elems;
    VAR_6 = VAR_0->nr_elems * VAR_0->epsilon;
    VAR_5 = 0;
    if (FUNC_0(&VAR_0->head)) {
        return 0;
    }

    VAR_2 = VAR_0->head.next;

    while (1) {
        struct gkc_tuple *VAR_7, *VAR_8;

        VAR_7 = FUNC_1(VAR_2);
        VAR_3 = VAR_2->next;
        if (VAR_3 == &VAR_0->head) {
            return VAR_7->value;
        }
        VAR_8 = FUNC_1(VAR_3);

        VAR_5 += VAR_7->g;
        if ((VAR_4 + VAR_6) < (VAR_5 + VAR_8->g + VAR_8->delta)) {
            if ((VAR_4 + VAR_6) < (VAR_5 + VAR_8->g)) {
                return VAR_7->value;
            }
            return VAR_8->value;
        }
        VAR_2 = VAR_3;
    }
}
