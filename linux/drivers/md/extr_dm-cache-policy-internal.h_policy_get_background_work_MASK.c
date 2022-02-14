
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct policy_work {int dummy; } ;
struct dm_cache_policy {int (* get_background_work ) (struct dm_cache_policy*,int,struct policy_work**) ;} ;


 int FUNC_0 (struct dm_cache_policy*,int,struct policy_work**) ;

__attribute__((used)) static inline int FUNC_1(struct dm_cache_policy *VAR_0,
          bool VAR_1, struct policy_work **VAR_2)
{
 return VAR_0->get_background_work(VAR_0, VAR_1, VAR_2);
}
