
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int BIGNUM ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int **,char*) ;
 scalar_t__ FUNC_2 (int **,char*) ;
 int * FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int * FUNC_8 (char*,int,int ) ;
 int FUNC_9 (int,char**,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_10 (char) ;
 scalar_t__ VAR_3 ;
 int FUNC_11 (int *) ;
 int VAR_4 ;
 int FUNC_12 () ;

int
FUNC_13(int VAR_5, char *VAR_6[])
{
 BIGNUM *VAR_7;
 int VAR_8;
 char *VAR_9, VAR_10[VAR_0];

 VAR_1 = FUNC_0();
 VAR_7 = FUNC_3();
 if (VAR_7 == ((void*)0))
  FUNC_5(1, "can't initialise bignum");

 while ((VAR_8 = FUNC_9(VAR_5, VAR_6, "h")) != -1)
  switch (VAR_8) {
  case 'h':
   VAR_2++;
   break;
  case '?':
  default:
   FUNC_12();
  }
 VAR_5 -= VAR_3;
 VAR_6 += VAR_3;


 if (VAR_5 == 0)
  for (;;) {
   if (FUNC_8(VAR_10, sizeof(VAR_10), VAR_4) == ((void*)0)) {
    if (FUNC_7(VAR_4))
     FUNC_4(1, "stdin");
    FUNC_6 (0);
   }
   for (VAR_9 = VAR_10; FUNC_10(*VAR_9); ++VAR_9);
   if (*VAR_9 == '\n' || *VAR_9 == '\0')
    continue;
   if (*VAR_9 == '-')
    FUNC_5(1, "negative numbers aren't permitted.");
   if (FUNC_1(&VAR_7, VAR_10) == 0 &&
       FUNC_2(&VAR_7, VAR_10) == 0)
    FUNC_5(1, "%s: illegal numeric format.", VAR_10);
   FUNC_11(VAR_7);
  }

 else
  for (; *VAR_6 != ((void*)0); ++VAR_6) {
   if (VAR_6[0][0] == '-')
    FUNC_5(1, "negative numbers aren't permitted.");
   if (FUNC_1(&VAR_7, VAR_6[0]) == 0 &&
       FUNC_2(&VAR_7, VAR_6[0]) == 0)
    FUNC_5(1, "%s: illegal numeric format.", VAR_6[0]);
   FUNC_11(VAR_7);
  }
 FUNC_6(0);
}
