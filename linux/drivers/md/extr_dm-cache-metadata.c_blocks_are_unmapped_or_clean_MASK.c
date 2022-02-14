
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_metadata {int dummy; } ;
typedef int dm_cblock_t ;


 int FUNC_0 (struct dm_cache_metadata*,int ,int ,int*) ;
 int FUNC_1 (struct dm_cache_metadata*,int ,int ,int*) ;
 scalar_t__ FUNC_2 (struct dm_cache_metadata*) ;

__attribute__((used)) static int FUNC_3(struct dm_cache_metadata *VAR_0,
     dm_cblock_t VAR_1, dm_cblock_t VAR_2,
     bool *VAR_3)
{
 if (FUNC_2(VAR_0))
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 else
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
