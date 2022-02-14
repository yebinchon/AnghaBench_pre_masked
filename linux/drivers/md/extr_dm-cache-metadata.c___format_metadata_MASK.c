
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_metadata {int clean_when_opened; int metadata_sm; int tm; scalar_t__ discard_nr_blocks; scalar_t__ discard_block_size; int discard_root; int discard_info; int dirty_root; int dirty_info; int root; int info; int bm; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct dm_cache_metadata*) ;
 int FUNC_2 (struct dm_cache_metadata*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int *,int *) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct dm_cache_metadata*) ;

__attribute__((used)) static int FUNC_10(struct dm_cache_metadata *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_7(VAR_1->bm, VAR_0,
     &VAR_1->tm, &VAR_1->metadata_sm);
 if (VAR_2 < 0) {
  FUNC_0("tm_create_with_sm failed");
  return VAR_2;
 }

 FUNC_1(VAR_1);

 VAR_2 = FUNC_3(&VAR_1->info, &VAR_1->root);
 if (VAR_2 < 0)
  goto bad;

 if (FUNC_9(VAR_1)) {
  FUNC_5(VAR_1->tm, &VAR_1->dirty_info);
  VAR_2 = FUNC_4(&VAR_1->dirty_info, &VAR_1->dirty_root);
  if (VAR_2 < 0)
   goto bad;
 }

 FUNC_5(VAR_1->tm, &VAR_1->discard_info);
 VAR_2 = FUNC_4(&VAR_1->discard_info, &VAR_1->discard_root);
 if (VAR_2 < 0)
  goto bad;

 VAR_1->discard_block_size = 0;
 VAR_1->discard_nr_blocks = 0;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  goto bad;

 VAR_1->clean_when_opened = 1;
 return 0;

bad:
 FUNC_8(VAR_1->tm);
 FUNC_6(VAR_1->metadata_sm);

 return VAR_2;
}
