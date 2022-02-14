
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,char*,int,int ,...) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 () ;
 int FUNC_15 (int ,int ) ;
 int VAR_6 ;
 int FUNC_16 (int*,int ,int *) ;

__attribute__((used)) static int
FUNC_17(int VAR_7)
{
 int VAR_8;
 int VAR_9;
 pid_t VAR_10, VAR_11;

 switch (VAR_11 = FUNC_11()) {
 case -1:
  return (-1);
 case 0:
  break;
 default:
  FUNC_15(VAR_1, VAR_6);
  FUNC_5(VAR_7);
  while ((VAR_10 = FUNC_16(&VAR_9, 0, ((void*)0))) != -1) {
   if (FUNC_2(VAR_9))
    FUNC_9(1, "child pid %d exited with return code %d",
     VAR_10, FUNC_1(VAR_9));
   if (FUNC_3(VAR_9))
    FUNC_9(1, "child pid %d exited on signal %d%s",
     VAR_10, FUNC_4(VAR_9),
     FUNC_0(VAR_9) ? " (core dumped)" :
     "");
   if (VAR_10 == VAR_11)
    break;
  }
  FUNC_10(0);
 }

 if (FUNC_14() == -1)
  return (-1);

 (void)FUNC_6("/");
 if ((VAR_8 = FUNC_13(VAR_5, VAR_0, 0)) != -1) {
  (void)FUNC_8(VAR_8, VAR_3);
  (void)FUNC_8(VAR_8, VAR_4);
  (void)FUNC_8(VAR_8, VAR_2);
  if (VAR_8 > VAR_2)
   (void)FUNC_7(VAR_8);
 }
 return (FUNC_12());
}
