
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_block {char* next_free; char* end; struct mp_block* next_block; scalar_t__ space; } ;
struct mem_pool {int pool_alloc; struct mp_block* mp_block; } ;


 int FUNC_0 (int,size_t) ;
 struct mp_block* FUNC_1 (int ) ;

__attribute__((used)) static struct mp_block *FUNC_2(struct mem_pool *VAR_0, size_t VAR_1, struct mp_block *VAR_2)
{
 struct mp_block *VAR_3;

 VAR_0->pool_alloc += sizeof(struct mp_block) + VAR_1;
 VAR_3 = FUNC_1(FUNC_0(sizeof(struct mp_block), VAR_1));

 VAR_3->next_free = (char *)VAR_3->space;
 VAR_3->end = VAR_3->next_free + VAR_1;

 if (VAR_2) {
  VAR_3->next_block = VAR_2->next_block;
  VAR_2->next_block = VAR_3;
 } else {
  VAR_3->next_block = VAR_0->mp_block;
  VAR_0->mp_block = VAR_3;
 }

 return VAR_3;
}
