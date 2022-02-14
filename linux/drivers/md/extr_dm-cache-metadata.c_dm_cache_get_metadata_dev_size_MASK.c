
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_metadata {int metadata_sm; int fail_io; } ;
typedef int dm_block_t ;


 int VAR_0 ;
 int FUNC_0 (struct dm_cache_metadata*) ;
 int FUNC_1 (struct dm_cache_metadata*) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(struct dm_cache_metadata *VAR_1,
       dm_block_t *VAR_2)
{
 int VAR_3 = -VAR_0;

 FUNC_0(VAR_1);
 if (!VAR_1->fail_io)
  VAR_3 = FUNC_2(VAR_1->metadata_sm, VAR_2);
 FUNC_1(VAR_1);

 return VAR_3;
}
