
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_block {scalar_t__ space; scalar_t__ end; struct mp_block* next_block; struct mp_block* mp_block; } ;
struct mem_pool {scalar_t__ space; scalar_t__ end; struct mem_pool* next_block; struct mem_pool* mp_block; } ;


 int FUNC_0 (struct mp_block*) ;
 int FUNC_1 (scalar_t__,int,int) ;

void FUNC_2(struct mem_pool *VAR_0, int VAR_1)
{
 struct mp_block *VAR_2, *VAR_3;

 VAR_2 = VAR_0->mp_block;
 while (VAR_2)
 {
  VAR_3 = VAR_2;
  VAR_2 = VAR_2->next_block;

  if (VAR_1)
   FUNC_1(VAR_3->space, 0xDD, ((char *)VAR_3->end) - ((char *)VAR_3->space));

  FUNC_0(VAR_3);
 }

 FUNC_0(VAR_0);
}
