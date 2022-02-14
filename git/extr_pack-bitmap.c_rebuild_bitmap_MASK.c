
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct ewah_iterator {int dummy; } ;
struct ewah_bitmap {int dummy; } ;
struct bitmap {int dummy; } ;
typedef size_t eword_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct bitmap*,size_t) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (struct ewah_iterator*,struct ewah_bitmap*) ;
 scalar_t__ FUNC_3 (size_t*,struct ewah_iterator*) ;

__attribute__((used)) static int FUNC_4(uint32_t *VAR_1,
     struct ewah_bitmap *VAR_2,
     struct bitmap *VAR_3)
{
 uint32_t VAR_4 = 0;
 struct ewah_iterator VAR_5;
 eword_t VAR_6;

 FUNC_2(&VAR_5, VAR_2);

 while (FUNC_3(&VAR_6, &VAR_5)) {
  uint32_t VAR_7, VAR_8;

  for (VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7) {
   if ((VAR_6 >> VAR_7) == 0)
    break;

   VAR_7 += FUNC_1(VAR_6 >> VAR_7);

   VAR_8 = VAR_1[VAR_4 + VAR_7];
   if (VAR_8 > 0)
    FUNC_0(VAR_3, VAR_8 - 1);
   else
    return -1;
  }

  VAR_4 += VAR_0;
 }
 return 0;
}
