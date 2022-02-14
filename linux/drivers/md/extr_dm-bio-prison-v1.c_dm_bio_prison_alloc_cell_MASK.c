
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bio_prison_cell {int dummy; } ;
struct dm_bio_prison {int cell_pool; } ;
typedef int gfp_t ;


 struct dm_bio_prison_cell* FUNC_0 (int *,int ) ;

struct dm_bio_prison_cell *FUNC_1(struct dm_bio_prison *VAR_0, gfp_t VAR_1)
{
 return FUNC_0(&VAR_0->cell_pool, VAR_1);
}
