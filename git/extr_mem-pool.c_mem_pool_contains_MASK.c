
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_block {scalar_t__ end; scalar_t__ space; struct mp_block* next_block; } ;
struct mem_pool {struct mp_block* mp_block; } ;



int FUNC_0(struct mem_pool *VAR_0, void *VAR_1)
{
 struct mp_block *VAR_2;


 for (VAR_2 = VAR_0->mp_block; VAR_2; VAR_2 = VAR_2->next_block)
  if ((VAR_1 >= ((void *)VAR_2->space)) &&
      (VAR_1 < ((void *)VAR_2->end)))
   return 1;

 return 0;
}
