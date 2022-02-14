
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (scalar_t__) ;

int
FUNC_8(int VAR_4, char *VAR_5[])
{
 pid_t VAR_6, VAR_7;

 if (FUNC_4(VAR_0, VAR_3) == VAR_2)
  FUNC_0(-1, "signal");

 VAR_7 = FUNC_2();
 VAR_6 = FUNC_1();
 if (VAR_6 < 0)
  FUNC_0(-1, "fork");
 if (VAR_6 == 0) {
  VAR_6 = FUNC_2();
  FUNC_7(VAR_7);
  return (0);
 } else
  FUNC_6(VAR_6, 0);
 (void)FUNC_3(VAR_6, VAR_1);

 FUNC_5(5);

 VAR_7 = FUNC_2();
 VAR_6 = FUNC_1();
 if (VAR_6 < 0)
  FUNC_0(-1, "fork");
 if (VAR_6 == 0) {
  VAR_6 = FUNC_2();
  FUNC_7(VAR_7);
  return (0);
 } else
  FUNC_6(VAR_6, 1);
 (void)FUNC_3(VAR_6, VAR_1);

 return (0);
}
