
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0, int VAR_1,
      const char *VAR_2)
{
 char VAR_3;
 int VAR_4 = 0, VAR_5 = 0;
 const char *VAR_6 = ((void*)0);
 enum {
  st_wordstart = 0,
  st_wordcmp,
  st_wordskip,
 } VAR_7 = st_wordstart;

 if (!VAR_0)
  return -1;





 while (VAR_4 < VAR_1) {
  VAR_3 = *(char *)VAR_0++;
  VAR_4++;

  switch (VAR_7) {
  case st_wordstart:
   if (!VAR_3)
    return 0;
   else if (FUNC_0(VAR_3))
    break;

   VAR_7 = st_wordcmp;
   VAR_6 = VAR_2;
   VAR_5 = VAR_4;


  case st_wordcmp:
   if (!*VAR_6) {






    if (!VAR_3 || FUNC_0(VAR_3))
     return VAR_5;





   } else if (!VAR_3) {




    return 0;
   } else if (VAR_3 == *VAR_6++) {




    break;
   }
   VAR_7 = st_wordskip;


  case st_wordskip:
   if (!VAR_3)
    return 0;
   else if (FUNC_0(VAR_3))
    VAR_7 = st_wordstart;
   break;
  }
 }

 return 0;
}
