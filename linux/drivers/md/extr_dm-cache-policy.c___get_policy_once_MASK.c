
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_policy_type {int owner; } ;


 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 struct dm_cache_policy_type* FUNC_1 (int ) ;
 struct dm_cache_policy_type* FUNC_2 (char const*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static struct dm_cache_policy_type *FUNC_4(const char *VAR_1)
{
 struct dm_cache_policy_type *VAR_2 = FUNC_2(VAR_1);

 if (VAR_2 && !FUNC_3(VAR_2->owner)) {
  FUNC_0("couldn't get module %s", VAR_1);
  VAR_2 = FUNC_1(-VAR_0);
 }

 return VAR_2;
}
