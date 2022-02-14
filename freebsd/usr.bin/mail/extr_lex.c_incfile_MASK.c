
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,scalar_t__) ;

int
FUNC_8(void)
{
 off_t VAR_3;
 int VAR_4 = VAR_2;
 FILE *VAR_5;

 VAR_5 = FUNC_1(VAR_0, "r");
 if (VAR_5 == ((void*)0))
  return (-1);
 FUNC_4();
 VAR_3 = FUNC_2(VAR_5);
 if (VAR_3 == 0)
  return (-1);
 if (VAR_3 < VAR_1)
  return (-1);
 if (VAR_3 == VAR_1)
  return (0);
 FUNC_7(VAR_5, VAR_1);
 FUNC_6(VAR_2);
 VAR_1 = FUNC_3(VAR_5);
 (void)FUNC_0(VAR_5);
 FUNC_5();
 return (VAR_2 - VAR_4);
}
