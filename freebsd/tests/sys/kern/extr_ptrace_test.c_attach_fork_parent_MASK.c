
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int fpid ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int,int*,int) ;
 int FUNC_6 (int,int*,int) ;

__attribute__((used)) static void
FUNC_7(int VAR_0[2])
{
 pid_t VAR_1;

 FUNC_2(VAR_0[0]);


 FUNC_0((VAR_1 = FUNC_3()) != -1);
 if (VAR_1 != 0)
  FUNC_1(3);


 VAR_1 = FUNC_4();
 FUNC_0(FUNC_6(VAR_0[1], &VAR_1, sizeof(VAR_1)) == sizeof(VAR_1));


 FUNC_0(FUNC_5(VAR_0[1], &VAR_1, sizeof(VAR_1)) == 0);
}
