
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jit_block {void* addr; } ;
struct gen_state {int capacity; struct jit_block* block; scalar_t__ block_patch_ip; scalar_t__* jump_ip; void* ip; scalar_t__ size; } ;
typedef void* addr_t ;


 int VAR_0 ;
 struct jit_block* FUNC_0 (int) ;

void FUNC_1(addr_t VAR_1, struct gen_state *VAR_2) {
    VAR_2->capacity = VAR_0;
    VAR_2->size = 0;
    VAR_2->ip = VAR_1;
    for (int VAR_3 = 0; VAR_3 <= 1; VAR_3++) {
        VAR_2->jump_ip[VAR_3] = 0;
    }
    VAR_2->block_patch_ip = 0;

    struct jit_block *VAR_4 = FUNC_0(sizeof(struct jit_block) + VAR_2->capacity * sizeof(unsigned long));
    VAR_2->block = VAR_4;
    VAR_4->addr = VAR_1;
}
