
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_c {struct pool* pool; int td; } ;
struct pool {int pool_md; int mapping_pool; int pmd; } ;
struct dm_thin_new_mapping {scalar_t__ data_block; scalar_t__ maybe_shared; int cell; int bio; scalar_t__ virt_end; scalar_t__ virt_begin; struct thin_c* tc; } ;
struct discard_op {int dummy; } ;
struct bio {struct dm_thin_new_mapping* bi_private; int bi_end_io; } ;
typedef scalar_t__ dm_block_t ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct discard_op*,struct thin_c*,struct bio*) ;
 struct bio* FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct thin_c*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__,scalar_t__) ;
 int FUNC_7 (int ,scalar_t__,scalar_t__) ;
 int FUNC_8 (struct discard_op*,int) ;
 int FUNC_9 (struct discard_op*,scalar_t__,scalar_t__) ;
 int FUNC_10 (struct dm_thin_new_mapping*,int *) ;
 int FUNC_11 (struct pool*,char*,int) ;
 int FUNC_12 (struct dm_thin_new_mapping*,struct bio*) ;
 int VAR_1 ;
 int FUNC_13 (struct dm_thin_new_mapping*) ;

__attribute__((used)) static void FUNC_14(struct dm_thin_new_mapping *VAR_2)
{
 int VAR_3;
 struct thin_c *VAR_4 = VAR_2->tc;
 struct pool *VAR_5 = VAR_4->pool;
 struct bio *VAR_6;
 dm_block_t VAR_7 = VAR_2->data_block + (VAR_2->virt_end - VAR_2->virt_begin);






 VAR_3 = FUNC_7(VAR_4->td, VAR_2->virt_begin, VAR_2->virt_end);
 if (VAR_3) {
  FUNC_11(VAR_5, "dm_thin_remove_range", VAR_3);
  FUNC_3(VAR_2->bio);
  FUNC_4(VAR_4, VAR_2->cell);
  FUNC_10(VAR_2, &VAR_5->mapping_pool);
  return;
 }





 VAR_3 = FUNC_6(VAR_5->pmd, VAR_2->data_block, VAR_7);
 if (VAR_3) {
  FUNC_11(VAR_5, "dm_pool_inc_data_range", VAR_3);
  FUNC_3(VAR_2->bio);
  FUNC_4(VAR_4, VAR_2->cell);
  FUNC_10(VAR_2, &VAR_5->mapping_pool);
  return;
 }

 VAR_6 = FUNC_2(VAR_0, 1);
 if (!VAR_6) {
  FUNC_0("%s: unable to allocate top level discard bio for passdown. Skipping passdown.",
         FUNC_5(VAR_4->pool->pool_md));
  FUNC_13(VAR_2);

 } else {
  VAR_6->bi_end_io = VAR_1;
  VAR_6->bi_private = VAR_2;

  if (VAR_2->maybe_shared)
   FUNC_12(VAR_2, VAR_6);
  else {
   struct discard_op VAR_8;

   FUNC_1(&VAR_8, VAR_4, VAR_6);
   VAR_3 = FUNC_9(&VAR_8, VAR_2->data_block, VAR_7);
   FUNC_8(&VAR_8, VAR_3);
  }
 }
}
