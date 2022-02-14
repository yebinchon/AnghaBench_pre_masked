
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,char*,char*) ;
 int FUNC_7 (int,char**,char*,int ,int *) ;
 int FUNC_8 (int) ;
 int VAR_5 ;
 int FUNC_9 (char*,int ) ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (int,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int *,int ,int ) ;
 int VAR_8 ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_15 () ;

int
FUNC_16(int VAR_12, char *VAR_13[])
{
 int VAR_14, VAR_15;
 bool VAR_16 = 0, VAR_17 = 0;


 while ((VAR_14 = FUNC_7(VAR_12, VAR_13, "e:f:hVx", VAR_5, ((void*)0))) != -1) {
  switch (VAR_14) {
  case 'e':
   if (!VAR_17)
    FUNC_8(VAR_16);
   FUNC_14(&VAR_8, VAR_6);
   FUNC_11(&VAR_8);
   FUNC_4();
   VAR_17 = 1;
   break;
  case 'f':
   if (!VAR_17)
    FUNC_8(VAR_16);
   VAR_15 = FUNC_9(VAR_6, VAR_2);
   if (VAR_15 < 0)
    FUNC_3(1, "cannot open file %s", VAR_6);
   FUNC_10(VAR_15, VAR_6);
   VAR_17 = 1;
   break;
  case 'x':
   VAR_16 = 1;
   break;
  case 'V':
   FUNC_6(VAR_9, "%s (BSD bc) %s\n", VAR_4, VAR_1);
   FUNC_5(0);
   break;
  case '-':
   break;
  case 'h':

  default:
   FUNC_15();
  }
 }
 VAR_12 -= VAR_7;
 VAR_13 += VAR_7;

 if (!VAR_17)
  FUNC_8(VAR_16);
 (void)FUNC_12(VAR_11, ((void*)0), VAR_3, 0);
 (void)FUNC_12(VAR_9, ((void*)0), VAR_3, 0);

 if (VAR_12 > 1)
  FUNC_15();
 if (VAR_12 == 1) {
  VAR_15 = FUNC_9(VAR_13[0], VAR_2);
  if (VAR_15 < 0)
   FUNC_3(1, "cannot open file %s", VAR_13[0]);

  if (FUNC_2(VAR_15, VAR_0) < 0 ||
      FUNC_1() < 0 ||
      FUNC_0() < 0)
   FUNC_3(1, "capsicum");

  FUNC_10(VAR_15, VAR_13[0]);
  VAR_17 = 1;
 }
 if (VAR_17)
  return (0);

 if (FUNC_1() < 0 || FUNC_0())
  FUNC_3(1, "capsicum");
 FUNC_13(&VAR_8, VAR_10);
 FUNC_11(&VAR_8);
 FUNC_4();

 return (0);
}
