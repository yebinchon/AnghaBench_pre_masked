
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer {int dummy; } ;


 int FUNC_0 (char**,int ,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,struct printer*) ;
 int VAR_0 ;

int
FUNC_3(const char *VAR_1, struct printer *VAR_2)
{
 int VAR_3;
 char *VAR_4;

 if ((VAR_3 = FUNC_0(&VAR_4, VAR_0, VAR_1)) < 0)
  return VAR_3;
 VAR_3 = FUNC_2(VAR_4, VAR_2);
 FUNC_1(VAR_4);
 return VAR_3;
}
