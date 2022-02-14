
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0, int VAR_1,
        const char *VAR_2, char *VAR_3, int VAR_4)
{
 char VAR_5;
 int VAR_6 = 0, VAR_7 = -1;
 const char *VAR_8 = ((void*)0);
 char *VAR_9 = VAR_3;
 enum {
  st_wordstart = 0,
  st_wordcmp,
  st_wordskip,
  st_bufcpy,
 } VAR_10 = st_wordstart;

 if (!VAR_0)
  return -1;





 while (VAR_6++ < VAR_1) {
  VAR_5 = *(char *)VAR_0++;
  if (!VAR_5)
   break;

  switch (VAR_10) {
  case st_wordstart:
   if (FUNC_0(VAR_5))
    break;

   VAR_10 = st_wordcmp;
   VAR_8 = VAR_2;


  case st_wordcmp:
   if ((VAR_5 == '=') && !*VAR_8) {





    VAR_7 = 0;
    VAR_9 = VAR_3;
    VAR_10 = st_bufcpy;
    break;
   } else if (VAR_5 == *VAR_8++) {




    break;
   }
   VAR_10 = st_wordskip;


  case st_wordskip:
   if (FUNC_0(VAR_5))
    VAR_10 = st_wordstart;
   break;

  case st_bufcpy:
   if (FUNC_0(VAR_5)) {
    VAR_10 = st_wordstart;
   } else {





    if (++VAR_7 < VAR_4)
     *VAR_9++ = VAR_5;
   }
   break;
  }
 }

 if (VAR_4)
  *VAR_9 = '\0';

 return VAR_7;
}
