
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acctv3 {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct acctv3*) ;
 int FUNC_3 (int *,struct acctv3*) ;
 int FUNC_4 (int,int *) ;

int
FUNC_5(FILE *VAR_1, struct acctv3 *VAR_2)
{
 int VAR_3, VAR_4;

 if ((VAR_3 = FUNC_1(VAR_1)) == VAR_0)
  return (FUNC_0(VAR_1) ? VAR_0 : 0);
 if (FUNC_4(VAR_3, VAR_1) == VAR_0)
  return (VAR_0);
 if (VAR_3 != 0)

  VAR_4 = FUNC_2(VAR_1, VAR_2);
 else

  VAR_4 = FUNC_3(VAR_1, VAR_2);
 return (VAR_4 == VAR_0 ? VAR_0 : 1);
}
