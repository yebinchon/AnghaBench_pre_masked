
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct metadata_stats {int era; int snap; void* total; void* used; } ;
struct era_metadata {int current_era; int metadata_snap; int sm; } ;
typedef void* dm_block_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,void**) ;
 int FUNC_2 (int ,void**) ;

__attribute__((used)) static int FUNC_3(struct era_metadata *VAR_0, void *VAR_1)
{
 int VAR_2;
 struct metadata_stats *VAR_3 = VAR_1;
 dm_block_t VAR_4, VAR_5;

 VAR_2 = FUNC_2(VAR_0->sm, &VAR_4);
 if (VAR_2) {
  FUNC_0("dm_sm_get_nr_free returned %d", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_1(VAR_0->sm, &VAR_5);
 if (VAR_2) {
  FUNC_0("dm_pool_get_metadata_dev_size returned %d", VAR_2);
  return VAR_2;
 }

 VAR_3->used = VAR_5 - VAR_4;
 VAR_3->total = VAR_5;
 VAR_3->snap = VAR_0->metadata_snap;
 VAR_3->era = VAR_0->current_era;

 return 0;
}
