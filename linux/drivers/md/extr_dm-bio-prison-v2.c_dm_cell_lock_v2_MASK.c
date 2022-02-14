
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cell_key_v2 {int dummy; } ;
struct dm_bio_prison_v2 {int lock; } ;
struct dm_bio_prison_cell_v2 {int dummy; } ;


 int FUNC_0 (struct dm_bio_prison_v2*,struct dm_cell_key_v2*,unsigned int,struct dm_bio_prison_cell_v2*,struct dm_bio_prison_cell_v2**) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct dm_bio_prison_v2 *VAR_0,
      struct dm_cell_key_v2 *VAR_1,
      unsigned VAR_2,
      struct dm_bio_prison_cell_v2 *VAR_3,
      struct dm_bio_prison_cell_v2 **VAR_4)
{
 int VAR_5;
 unsigned long VAR_6;

 FUNC_1(&VAR_0->lock, VAR_6);
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_2(&VAR_0->lock, VAR_6);

 return VAR_5;
}
