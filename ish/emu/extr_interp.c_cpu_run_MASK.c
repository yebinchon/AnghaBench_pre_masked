
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tlb {TYPE_1__* mem; } ;
struct cpu_state {int trapno; TYPE_1__* mem; } ;
struct TYPE_2__ {int changes; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpu_state*,struct tlb*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tlb*) ;

void FUNC_5(struct cpu_state *VAR_2) {
    int VAR_3 = 0;
    struct tlb VAR_4 = {.mem = VAR_2->mem};
    FUNC_4(&VAR_4);
    FUNC_2(&VAR_2->mem->lock);
    int VAR_5 = VAR_2->mem->changes;
    while (1) {
        int VAR_6 = FUNC_0(VAR_2, &VAR_4);
        if (VAR_6 == VAR_0 && VAR_3++ >= 100000) {
            VAR_3 = 0;
            VAR_6 = VAR_1;
        }
        if (VAR_6 != VAR_0) {
            VAR_2->trapno = VAR_6;
            FUNC_3(&VAR_2->mem->lock);
            FUNC_1(VAR_6);
            FUNC_2(&VAR_2->mem->lock);
            if (VAR_4.mem != VAR_2->mem)
                VAR_4.mem = VAR_2->mem;
            if (VAR_2->mem->changes != VAR_5) {
                FUNC_4(&VAR_4);
                VAR_5 = VAR_2->mem->changes;
            }
        }
    }
}
