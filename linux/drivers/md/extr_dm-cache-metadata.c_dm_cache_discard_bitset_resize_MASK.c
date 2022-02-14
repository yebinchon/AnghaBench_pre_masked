
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_metadata {int changed; int discard_nr_blocks; int discard_block_size; int discard_root; int discard_info; } ;
typedef int sector_t ;
typedef int dm_dblock_t ;


 int FUNC_0 (struct dm_cache_metadata*) ;
 int FUNC_1 (struct dm_cache_metadata*) ;
 int FUNC_2 (int *,int ,int ,int ,int,int *) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct dm_cache_metadata *VAR_0,
       sector_t VAR_1,
       dm_dblock_t VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_0);
 VAR_3 = FUNC_2(&VAR_0->discard_info,
        VAR_0->discard_root,
        FUNC_3(VAR_0->discard_nr_blocks),
        FUNC_3(VAR_2),
        0, &VAR_0->discard_root);
 if (!VAR_3) {
  VAR_0->discard_block_size = VAR_1;
  VAR_0->discard_nr_blocks = VAR_2;
 }

 VAR_0->changed = 1;
 FUNC_1(VAR_0);

 return VAR_3;
}
