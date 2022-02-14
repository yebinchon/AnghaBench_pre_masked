
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_policy {void (* tick ) (struct dm_cache_policy*,int) ;} ;


 void FUNC_0 (struct dm_cache_policy*,int) ;

__attribute__((used)) static inline void FUNC_1(struct dm_cache_policy *VAR_0, bool VAR_1)
{
 if (VAR_0->tick)
  return VAR_0->tick(VAR_0, VAR_1);
}
