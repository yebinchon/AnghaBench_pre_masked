
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ,int ,int ,int*) ;
 int FUNC_9 (char*) ;

int
FUNC_10(void)
{
 pid_t VAR_3, VAR_4;
 int VAR_5[2];

 if (FUNC_8(VAR_0, VAR_2, 0, VAR_5) < 0)
  FUNC_0(-1, "socketpair");

 VAR_3 = FUNC_2();
 if (VAR_3 < 0)
  FUNC_0(-1, "fork");
 if (VAR_3 == 0)
  FUNC_5(VAR_5[1]);
 FUNC_7(1);
 VAR_4 = FUNC_2();
 if (VAR_4 < 0) {
  FUNC_9("fork");
  (void)FUNC_3(VAR_3, VAR_1);
  FUNC_1(-1);
 }
 if (VAR_4 == 0)
  FUNC_6(VAR_5[1]);
 FUNC_7(1);
 if (FUNC_3(VAR_4, VAR_1) < 0)
  FUNC_0(-1, "kill");
 FUNC_7(1);
 FUNC_4("ok 1 - unix_sorflush\n");
 FUNC_1(0);
}
