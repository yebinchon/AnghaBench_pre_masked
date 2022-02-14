
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cell_key {int dummy; } ;
struct dm_bio_prison_cell {int dummy; } ;
struct dm_bio_prison {int lock; } ;
struct bio {int dummy; } ;


 int FUNC_0 (struct dm_bio_prison*,struct dm_cell_key*,struct bio*,struct dm_bio_prison_cell*,struct dm_bio_prison_cell**) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct dm_bio_prison *VAR_0,
        struct dm_cell_key *VAR_1,
        struct bio *VAR_2,
        struct dm_bio_prison_cell *VAR_3,
        struct dm_bio_prison_cell **VAR_4)
{
 int VAR_5;
 unsigned long VAR_6;

 FUNC_1(&VAR_0->lock, VAR_6);
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_2(&VAR_0->lock, VAR_6);

 return VAR_5;
}
