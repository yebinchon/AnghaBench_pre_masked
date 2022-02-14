
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlb {int dummy; } ;
struct cpu_state {int eip; } ;
struct jit_frame {struct cpu_state cpu; } ;
struct jit_block {int dummy; } ;
struct gen_state {struct jit_block* block; } ;


 int FUNC_0 (struct gen_state*) ;
 int FUNC_1 (struct gen_state*) ;
 int FUNC_2 (int ,struct gen_state*) ;
 int FUNC_3 (struct gen_state*,struct tlb*) ;
 int FUNC_4 (int *,struct jit_block*) ;
 int FUNC_5 (struct jit_block*,struct jit_frame*,struct tlb*) ;

int FUNC_6(struct cpu_state *VAR_0, struct tlb *VAR_1) {
    struct gen_state VAR_2;
    FUNC_2(VAR_0->eip, &VAR_2);
    FUNC_3(&VAR_2, VAR_1);
    FUNC_1(&VAR_2);
    FUNC_0(&VAR_2);

    struct jit_block *VAR_3 = VAR_2.block;
    struct jit_frame VAR_4 = {.cpu = *VAR_0};
    int VAR_5 = FUNC_5(VAR_3, &VAR_4, VAR_1);
    *VAR_0 = VAR_4.cpu;
    FUNC_4(((void*)0), VAR_3);
    return VAR_5;
}
