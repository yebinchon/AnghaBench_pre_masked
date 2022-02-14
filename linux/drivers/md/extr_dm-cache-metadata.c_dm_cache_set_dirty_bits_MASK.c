
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_metadata {int dummy; } ;


 int FUNC_0 (struct dm_cache_metadata*) ;
 int FUNC_1 (struct dm_cache_metadata*) ;
 int FUNC_2 (struct dm_cache_metadata*,unsigned int,unsigned long*) ;
 int FUNC_3 (struct dm_cache_metadata*,unsigned int,unsigned long*) ;
 scalar_t__ FUNC_4 (struct dm_cache_metadata*) ;

int FUNC_5(struct dm_cache_metadata *VAR_0,
       unsigned VAR_1,
       unsigned long *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_0);
 if (FUNC_4(VAR_0))
  VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2);
 else
  VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 FUNC_1(VAR_0);

 return VAR_3;
}
