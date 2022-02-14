
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 char** VAR_0 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char**,char*) ;
 int FUNC_5 (char*,char*,size_t) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (char*,char*) ;
 size_t FUNC_7 (char*) ;
 int FUNC_8 () ;

int
FUNC_9(int VAR_2, char *VAR_3[])
{
 char *VAR_4, **VAR_5;
 size_t VAR_6;
 int VAR_7;

 if (FUNC_1() < 0 || FUNC_0() < 0)
  FUNC_2(1, "capsicum");

 while ((VAR_7 = FUNC_4(VAR_2, VAR_3, "")) != -1)
  switch(VAR_7) {
  case '?':
  default:
   FUNC_8();
  }
 VAR_2 -= VAR_1;
 VAR_3 += VAR_1;

 if (VAR_2 == 0) {
  for (VAR_5 = VAR_0; *VAR_5; VAR_5++)
   (void)FUNC_6("%s\n", *VAR_5);
  FUNC_3(0);
 }
 VAR_6 = FUNC_7(*VAR_3);
 for (VAR_5 = VAR_0; *VAR_5; VAR_5++)
  if (!FUNC_5(*VAR_5, *VAR_3, VAR_6)) {
   VAR_4 = *VAR_5 + VAR_6;
   if (*VAR_4 == '=') {
    (void)FUNC_6("%s\n", VAR_4 + 1);
    FUNC_3(0);
   }
  }
 FUNC_3(1);
}
