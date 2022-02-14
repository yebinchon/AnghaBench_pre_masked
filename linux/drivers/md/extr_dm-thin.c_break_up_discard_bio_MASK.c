
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thin_c {struct pool* pool; int td; } ;
struct pool {int (* process_prepared_discard ) (struct dm_thin_new_mapping*) ;int all_io_ds; } ;
struct dm_thin_new_mapping {int maybe_shared; int list; struct bio* bio; struct dm_bio_prison_cell* cell; scalar_t__ data_block; scalar_t__ virt_end; scalar_t__ virt_begin; struct thin_c* tc; } ;
struct dm_cell_key {int dummy; } ;
struct dm_bio_prison_cell {int dummy; } ;
struct bio {int dummy; } ;
typedef scalar_t__ dm_block_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pool*,struct dm_cell_key*,int *,struct dm_bio_prison_cell**) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (int ,int ,scalar_t__,scalar_t__,struct dm_cell_key*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*,int*) ;
 int FUNC_5 (struct pool*) ;
 struct dm_thin_new_mapping* FUNC_6 (struct pool*) ;
 int FUNC_7 (struct dm_thin_new_mapping*) ;

__attribute__((used)) static void FUNC_8(struct thin_c *VAR_1, dm_block_t VAR_2, dm_block_t VAR_3,
     struct bio *VAR_4)
{
 struct pool *VAR_5 = VAR_1->pool;

 int VAR_6;
 bool VAR_7;
 struct dm_cell_key VAR_8;
 struct dm_bio_prison_cell *VAR_9;
 struct dm_thin_new_mapping *VAR_10;
 dm_block_t VAR_11, VAR_12, VAR_13;

 while (VAR_2 != VAR_3) {
  VAR_6 = FUNC_5(VAR_5);
  if (VAR_6)

   return;

  VAR_6 = FUNC_4(VAR_1->td, VAR_2, VAR_3, &VAR_11, &VAR_12,
           &VAR_13, &VAR_7);
  if (VAR_6)




   break;

  FUNC_2(VAR_1->td, VAR_0, VAR_13, VAR_13 + (VAR_12 - VAR_11), &VAR_8);
  if (FUNC_0(VAR_1->pool, &VAR_8, ((void*)0), &VAR_9)) {

   VAR_2 = VAR_12;
   continue;
  }





  VAR_10 = FUNC_6(VAR_5);
  VAR_10->tc = VAR_1;
  VAR_10->maybe_shared = VAR_7;
  VAR_10->virt_begin = VAR_11;
  VAR_10->virt_end = VAR_12;
  VAR_10->data_block = VAR_13;
  VAR_10->cell = VAR_9;
  VAR_10->bio = VAR_4;
  FUNC_1(VAR_4);
  if (!FUNC_3(VAR_5->all_io_ds, &VAR_10->list))
   VAR_5->process_prepared_discard(VAR_10);

  VAR_2 = VAR_12;
 }
}
