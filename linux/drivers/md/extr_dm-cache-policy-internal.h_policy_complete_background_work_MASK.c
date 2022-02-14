
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct policy_work {int dummy; } ;
struct dm_cache_policy {void (* complete_background_work ) (struct dm_cache_policy*,struct policy_work*,int) ;} ;


 void FUNC_0 (struct dm_cache_policy*,struct policy_work*,int) ;

__attribute__((used)) static inline void FUNC_1(struct dm_cache_policy *VAR_0,
         struct policy_work *VAR_1,
         bool VAR_2)
{
 return VAR_0->complete_background_work(VAR_0, VAR_1, VAR_2);
}
