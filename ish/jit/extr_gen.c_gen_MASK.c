
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jit_block {unsigned long* code; } ;
struct gen_state {int size; int capacity; struct jit_block* block; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 struct jit_block* FUNC_2 (struct jit_block*,int) ;

__attribute__((used)) static void FUNC_3(struct gen_state *VAR_0, unsigned long VAR_1) {
    FUNC_0(VAR_0->size <= VAR_0->capacity);
    if (VAR_0->size >= VAR_0->capacity) {
        VAR_0->capacity *= 2;
        struct jit_block *VAR_2 = FUNC_2(VAR_0->block,
                sizeof(struct jit_block) + VAR_0->capacity * sizeof(unsigned long));
        if (VAR_2 == ((void*)0)) {
            FUNC_1("out of memory while jitting");
        }
        VAR_0->block = VAR_2;
    }
    FUNC_0(VAR_0->size < VAR_0->capacity);
    VAR_0->block->code[VAR_0->size++] = VAR_1;
}
