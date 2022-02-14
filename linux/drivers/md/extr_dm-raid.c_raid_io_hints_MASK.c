
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chunk_sectors; } ;
struct raid_set {TYPE_1__ md; } ;
struct queue_limits {unsigned int discard_granularity; int max_discard_sectors; } ;
struct dm_target {struct raid_set* private; } ;


 int FUNC_0 (struct queue_limits*,unsigned int) ;
 int FUNC_1 (struct queue_limits*,unsigned int) ;
 unsigned int FUNC_2 (struct raid_set*) ;
 scalar_t__ FUNC_3 (struct raid_set*) ;
 scalar_t__ FUNC_4 (struct raid_set*) ;
 unsigned int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct dm_target *VAR_0, struct queue_limits *VAR_1)
{
 struct raid_set *VAR_2 = VAR_0->private;
 unsigned int VAR_3 = FUNC_5(VAR_2->md.chunk_sectors);

 FUNC_0(VAR_1, VAR_3);
 FUNC_1(VAR_1, VAR_3 * FUNC_2(VAR_2));





 if (FUNC_3(VAR_2) || FUNC_4(VAR_2)) {
  VAR_1->discard_granularity = VAR_3;
  VAR_1->max_discard_sectors = VAR_2->md.chunk_sectors;
 }
}
