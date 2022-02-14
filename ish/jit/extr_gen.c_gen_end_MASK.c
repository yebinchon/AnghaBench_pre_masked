
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jit_block {unsigned long** jump_ip; unsigned long* code; unsigned long* old_jump_ip; scalar_t__ addr; scalar_t__ end_addr; int is_jetsam; int * page; int chain; int * jumps_from_links; int * jumps_from; } ;
struct gen_state {size_t* jump_ip; size_t block_patch_ip; scalar_t__ ip; struct jit_block* block; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct gen_state *VAR_0) {
    struct jit_block *VAR_1 = VAR_0->block;
    for (int VAR_2 = 0; VAR_2 <= 1; VAR_2++) {
        if (VAR_0->jump_ip[VAR_2] != 0) {
            VAR_1->jump_ip[VAR_2] = &VAR_1->code[VAR_0->jump_ip[VAR_2]];
            VAR_1->old_jump_ip[VAR_2] = *VAR_1->jump_ip[VAR_2];
        } else {
            VAR_1->jump_ip[VAR_2] = ((void*)0);
        }

        FUNC_0(&VAR_1->jumps_from[VAR_2]);
        FUNC_0(&VAR_1->jumps_from_links[VAR_2]);
    }
    if (VAR_0->block_patch_ip != 0) {
        VAR_1->code[VAR_0->block_patch_ip] = (unsigned long) VAR_1;
    }
    if (VAR_1->addr != VAR_0->ip)
        VAR_1->end_addr = VAR_0->ip - 1;
    else
        VAR_1->end_addr = VAR_1->addr;
    FUNC_0(&VAR_1->chain);
    VAR_1->is_jetsam = 0;
    for (int VAR_3 = 0; VAR_3 <= 1; VAR_3++) {
        FUNC_0(&VAR_1->page[VAR_3]);
    }
}
