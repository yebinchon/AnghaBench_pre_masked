
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmap {scalar_t__ word_alloc; scalar_t__* words; } ;



int FUNC_0(struct bitmap *VAR_0, struct bitmap *VAR_1)
{
 struct bitmap *VAR_2, *VAR_3;
 size_t VAR_4;

 if (VAR_0->word_alloc < VAR_1->word_alloc) {
  VAR_3 = VAR_0;
  VAR_2 = VAR_1;
 } else {
  VAR_3 = VAR_1;
  VAR_2 = VAR_0;
 }

 for (VAR_4 = 0; VAR_4 < VAR_3->word_alloc; ++VAR_4) {
  if (VAR_3->words[VAR_4] != VAR_2->words[VAR_4])
   return 0;
 }

 for (; VAR_4 < VAR_2->word_alloc; ++VAR_4) {
  if (VAR_2->words[VAR_4] != 0)
   return 0;
 }

 return 1;
}
