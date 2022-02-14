
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct queue_limits {int io_opt; int max_sectors; scalar_t__ discard_granularity; } ;
struct TYPE_2__ {int discard_enabled; } ;
struct pool_c {TYPE_1__ adjusted_pf; struct pool* pool; } ;
struct pool {int sectors_per_block; } ;
struct dm_target {struct pool_c* private; } ;
typedef int sector_t ;


 int VAR_0 ;
 int FUNC_0 (struct queue_limits*,int) ;
 int FUNC_1 (struct queue_limits*,int) ;
 int FUNC_2 (struct pool_c*) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct dm_target *VAR_1, struct queue_limits *VAR_2)
{
 struct pool_c *VAR_3 = VAR_1->private;
 struct pool *VAR_4 = VAR_3->pool;
 sector_t VAR_5 = VAR_2->io_opt >> VAR_0;
 if (VAR_2->max_sectors < VAR_4->sectors_per_block) {
  while (!FUNC_3(VAR_4->sectors_per_block, VAR_2->max_sectors)) {
   if ((VAR_2->max_sectors & (VAR_2->max_sectors - 1)) == 0)
    VAR_2->max_sectors--;
   VAR_2->max_sectors = FUNC_4(VAR_2->max_sectors);
  }
 }





 if (VAR_5 < VAR_4->sectors_per_block ||
     !FUNC_3(VAR_5, VAR_4->sectors_per_block)) {
  if (FUNC_3(VAR_4->sectors_per_block, VAR_2->max_sectors))
   FUNC_0(VAR_2, VAR_2->max_sectors << VAR_0);
  else
   FUNC_0(VAR_2, VAR_4->sectors_per_block << VAR_0);
  FUNC_1(VAR_2, VAR_4->sectors_per_block << VAR_0);
 }






 if (!VAR_3->adjusted_pf.discard_enabled) {






  VAR_2->discard_granularity = 0;
  return;
 }

 FUNC_2(VAR_3);





}
