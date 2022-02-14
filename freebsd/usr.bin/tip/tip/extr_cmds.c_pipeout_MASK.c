
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef int pid_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int * VAR_10 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,...) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*,scalar_t__) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,char*,int) ;
 int * VAR_11 ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ,int *) ;
 int VAR_12 ;
 scalar_t__ FUNC_14 (int *) ;
 int VAR_13 ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int*) ;
 int FUNC_17 (int ,char*,int) ;

void
FUNC_18(int VAR_14)
{
 char VAR_15[256];
 int VAR_16, VAR_17;
 pid_t VAR_18;
 time_t VAR_19 = FUNC_14(((void*)0));

 FUNC_10(VAR_14);
 if (FUNC_8("Local command? ", VAR_15, sizeof(VAR_15)))
  return;
 FUNC_6(VAR_13, VAR_2);
 FUNC_12(VAR_1, VAR_5);
 FUNC_12(VAR_3, VAR_5);
 FUNC_13(0, VAR_6, &VAR_9);
 FUNC_11(VAR_11[0], (char *)&VAR_8, 1);




 if ((VAR_18 = FUNC_5()) < 0)
  FUNC_7("can't fork!\r\n");
 else if (VAR_18) {
  VAR_19 = FUNC_14(((void*)0));
  while ((VAR_17 = FUNC_16(&VAR_16)) > 0 && VAR_17 != VAR_18)
   ;
 } else {
  int VAR_20;

  FUNC_2(VAR_0, 1);
  for (VAR_20 = 3; VAR_20 < 20; VAR_20++)
   FUNC_1(VAR_20);
  FUNC_12(VAR_1, VAR_4);
  FUNC_12(VAR_3, VAR_4);
  FUNC_3(VAR_15);
  FUNC_7("can't find `%s'\r\n", VAR_15);
  FUNC_4(0);
 }
 if (FUNC_0(FUNC_15(VAR_7)))
  FUNC_9("away for ", FUNC_14(0)-VAR_19);
 FUNC_17(VAR_10[1], (char *)&VAR_8, 1);
 FUNC_13(0, VAR_6, &VAR_12);
 FUNC_12(VAR_1, VAR_4);
 FUNC_12(VAR_3, VAR_4);
}
