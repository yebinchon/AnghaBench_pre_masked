
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {scalar_t__ value; int long_name; scalar_t__ defval; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,char const*) ;

int FUNC_3(const struct option *VAR_0, const char *VAR_1,
       int VAR_2)
{
 int VAR_3;

 if (!VAR_1)
  VAR_1 = VAR_2 ? "never" : (const char *)VAR_0->defval;
 VAR_3 = FUNC_2(((void*)0), VAR_1);
 if (VAR_3 < 0)
  return FUNC_1(FUNC_0("option `%s' expects \"always\", \"auto\", or \"never\""),
        VAR_0->long_name);
 *(int *)VAR_0->value = VAR_3;
 return 0;
}
