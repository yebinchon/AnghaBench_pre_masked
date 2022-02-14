
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mkuz_fifo_queue {struct mkuz_bchain_link* last; } ;
struct mkuz_bchain_link {int this; struct mkuz_bchain_link* prev; } ;
typedef scalar_t__ (* cmp_cb_t ) (int ,void*) ;



__attribute__((used)) static int
FUNC_0(struct mkuz_fifo_queue *VAR_0, cmp_cb_t VAR_1, void *VAR_2)
{
    struct mkuz_bchain_link *VAR_3;

    for (VAR_3 = VAR_0->last; VAR_3 != ((void*)0); VAR_3 = VAR_3->prev) {
        if (VAR_1(VAR_3->this, VAR_2)) {
            return (1);
        }
    }
    return (0);
}
