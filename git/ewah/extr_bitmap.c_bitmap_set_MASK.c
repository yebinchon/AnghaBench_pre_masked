
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmap {size_t word_alloc; int * words; } ;
typedef int eword_t ;


 size_t FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (int *,int,size_t) ;

void FUNC_4(struct bitmap *VAR_0, size_t VAR_1)
{
 size_t VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 >= VAR_0->word_alloc) {
  size_t VAR_3 = VAR_0->word_alloc;
  VAR_0->word_alloc = VAR_2 * 2;
  FUNC_2(VAR_0->words, VAR_0->word_alloc);
  FUNC_3(VAR_0->words + VAR_3, 0x0,
   (VAR_0->word_alloc - VAR_3) * sizeof(eword_t));
 }

 VAR_0->words[VAR_2] |= FUNC_1(VAR_1);
}
