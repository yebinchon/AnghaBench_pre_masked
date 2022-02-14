
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_policy_type {struct dm_cache_policy* (* create ) (int ,int ,int ) ;} ;
struct dm_cache_policy {struct dm_cache_policy_type* private; } ;
typedef int sector_t ;
typedef int dm_cblock_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct dm_cache_policy* FUNC_1 (int ) ;
 struct dm_cache_policy_type* FUNC_2 (char const*) ;
 int FUNC_3 (struct dm_cache_policy_type*) ;
 struct dm_cache_policy* FUNC_4 (int ,int ,int ) ;

struct dm_cache_policy *FUNC_5(const char *VAR_2,
            dm_cblock_t VAR_3,
            sector_t VAR_4,
            sector_t VAR_5)
{
 struct dm_cache_policy *VAR_6 = ((void*)0);
 struct dm_cache_policy_type *VAR_7;

 VAR_7 = FUNC_2(VAR_2);
 if (!VAR_7) {
  FUNC_0("unknown policy type");
  return FUNC_1(-VAR_0);
 }

 VAR_6 = VAR_7->create(VAR_3, VAR_4, VAR_5);
 if (!VAR_6) {
  FUNC_3(VAR_7);
  return FUNC_1(-VAR_1);
 }
 VAR_6->private = VAR_7;

 return VAR_6;
}
