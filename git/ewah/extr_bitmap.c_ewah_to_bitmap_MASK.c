
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ewah_iterator {int dummy; } ;
struct ewah_bitmap {int dummy; } ;
struct bitmap {size_t word_alloc; int * words; } ;
typedef int eword_t ;


 int FUNC_0 (int *,size_t,size_t) ;
 struct bitmap* FUNC_1 () ;
 int FUNC_2 (struct ewah_iterator*,struct ewah_bitmap*) ;
 scalar_t__ FUNC_3 (int *,struct ewah_iterator*) ;

struct bitmap *FUNC_4(struct ewah_bitmap *VAR_0)
{
 struct bitmap *VAR_1 = FUNC_1();
 struct ewah_iterator VAR_2;
 eword_t VAR_3;
 size_t VAR_4 = 0;

 FUNC_2(&VAR_2, VAR_0);

 while (FUNC_3(&VAR_3, &VAR_2)) {
  FUNC_0(VAR_1->words, VAR_4 + 1, VAR_1->word_alloc);
  VAR_1->words[VAR_4++] = VAR_3;
 }

 VAR_1->word_alloc = VAR_4;
 return VAR_1;
}
