
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ewah_iterator {int dummy; } ;
struct ewah_bitmap {int bit_size; } ;
struct bitmap {size_t word_alloc; int * words; } ;
typedef int eword_t ;


 int VAR_0 ;
 int FUNC_0 (int *,size_t) ;
 int FUNC_1 (struct ewah_iterator*,struct ewah_bitmap*) ;
 scalar_t__ FUNC_2 (int *,struct ewah_iterator*) ;
 int FUNC_3 (int *,int,size_t) ;

void FUNC_4(struct bitmap *VAR_1, struct ewah_bitmap *VAR_2)
{
 size_t VAR_3 = VAR_1->word_alloc;
 size_t VAR_4 = (VAR_2->bit_size / VAR_0) + 1;
 size_t VAR_5 = 0;
 struct ewah_iterator VAR_6;
 eword_t VAR_7;

 if (VAR_1->word_alloc < VAR_4) {
  VAR_1->word_alloc = VAR_4;
  FUNC_0(VAR_1->words, VAR_1->word_alloc);
  FUNC_3(VAR_1->words + VAR_3, 0x0,
   (VAR_1->word_alloc - VAR_3) * sizeof(eword_t));
 }

 FUNC_1(&VAR_6, VAR_2);

 while (FUNC_2(&VAR_7, &VAR_6))
  VAR_1->words[VAR_5++] |= VAR_7;
}
