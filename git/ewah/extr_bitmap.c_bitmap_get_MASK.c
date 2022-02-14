
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmap {size_t word_alloc; int* words; } ;


 size_t FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;

int FUNC_2(struct bitmap *VAR_0, size_t VAR_1)
{
 size_t VAR_2 = FUNC_0(VAR_1);
 return VAR_2 < VAR_0->word_alloc &&
  (VAR_0->words[VAR_2] & FUNC_1(VAR_1)) != 0;
}
