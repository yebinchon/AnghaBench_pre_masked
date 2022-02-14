
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct mp_block {size_t end; size_t next_free; } ;
struct mem_pool {int block_alloc; struct mp_block* mp_block; } ;


 void* FUNC_0 (struct mem_pool*,size_t,struct mp_block*) ;

void *FUNC_1(struct mem_pool *VAR_0, size_t VAR_1)
{
 struct mp_block *VAR_2 = ((void*)0);
 void *VAR_3;


 if (VAR_1 & (sizeof(uintmax_t) - 1))
  VAR_1 += sizeof(uintmax_t) - (VAR_1 & (sizeof(uintmax_t) - 1));

 if (VAR_0->mp_block &&
     VAR_0->mp_block->end - VAR_0->mp_block->next_free >= VAR_1)
  VAR_2 = VAR_0->mp_block;

 if (!VAR_2) {
  if (VAR_1 >= (VAR_0->block_alloc / 2))
   return FUNC_0(VAR_0, VAR_1, VAR_0->mp_block);

  VAR_2 = FUNC_0(VAR_0, VAR_0->block_alloc, ((void*)0));
 }

 VAR_3 = VAR_2->next_free;
 VAR_2->next_free += VAR_1;
 return VAR_3;
}
