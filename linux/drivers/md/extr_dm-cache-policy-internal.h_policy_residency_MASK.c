
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_policy {int (* residency ) (struct dm_cache_policy*) ;} ;
typedef int dm_cblock_t ;


 int FUNC_0 (struct dm_cache_policy*) ;

__attribute__((used)) static inline dm_cblock_t FUNC_1(struct dm_cache_policy *VAR_0)
{
 return VAR_0->residency(VAR_0);
}
