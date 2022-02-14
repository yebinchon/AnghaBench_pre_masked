
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int * FUNC_4 (char*,char*,int ) ;
 int FUNC_5 (int,char**,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (char*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 char* FUNC_11 (int ) ;
 char* VAR_10 ;
 int FUNC_12 (char*) ;
 int FUNC_13 () ;
 int VAR_11 ;
 int FUNC_14 () ;

int
FUNC_15(int VAR_12, char *VAR_13[])
{
 int VAR_14;
 int VAR_15;

 while ((VAR_14 = FUNC_5(VAR_12, VAR_13, "-cv")) != -1)
  switch (VAR_14) {
  case '-':
   VAR_7++;
   break;
  case 'c':
   VAR_4++;
   break;
  case 'v':
   VAR_11++;
   break;
  default:
   FUNC_13();
  }
 VAR_12 -= VAR_6;
 VAR_13 += VAR_6;

 if (FUNC_10(VAR_0, VAR_2) == VAR_1)
  FUNC_10(VAR_0, VAR_5);
 if (VAR_4 || (VAR_12 == 0 && !VAR_7))
  FUNC_7();
 else {
  VAR_10 = FUNC_11(VAR_3);
  if (VAR_10 == ((void*)0))
   FUNC_1(1, "strdup() failed");
  VAR_15 = FUNC_8(VAR_10);
  if (VAR_15 == -1)
   FUNC_1(1, "Unable to create temporary file");
  FUNC_0(VAR_15);
 }

 while (VAR_7 || VAR_12 > 0) {
  if (FUNC_4("x.c", "w", VAR_9) == ((void*)0))
   FUNC_1(1, "x.c");
  if (!VAR_7 && FUNC_4(VAR_13[0], "r", VAR_8) == ((void*)0))
   FUNC_1(2, "%s", VAR_13[0]);
  FUNC_9("x.c");
  if (VAR_7 == 0)
   VAR_12--, VAR_13++;
  else
   VAR_7 = 0;
 }
 FUNC_3();
 if (VAR_4 == 0)
  FUNC_14();
 if (VAR_10[0] == '/')
  FUNC_6(FUNC_12(VAR_10));
 FUNC_2(0);
}
