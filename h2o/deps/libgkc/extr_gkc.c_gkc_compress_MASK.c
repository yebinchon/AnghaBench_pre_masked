
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct list {struct list* prev; } ;
struct gkc_tuple {int delta; int g; } ;
struct gkc_summary {int epsilon; int nr_elems; struct list head; } ;


 scalar_t__ FUNC_0 (struct gkc_summary*,int) ;
 int FUNC_1 (struct gkc_summary*,struct gkc_tuple*) ;
 int FUNC_2 (struct list*) ;
 struct gkc_tuple* FUNC_3 (struct list*) ;

__attribute__((used)) static void FUNC_4(struct gkc_summary *VAR_0)
{
    int VAR_1;
    struct list *VAR_2, *VAR_3;
    struct gkc_tuple *VAR_4, *VAR_5;
    uint64_t VAR_6, VAR_7;

    VAR_1 = 2 * VAR_0->epsilon * VAR_0->nr_elems;
    if (VAR_0->nr_elems < 2) {
        return;
    }

    VAR_3 = VAR_0->head.prev;
    VAR_2 = VAR_3->prev;

    while (VAR_2 != &VAR_0->head) {
        VAR_4 = FUNC_3(VAR_2);
        VAR_5 = FUNC_3(VAR_3);

        VAR_7 = FUNC_0(VAR_0, VAR_5->delta);
        VAR_6 = FUNC_0(VAR_0, VAR_4->delta);

        if (VAR_6 <= VAR_7 && ((VAR_4->g + VAR_5->g + VAR_5->delta) <= VAR_1)) {
            VAR_5->g += VAR_4->g;
            FUNC_2(VAR_2);
            FUNC_1(VAR_0, VAR_4);
            VAR_2 = VAR_3->prev;
            continue;
        }
        VAR_3 = VAR_2;
        VAR_2 = VAR_2->prev;
    }
}
