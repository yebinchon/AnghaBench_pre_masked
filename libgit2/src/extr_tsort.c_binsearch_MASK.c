
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ (* git__sort_r_cmp ) (void const*,void*,void*) ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(
 void **VAR_0, const void *VAR_1, size_t VAR_2, git__sort_r_cmp VAR_3, void *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 void *VAR_8, *VAR_9;

 FUNC_0(VAR_2 > 0);

 VAR_5 = 0;
 VAR_7 = (int)VAR_2 - 1;
 VAR_6 = VAR_7 >> 1;
 VAR_8 = VAR_0[VAR_5];


 if (VAR_3(VAR_1, VAR_8, VAR_4) < 0)
  return 0;

 else if (VAR_3(VAR_1, VAR_8, VAR_4) == 0) {
  int VAR_10 = 1;
  while (VAR_3(VAR_1, VAR_0[VAR_10], VAR_4) == 0)
   VAR_10++;
  return VAR_10;
 }


 VAR_9 = VAR_0[VAR_6];
 while (1) {
  const int VAR_11 = VAR_3(VAR_1, VAR_9, VAR_4);
  if (VAR_11 < 0) {
   if (VAR_6 - VAR_5 <= 1) return VAR_6;
   VAR_7 = VAR_6;
  } else if (VAR_11 > 0) {
   if (VAR_7 - VAR_6 <= 1) return VAR_6 + 1;
   VAR_5 = VAR_6;
   VAR_8 = VAR_9;
  } else {
   do {
    VAR_9 = VAR_0[++VAR_6];
   } while (VAR_3(VAR_1, VAR_9, VAR_4) == 0);
   return VAR_6;
  }
  VAR_6 = VAR_5 + ((VAR_7 - VAR_5) >> 1);
  VAR_9 = VAR_0[VAR_6];
 }
}
