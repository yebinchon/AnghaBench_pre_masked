
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bio_prison_v2 {int cell_pool; } ;
struct dm_bio_prison_cell_v2 {int dummy; } ;
typedef int gfp_t ;


 struct dm_bio_prison_cell_v2* FUNC_0 (int *,int ) ;

struct dm_bio_prison_cell_v2 *FUNC_1(struct dm_bio_prison_v2 *VAR_0, gfp_t VAR_1)
{
 return FUNC_0(&VAR_0->cell_pool, VAR_1);
}
