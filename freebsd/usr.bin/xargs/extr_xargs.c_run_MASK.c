
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (char*,char**) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int VAR_6 ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_10 () ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,int) ;

__attribute__((used)) static void
FUNC_14(char **VAR_10)
{
 pid_t VAR_11;
 int VAR_12;
 char **VAR_13;






 if (VAR_9 || VAR_7) {
  (void)FUNC_6(VAR_8, "%s", *VAR_10);
  for (VAR_13 = VAR_10 + 1; *VAR_13 != ((void*)0); ++VAR_13)
   (void)FUNC_6(VAR_8, " %s", *VAR_13);



  if (VAR_7)






   switch (FUNC_9()) {
   case 0:
    return;
   case 1:
    goto exec;
   case 2:
    break;
   }
  (void)FUNC_6(VAR_8, "\n");
  (void)FUNC_5(VAR_8);
 }
exec:
 VAR_4 = 0;
 switch (VAR_11 = FUNC_10()) {
 case -1:
  FUNC_12("vfork");
  FUNC_13(*VAR_10, 1);
 case 0:
  if (VAR_6) {
   if ((VAR_12 = FUNC_7(VAR_3, VAR_0)) == -1)
    FUNC_3(1, "can't open /dev/tty");
  } else {
   VAR_12 = FUNC_7(VAR_2, VAR_0);
  }
  if (VAR_12 > VAR_1) {
   if (FUNC_2(VAR_12, VAR_1) != 0)
    FUNC_3(1, "can't dup2 to stdin");
   FUNC_1(VAR_12);
  }
  FUNC_4(VAR_10[0], VAR_10);
  VAR_4 = VAR_5;
  FUNC_0(1);
 }
 FUNC_8(VAR_11);
 FUNC_11(*VAR_10, 0);
}
