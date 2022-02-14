
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tlb {int dummy; } ;
struct jit_block {int used; } ;
struct gen_state {int ip; struct jit_block* block; int capacity; } ;
typedef int addr_t ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (struct gen_state*) ;
 int FUNC_3 (struct gen_state*) ;
 int FUNC_4 (int,struct gen_state*) ;
 int FUNC_5 (struct gen_state*,struct tlb*) ;

__attribute__((used)) static struct jit_block *FUNC_6(addr_t VAR_2, struct tlb *VAR_3) {
    struct gen_state VAR_4;
    FUNC_0("%d %08x --- compiling:\n", VAR_1->pid, VAR_2);
    FUNC_4(VAR_2, &VAR_4);
    while (1) {
        if (!FUNC_5(&VAR_4, VAR_3))
            break;





        if (VAR_4.ip - VAR_2 >= VAR_0 - 15) {
            FUNC_3(&VAR_4);
            break;
        }
    }
    FUNC_2(&VAR_4);
    FUNC_1(VAR_4.ip - VAR_2 <= VAR_0);
    VAR_4.block->used = VAR_4.capacity;
    return VAR_4.block;
}
