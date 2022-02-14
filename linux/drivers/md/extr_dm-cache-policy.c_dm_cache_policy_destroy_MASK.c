
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_policy_type {int dummy; } ;
struct dm_cache_policy {int (* destroy ) (struct dm_cache_policy*) ;struct dm_cache_policy_type* private; } ;


 int FUNC_0 (struct dm_cache_policy_type*) ;
 int FUNC_1 (struct dm_cache_policy*) ;

void FUNC_2(struct dm_cache_policy *VAR_0)
{
 struct dm_cache_policy_type *VAR_1 = VAR_0->private;

 VAR_0->destroy(VAR_0);
 FUNC_0(VAR_1);
}
