
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jit_block {size_t addr; size_t end_addr; int * page; int chain; scalar_t__ used; } ;
struct jit {int num_blocks; int hash_size; int mem; int * hash; int mem_used; } ;


 scalar_t__ FUNC_0 (size_t) ;
 int * FUNC_1 (struct jit*,scalar_t__,int) ;
 int FUNC_2 (struct jit*,int) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct jit *VAR_0, struct jit_block *VAR_1) {
    VAR_0->mem_used += VAR_1->used;
    VAR_0->num_blocks++;

    if (VAR_0->num_blocks >= VAR_0->hash_size * 2)
        FUNC_2(VAR_0, VAR_0->hash_size * 2);

    FUNC_3(&VAR_0->hash[VAR_1->addr % VAR_0->hash_size], &VAR_1->chain);
    if (FUNC_4(VAR_0->mem, FUNC_0(VAR_1->addr)) == ((void*)0))
        return;
    FUNC_3(FUNC_1(VAR_0, FUNC_0(VAR_1->addr), 0), &VAR_1->page[0]);
    if (FUNC_0(VAR_1->addr) != FUNC_0(VAR_1->end_addr))
        FUNC_3(FUNC_1(VAR_0, FUNC_0(VAR_1->end_addr), 1), &VAR_1->page[1]);
}
