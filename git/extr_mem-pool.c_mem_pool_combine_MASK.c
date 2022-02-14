
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_block {struct mp_block* next_block; } ;
struct mem_pool {struct mp_block* mp_block; scalar_t__ pool_alloc; } ;



void FUNC_0(struct mem_pool *VAR_0, struct mem_pool *VAR_1)
{
 struct mp_block *VAR_2;


 if (VAR_0->mp_block && VAR_1->mp_block) {




  VAR_2 = VAR_0->mp_block;
  while (VAR_2->next_block)
   VAR_2 = VAR_2->next_block;

  VAR_2->next_block = VAR_1->mp_block;
 } else if (VAR_1->mp_block) {



  VAR_0->mp_block = VAR_1->mp_block;
 } else {

 }

 VAR_0->pool_alloc += VAR_1->pool_alloc;
 VAR_1->pool_alloc = 0;
 VAR_1->mp_block = ((void*)0);
}
