
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmap {size_t word_alloc; int * words; } ;


 scalar_t__ FUNC_0 (int ) ;

size_t FUNC_1(struct bitmap *VAR_0)
{
 size_t VAR_1, VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->word_alloc; ++VAR_1)
  VAR_2 += FUNC_0(VAR_0->words[VAR_1]);

 return VAR_2;
}
