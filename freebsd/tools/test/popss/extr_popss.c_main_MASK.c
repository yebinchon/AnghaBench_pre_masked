
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int) ;
 int * VAR_0 ;
 int * VAR_1 ;

int
FUNC_7(int VAR_2, char *VAR_3[])
{
 int VAR_4;

 if (VAR_2 != 2) {
  FUNC_5(
     "Usage: popss [bound|int1|int3|into|int80|syscall|sysenter]\n");
  FUNC_2(1);
 }
 VAR_0 = &VAR_1[FUNC_4(VAR_1) - 1];
 VAR_4 = FUNC_3();
 if (VAR_4 == -1)
  FUNC_1(1, "fork");
 if (VAR_4 == 0)
  FUNC_0(VAR_3[1]);
 else
  FUNC_6(VAR_4);
}
