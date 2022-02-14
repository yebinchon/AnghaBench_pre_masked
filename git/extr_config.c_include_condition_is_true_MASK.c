
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_options {int dummy; } ;


 int FUNC_0 (char const*,size_t) ;
 int FUNC_1 (struct config_options const*,char const*,size_t,int) ;
 scalar_t__ FUNC_2 (char const*,size_t,char*,char const**,size_t*) ;

__attribute__((used)) static int FUNC_3(const struct config_options *VAR_0,
         const char *VAR_1, size_t VAR_2)
{

 if (FUNC_2(VAR_1, VAR_2, "gitdir:", &VAR_1, &VAR_2))
  return FUNC_1(VAR_0, VAR_1, VAR_2, 0);
 else if (FUNC_2(VAR_1, VAR_2, "gitdir/i:", &VAR_1, &VAR_2))
  return FUNC_1(VAR_0, VAR_1, VAR_2, 1);
 else if (FUNC_2(VAR_1, VAR_2, "onbranch:", &VAR_1, &VAR_2))
  return FUNC_0(VAR_1, VAR_2);


 return 0;
}
