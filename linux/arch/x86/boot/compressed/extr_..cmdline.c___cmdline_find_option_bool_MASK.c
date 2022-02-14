
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int addr_t ;


 int FUNC_0 (char) ;
 char FUNC_1 (int ) ;
 int FUNC_2 (unsigned long) ;

int FUNC_3(unsigned long VAR_0, const char *VAR_1)
{
 addr_t VAR_2;
 char VAR_3;
 int VAR_4 = 0, VAR_5 = 0;
 const char *VAR_6 = ((void*)0);
 enum {
  st_wordstart,
  st_wordcmp,
  st_wordskip,
 } VAR_7 = st_wordstart;

 if (!VAR_0)
  return -1;

 VAR_2 = VAR_0 & 0xf;
 FUNC_2(VAR_0 >> 4);

 while (VAR_2 < 0x10000) {
  VAR_3 = FUNC_1(VAR_2++);
  VAR_4++;

  switch (VAR_7) {
  case st_wordstart:
   if (!VAR_3)
    return 0;
   else if (FUNC_0(VAR_3))
    break;

   VAR_7 = st_wordcmp;
   VAR_6 = VAR_1;
   VAR_5 = VAR_4;


  case st_wordcmp:
   if (!*VAR_6)
    if (!VAR_3 || FUNC_0(VAR_3))
     return VAR_5;
    else
     VAR_7 = st_wordskip;
   else if (!VAR_3)
    return 0;
   else if (VAR_3 != *VAR_6++)
    VAR_7 = st_wordskip;
   break;

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
