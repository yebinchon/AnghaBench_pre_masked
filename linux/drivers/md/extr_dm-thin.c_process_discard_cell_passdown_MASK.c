
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thin_c {int dummy; } ;
struct dm_thin_endio_hook {struct dm_bio_prison_cell* cell; } ;
struct TYPE_2__ {int block_end; int block_begin; } ;
struct dm_bio_prison_cell {TYPE_1__ key; struct bio* holder; } ;
struct bio {int dummy; } ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct thin_c*,int ,int ,struct bio*) ;
 struct dm_thin_endio_hook* FUNC_2 (struct bio*,int) ;

__attribute__((used)) static void FUNC_3(struct thin_c *VAR_0, struct dm_bio_prison_cell *VAR_1)
{
 struct bio *VAR_2 = VAR_1->holder;
 struct dm_thin_endio_hook *VAR_3 = FUNC_2(VAR_2, sizeof(struct dm_thin_endio_hook));






 VAR_3->cell = VAR_1;
 FUNC_1(VAR_0, VAR_1->key.block_begin, VAR_1->key.block_end, VAR_2);






 FUNC_0(VAR_2);
}
