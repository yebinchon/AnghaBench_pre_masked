
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_policy_type {int dummy; } ;


 scalar_t__ FUNC_0 (struct dm_cache_policy_type*) ;
 struct dm_cache_policy_type* FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static struct dm_cache_policy_type *FUNC_3(const char *VAR_0)
{
 struct dm_cache_policy_type *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (FUNC_0(VAR_1))
  return ((void*)0);

 if (VAR_1)
  return VAR_1;

 FUNC_2("dm-cache-%s", VAR_0);

 VAR_1 = FUNC_1(VAR_0);
 if (FUNC_0(VAR_1))
  return ((void*)0);

 return VAR_1;
}
