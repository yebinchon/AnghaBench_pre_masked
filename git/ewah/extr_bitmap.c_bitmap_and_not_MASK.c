
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmap {size_t word_alloc; int * words; } ;



void FUNC_0(struct bitmap *VAR_0, struct bitmap *VAR_1)
{
 const size_t VAR_2 = (VAR_0->word_alloc < VAR_1->word_alloc) ?
  VAR_0->word_alloc : VAR_1->word_alloc;

 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3)
  VAR_0->words[VAR_3] &= ~VAR_1->words[VAR_3];
}
