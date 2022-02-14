
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_mem_reg {int * mm_node; } ;
struct ttm_buffer_object {struct ttm_mem_reg mem; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ttm_buffer_object *VAR_0,
        struct ttm_mem_reg *VAR_1)
{
 struct ttm_mem_reg *VAR_2 = &VAR_0->mem;

 FUNC_0(VAR_2->mm_node != ((void*)0));
 *VAR_2 = *VAR_1;
 VAR_1->mm_node = ((void*)0);
}
