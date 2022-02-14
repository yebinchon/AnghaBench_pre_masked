
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int dummy; } ;


 int FUNC_0 (int,char*,char*) ;
 struct passwd* FUNC_1 (char*) ;
 struct passwd* FUNC_2 (long) ;
 long FUNC_3 (char*,char**,int) ;

__attribute__((used)) static struct passwd *
FUNC_4(char *VAR_0)
{
 struct passwd *VAR_1;
 long VAR_2;
 char *VAR_3;





 if ((VAR_1 = FUNC_1(VAR_0)))
  return(VAR_1);
 VAR_2 = FUNC_3(VAR_0, &VAR_3, 10);
 if (*VAR_0 && !*VAR_3 && (VAR_1 = FUNC_2(VAR_2)))
  return(VAR_1);
 FUNC_0(1, "%s: no such user", VAR_0);

}
