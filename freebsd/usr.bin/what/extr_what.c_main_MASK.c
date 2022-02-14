
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int,char**,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (char*,char const*) ;
 scalar_t__ FUNC_5 (int,int,int *) ;
 int * VAR_1 ;
 int FUNC_6 () ;
 int FUNC_7 (char*,char const*) ;

int
FUNC_8(int VAR_2, char *VAR_3[])
{
 const char *VAR_4;
 FILE *VAR_5;
 bool VAR_6, VAR_7, VAR_8;
 int VAR_9;

 VAR_7 = VAR_8 = 0;

 while ((VAR_9 = FUNC_3(VAR_2, VAR_3, "qs")) != -1) {
  switch (VAR_9) {
  case 'q':
   VAR_7 = 1;
   break;
  case 's':
   VAR_8 = 1;
   break;
  default:
   FUNC_6();
  }
 }
 VAR_2 -= VAR_0;
 VAR_3 += VAR_0;

 VAR_6 = 0;

 if (VAR_2 == 0) {
  if (FUNC_5(VAR_8, VAR_7, VAR_1))
   VAR_6 = 1;
 } else {
  while (VAR_2--) {
   VAR_4 = *VAR_3++;
   VAR_5 = FUNC_2(VAR_4, "r");
   if (VAR_5 == ((void*)0)) {
    if (!VAR_7)
     FUNC_7("%s", VAR_4);
    continue;
   }
   if (!VAR_7)
    FUNC_4("%s:\n", VAR_4);
   if (FUNC_5(VAR_8, VAR_7, VAR_5))
    VAR_6 = 1;
   FUNC_1(VAR_5);
  }
 }
 FUNC_0(VAR_6 ? 0 : 1);
}
