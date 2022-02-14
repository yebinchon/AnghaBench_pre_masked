
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_policy_type {unsigned int const* version; } ;
struct dm_cache_policy {struct dm_cache_policy_type* private; } ;



const unsigned *FUNC_0(struct dm_cache_policy *VAR_0)
{
 struct dm_cache_policy_type *VAR_1 = VAR_0->private;

 return VAR_1->version;
}
