
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int addr_t ;


 int FUNC_0 (char) ;
 char FUNC_1 (int ) ;
 int FUNC_2 (unsigned long) ;

int FUNC_3(unsigned long VAR_0, const char *VAR_1, char *VAR_2, int VAR_3)
{
 addr_t VAR_4;
 char VAR_5;
 int VAR_6 = -1;
 const char *VAR_7 = ((void*)0);
 char *VAR_8 = VAR_2;
 enum {
  st_wordstart,
  st_wordcmp,
  st_wordskip,
  st_bufcpy
 } VAR_9 = st_wordstart;

 if (!VAR_0)
  return -1;

 VAR_4 = VAR_0 & 0xf;
 FUNC_2(VAR_0 >> 4);

 while (VAR_4 < 0x10000 && (VAR_5 = FUNC_1(VAR_4++))) {
  switch (VAR_9) {
  case st_wordstart:
   if (FUNC_0(VAR_5))
    break;


   VAR_9 = st_wordcmp;
   VAR_7 = VAR_1;


  case st_wordcmp:
   if (VAR_5 == '=' && !*VAR_7) {
    VAR_6 = 0;
    VAR_8 = VAR_2;
    VAR_9 = st_bufcpy;
   } else if (FUNC_0(VAR_5)) {
    VAR_9 = st_wordstart;
   } else if (VAR_5 != *VAR_7++) {
    VAR_9 = st_wordskip;
   }
   break;

  case st_wordskip:
   if (FUNC_0(VAR_5))
    VAR_9 = st_wordstart;
   break;

  case st_bufcpy:
   if (FUNC_0(VAR_5)) {
    VAR_9 = st_wordstart;
   } else {
    if (VAR_6 < VAR_3-1)
     *VAR_8++ = VAR_5;
    VAR_6++;
   }
   break;
  }
 }

 if (VAR_3)
  *VAR_8 = '\0';

 return VAR_6;
}
