
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum cache_policy_t { ____Placeholder_cache_policy_t } cache_policy_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static enum cache_policy_t
FUNC_1(const char *VAR_3)
{

 if (FUNC_0(VAR_3, "fifo") == 0)
  return (VAR_0);
 else if (FUNC_0(VAR_3, "lru") == 0)
  return (VAR_2);
 else if (FUNC_0(VAR_3, "lfu") == 0)
  return (VAR_1);

 return (-1);
}
