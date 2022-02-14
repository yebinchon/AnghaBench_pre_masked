
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {scalar_t__ value; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_3(const struct option *VAR_2, const char *VAR_3,
         int VAR_4)
{
 char *VAR_5;
 const char **VAR_6 = (const char **)VAR_2->value;
 FUNC_0(VAR_4);
 if (!VAR_3)
  VAR_3 = "";
 VAR_1 = FUNC_2(VAR_3, &VAR_5, 10);
 if (*VAR_5 == ',')
  *VAR_6 = VAR_5 + 1;
 else if (*VAR_5)
  return FUNC_1("unrecognized reflog param '%s'", VAR_3);
 else
  *VAR_6 = ((void*)0);
 if (VAR_1 <= 0)
  VAR_1 = VAR_0;
 return 0;
}
