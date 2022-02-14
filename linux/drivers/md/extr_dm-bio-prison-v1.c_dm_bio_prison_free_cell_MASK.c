
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bio_prison_cell {int dummy; } ;
struct dm_bio_prison {int cell_pool; } ;


 int FUNC_0 (struct dm_bio_prison_cell*,int *) ;

void FUNC_1(struct dm_bio_prison *VAR_0,
        struct dm_bio_prison_cell *VAR_1)
{
 FUNC_0(VAR_1, &VAR_0->cell_pool);
}
