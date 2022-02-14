
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (int,char**,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 int FUNC_6 () ;

int
FUNC_7(int VAR_4, char *VAR_5[])
{
 int VAR_6, VAR_7;

 VAR_0 = ((void*)0);
 VAR_1 = VAR_2 = 0;

 while ((VAR_6 = FUNC_4(VAR_4, VAR_5, "cD:EgI:L:o:O:sU:l:")) != -1) {
  if (VAR_6 == 'l') {

   if (VAR_5[VAR_3 - 1][0] == '-')
    VAR_3 -= 1;
   else
    VAR_3 -= 2;
   break;
  } else if (VAR_6 == '?')
   FUNC_6();
 }

 FUNC_0("/usr/bin/cc");
 FUNC_0("-std=iso9899:1999");
 FUNC_0("-pedantic");
 for (VAR_7 = 1; VAR_7 < VAR_3; VAR_7++)
  FUNC_0(VAR_5[VAR_7]);
 while (VAR_7 < VAR_4) {
  if (FUNC_5(VAR_5[VAR_7], "-l", 2) == 0) {
   if (VAR_5[VAR_7][2] != '\0')
    FUNC_1(VAR_5[VAR_7++] + 2);
   else {
    if (VAR_5[++VAR_7] == ((void*)0))
     FUNC_6();
    FUNC_1(VAR_5[VAR_7++]);
   }
  } else
   FUNC_0(VAR_5[VAR_7++]);
 }
 FUNC_3("/usr/bin/cc", VAR_0);
 FUNC_2(1, "/usr/bin/cc");
}
