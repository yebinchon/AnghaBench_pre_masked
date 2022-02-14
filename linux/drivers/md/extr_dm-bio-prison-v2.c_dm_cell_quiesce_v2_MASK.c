
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct dm_bio_prison_v2 {int lock; } ;
struct dm_bio_prison_cell_v2 {int dummy; } ;


 int FUNC_0 (struct dm_bio_prison_v2*,struct dm_bio_prison_cell_v2*,struct work_struct*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct dm_bio_prison_v2 *VAR_0,
   struct dm_bio_prison_cell_v2 *VAR_1,
   struct work_struct *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_0->lock, VAR_3);
 FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->lock, VAR_3);
}
