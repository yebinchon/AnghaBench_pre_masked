
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cell_key_v2 {int dummy; } ;
struct dm_bio_prison_v2 {int lock; } ;
struct dm_bio_prison_cell_v2 {int dummy; } ;
struct bio {int dummy; } ;


 int FUNC_0 (struct dm_bio_prison_v2*,struct dm_cell_key_v2*,unsigned int,struct bio*,struct dm_bio_prison_cell_v2*,struct dm_bio_prison_cell_v2**) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

bool FUNC_3(struct dm_bio_prison_v2 *VAR_0,
      struct dm_cell_key_v2 *VAR_1,
      unsigned VAR_2,
      struct bio *VAR_3,
      struct dm_bio_prison_cell_v2 *VAR_4,
      struct dm_bio_prison_cell_v2 **VAR_5)
{
 int VAR_6;
 unsigned long VAR_7;

 FUNC_1(&VAR_0->lock, VAR_7);
 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_2(&VAR_0->lock, VAR_7);

 return VAR_6;
}
