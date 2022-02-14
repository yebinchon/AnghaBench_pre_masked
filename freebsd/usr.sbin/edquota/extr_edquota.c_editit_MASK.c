
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 char* VAR_5 ;
 int FUNC_2 (int,char*,...) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (char const*,char const*,char*,char*) ;
 int FUNC_4 () ;
 char* FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 long FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (long) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int,int*,int ) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*) ;

int
FUNC_17(char *VAR_7)
{
 long VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = FUNC_10(FUNC_11(VAR_3)|FUNC_11(VAR_4)|FUNC_11(VAR_2));
 top:
 if ((VAR_9 = FUNC_4()) < 0) {

  if (VAR_6 == VAR_1) {
   FUNC_16("you have too many processes");
   return(0);
  }
  if (VAR_6 == VAR_0) {
   FUNC_13(1);
   goto top;
  }
  FUNC_15("fork");
  return (0);
 }
 if (VAR_9 == 0) {
  const char *VAR_11;

  FUNC_12(VAR_8);
  if (FUNC_8(FUNC_6()) != 0)
   FUNC_2(1, "setgid failed");
  if (FUNC_9(FUNC_7()) != 0)
   FUNC_2(1, "setuid failed");
  if ((VAR_11 = FUNC_5("EDITOR")) == (char *)0)
   VAR_11 = VAR_5;
  FUNC_3(VAR_11, VAR_11, VAR_7, (char *)0);
  FUNC_2(1, "%s", VAR_11);
 }
 FUNC_14(VAR_9, &VAR_10, 0);
 FUNC_12(VAR_8);
 if (!FUNC_1(VAR_10) || FUNC_0(VAR_10) != 0)
  return (0);
 return (1);
}
