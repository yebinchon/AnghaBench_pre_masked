
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thin_c {struct pool* pool; } ;
struct queue_limits {int discard_granularity; int max_discard_sectors; } ;
struct TYPE_2__ {int discard_enabled; } ;
struct pool {int sectors_per_block; TYPE_1__ pf; } ;
struct dm_target {struct thin_c* private; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct dm_target *VAR_1, struct queue_limits *VAR_2)
{
 struct thin_c *VAR_3 = VAR_1->private;
 struct pool *VAR_4 = VAR_3->pool;

 if (!VAR_4->pf.discard_enabled)
  return;

 VAR_2->discard_granularity = VAR_4->sectors_per_block << VAR_0;
 VAR_2->max_discard_sectors = 2048 * 1024 * 16;
}
