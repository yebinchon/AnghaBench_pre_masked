
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_metadata {int fail_io; } ;


 int FUNC_0 (struct dm_cache_metadata*) ;
 int FUNC_1 (struct dm_cache_metadata*) ;
 int FUNC_2 (struct dm_cache_metadata*,int) ;
 int FUNC_3 (struct dm_cache_metadata*) ;

int FUNC_4(struct dm_cache_metadata *VAR_0)
{
 int VAR_1;

 FUNC_0(VAR_0);
 FUNC_3(VAR_0);
 VAR_1 = FUNC_2(VAR_0, 0);
 if (VAR_1)
  VAR_0->fail_io = 1;
 FUNC_1(VAR_0);

 return VAR_1;
}
