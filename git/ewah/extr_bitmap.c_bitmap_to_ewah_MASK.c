
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ewah_bitmap {int dummy; } ;
struct bitmap {size_t word_alloc; scalar_t__* words; } ;
typedef scalar_t__ eword_t ;


 int FUNC_0 (struct ewah_bitmap*,scalar_t__) ;
 int FUNC_1 (struct ewah_bitmap*,int ,size_t) ;
 struct ewah_bitmap* FUNC_2 () ;

struct ewah_bitmap *FUNC_3(struct bitmap *VAR_0)
{
 struct ewah_bitmap *VAR_1 = FUNC_2();
 size_t VAR_2, VAR_3 = 0;
 eword_t VAR_4 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->word_alloc; ++VAR_2) {
  if (VAR_0->words[VAR_2] == 0) {
   VAR_3++;
   continue;
  }

  if (VAR_4 != 0)
   FUNC_0(VAR_1, VAR_4);

  if (VAR_3 > 0) {
   FUNC_1(VAR_1, 0, VAR_3);
   VAR_3 = 0;
  }

  VAR_4 = VAR_0->words[VAR_2];
 }

 FUNC_0(VAR_1, VAR_4);
 return VAR_1;
}
