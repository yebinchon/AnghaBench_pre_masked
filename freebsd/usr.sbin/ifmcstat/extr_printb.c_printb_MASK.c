
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*,unsigned int) ;
 int FUNC_2 (char) ;

void
FUNC_3(const char *VAR_0, unsigned int VAR_1, const char *VAR_2)
{
 int VAR_3, VAR_4 = 0;
 char VAR_5;

 FUNC_0(VAR_2 != ((void*)0));
 if (*VAR_2 == 8)
  FUNC_1("%s=%o", VAR_0, VAR_1);
 else
  FUNC_1("%s=%x", VAR_0, VAR_1);
 VAR_2++;
 if (VAR_2) {
  FUNC_2('<');
  while ((VAR_3 = *VAR_2++) != '\0') {
   if (VAR_1 & (1 << (VAR_3-1))) {
    if (VAR_4)
     FUNC_2(',');
    VAR_4 = 1;
    for (; (VAR_5 = *VAR_2) > 32; VAR_2++)
     FUNC_2(VAR_5);
   } else
    for (; *VAR_2 > 32; VAR_2++)
     ;
  }
  FUNC_2('>');
 }
}
