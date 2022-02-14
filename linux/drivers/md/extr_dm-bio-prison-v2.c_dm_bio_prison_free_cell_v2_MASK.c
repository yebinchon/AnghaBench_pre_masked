
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bio_prison_v2 {int cell_pool; } ;
struct dm_bio_prison_cell_v2 {int dummy; } ;


 int FUNC_0 (struct dm_bio_prison_cell_v2*,int *) ;

void FUNC_1(struct dm_bio_prison_v2 *VAR_0,
    struct dm_bio_prison_cell_v2 *VAR_1)
{
 FUNC_0(VAR_1, &VAR_0->cell_pool);
}
