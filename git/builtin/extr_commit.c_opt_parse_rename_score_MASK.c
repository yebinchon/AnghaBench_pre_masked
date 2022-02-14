
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char** value; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const struct option *VAR_0, const char *VAR_1, int VAR_2)
{
 const char **VAR_3 = VAR_0->value;

 FUNC_0(VAR_2);

 if (VAR_1 != ((void*)0) && *VAR_1 == '=')
  VAR_1 = VAR_1 + 1;

 *VAR_3 = VAR_1;
 return 0;
}
