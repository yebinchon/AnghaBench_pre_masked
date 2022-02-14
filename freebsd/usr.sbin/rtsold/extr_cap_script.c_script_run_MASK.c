
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (char*,char**,int *) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (char*,int ) ;
 scalar_t__ FUNC_7 (int*) ;

__attribute__((used)) static int
FUNC_8(char **VAR_2)
{
 pid_t VAR_3;
 int VAR_4[2], VAR_5;

 if (FUNC_7(VAR_4) != 0)
  return (-1);
 if ((VAR_3 = FUNC_5()) < 0)
  return (-1);
 if (VAR_3 == 0) {
  (void)FUNC_1(VAR_4[1]);
  VAR_5 = FUNC_6("/dev/null", VAR_0);
  if (VAR_5 < 0)
   FUNC_0(1);
  if (FUNC_3(VAR_4[0], VAR_1) != VAR_1)
   FUNC_0(1);

  FUNC_2(3);
  (void)FUNC_4(VAR_2[0], VAR_2, ((void*)0));
  FUNC_0(1);
 } else
  (void)FUNC_1(VAR_4[0]);

 return (VAR_4[1]);
}
