
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_policy {int (* lookup ) (struct dm_cache_policy*,int ,int *,int,int,int*) ;} ;
typedef int dm_oblock_t ;
typedef int dm_cblock_t ;


 int FUNC_0 (struct dm_cache_policy*,int ,int *,int,int,int*) ;

__attribute__((used)) static inline int FUNC_1(struct dm_cache_policy *VAR_0, dm_oblock_t VAR_1, dm_cblock_t *VAR_2,
    int VAR_3, bool VAR_4, bool *VAR_5)
{
 return VAR_0->lookup(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
