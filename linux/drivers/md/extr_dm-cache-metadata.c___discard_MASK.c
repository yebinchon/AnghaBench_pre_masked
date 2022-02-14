
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_metadata {int changed; } ;
typedef int dm_dblock_t ;


 int FUNC_0 (struct dm_cache_metadata*,int ) ;
 int FUNC_1 (struct dm_cache_metadata*,int ) ;
 int FUNC_2 (struct dm_cache_metadata*,int ) ;

__attribute__((used)) static int FUNC_3(struct dm_cache_metadata *VAR_0,
       dm_dblock_t VAR_1, bool VAR_2)
{
 int VAR_3;

 VAR_3 = (VAR_2 ? FUNC_1 : FUNC_0)(VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_0->changed = 1;
 return 0;
}
