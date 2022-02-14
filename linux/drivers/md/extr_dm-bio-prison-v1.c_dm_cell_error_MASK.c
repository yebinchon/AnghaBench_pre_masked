
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bio_prison_cell {int dummy; } ;
struct dm_bio_prison {int dummy; } ;
struct bio_list {int dummy; } ;
struct bio {int bi_status; } ;
typedef int blk_status_t ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio_list*) ;
 struct bio* FUNC_2 (struct bio_list*) ;
 int FUNC_3 (struct dm_bio_prison*,struct dm_bio_prison_cell*,struct bio_list*) ;

void FUNC_4(struct dm_bio_prison *VAR_0,
     struct dm_bio_prison_cell *VAR_1, blk_status_t VAR_2)
{
 struct bio_list VAR_3;
 struct bio *VAR_4;

 FUNC_1(&VAR_3);
 FUNC_3(VAR_0, VAR_1, &VAR_3);

 while ((VAR_4 = FUNC_2(&VAR_3))) {
  VAR_4->bi_status = VAR_2;
  FUNC_0(VAR_4);
 }
}
