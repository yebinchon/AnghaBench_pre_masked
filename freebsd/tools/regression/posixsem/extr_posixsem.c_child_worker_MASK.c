
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int cstat ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int*) ;
 scalar_t__ FUNC_5 (int,int*,int) ;
 scalar_t__ FUNC_6 (int,int *,int ) ;
 int FUNC_7 (int,int*,int) ;

__attribute__((used)) static int
FUNC_8(int (*VAR_0)(void *VAR_1), void *VAR_2, int *VAR_3)
{
 pid_t VAR_4;
 int VAR_5[2], VAR_6;

 if (FUNC_4(VAR_5) < 0) {
  FUNC_2("pipe");
  return (-1);
 }

 VAR_4 = FUNC_3();
 switch (VAR_4) {
 case -1:

  FUNC_2("fork");
  FUNC_0(VAR_5[0]);
  FUNC_0(VAR_5[1]);
  return (-1);
 case 0:

  VAR_6 = VAR_0(VAR_2);
  FUNC_7(VAR_5[1], &VAR_6, sizeof(VAR_6));
  FUNC_1(0);
 }

 if (FUNC_5(VAR_5[0], VAR_3, sizeof(*VAR_3)) < 0) {
  FUNC_2("read(pipe)");
  FUNC_0(VAR_5[0]);
  FUNC_0(VAR_5[1]);
  return (-1);
 }
 if (FUNC_6(VAR_4, ((void*)0), 0) < 0) {
  FUNC_2("wait");
  FUNC_0(VAR_5[0]);
  FUNC_0(VAR_5[1]);
  return (-1);
 }
 FUNC_0(VAR_5[0]);
 FUNC_0(VAR_5[1]);
 return (0);
}
