
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,char const*,char const*) ;
 scalar_t__ FUNC_3 (char const*,int *) ;

int FUNC_4(timestamp_t *VAR_0, const char *VAR_1, const char *VAR_2)
{
 if (!VAR_2)
  return FUNC_1(VAR_1);
 if (FUNC_3(VAR_2, VAR_0))
  return FUNC_2(FUNC_0("'%s' for '%s' is not a valid timestamp"),
        VAR_2, VAR_1);
 return 0;
}
