
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int FUNC_0 (struct page**) ;
 int FUNC_1 (int) ;
 char* FUNC_2 (struct page*) ;
 struct page** VAR_0 ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct page **VAR_1, int VAR_2, size_t VAR_3)
{
 int VAR_4, VAR_5 = 0, VAR_6 = 0;
 int VAR_7 = 0;

 if (FUNC_3(!(VAR_2 > 1)))
  return 0;

 FUNC_1(VAR_2 > FUNC_0(VAR_0));


 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (!VAR_1[VAR_4])
   continue;
  VAR_0[VAR_7++] = VAR_1[VAR_4];
 }
 VAR_2 = VAR_7;

 for (VAR_4 = 1; VAR_4 < VAR_2; VAR_4++) {
  char *VAR_8 = FUNC_2(VAR_0[VAR_4]);
  char *VAR_9 = FUNC_2(VAR_0[VAR_4 - 1]);

  switch (VAR_6) {
  case 0:
   if (VAR_8 == VAR_9 + VAR_3) {

    VAR_5 = 1;
    VAR_6 = 1;
   } else if (VAR_9 == VAR_8 + VAR_3) {

    VAR_5 = -1;
    VAR_6 = 1;
   } else
    goto out;
   break;
  case 1:
   if ((VAR_4 == VAR_2 - 2) ||
       (VAR_5 == -1 && VAR_8 != VAR_9 - VAR_3)) {
    VAR_5 = 0;
    VAR_6 = 0;
   } else if ((VAR_8 == VAR_9 + VAR_3 * VAR_5) ||
       (VAR_8 == VAR_9 + 2 * VAR_3) ||
       (VAR_8 == VAR_9 + 3 * VAR_3)) {
    VAR_6 = 2;
   } else {
    VAR_5 = 0;
    VAR_6 = 0;
   }
   break;
  case 2:
   VAR_5 = 0;
   VAR_6 = 0;
   break;
  }
 }

out:
 if (VAR_6 == 1 || VAR_6 == 2)
  return 1;

 return 0;
}
