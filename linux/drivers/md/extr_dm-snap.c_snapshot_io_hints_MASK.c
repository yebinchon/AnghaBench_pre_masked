
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct queue_limits {int max_discard_sectors; int discard_granularity; } ;
struct dm_target {struct dm_snapshot* private; } ;
struct dm_snapshot {TYPE_1__* store; scalar_t__ discard_zeroes_cow; } ;
struct TYPE_2__ {int chunk_size; } ;


 int FUNC_0 (struct dm_snapshot*,struct dm_snapshot**,struct dm_snapshot**,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct dm_target *VAR_1, struct queue_limits *VAR_2)
{
 struct dm_snapshot *VAR_3 = VAR_1->private;

 if (VAR_3->discard_zeroes_cow) {
  struct dm_snapshot *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);

  FUNC_1(&VAR_0);

  (void) FUNC_0(VAR_3, &VAR_4, &VAR_5, ((void*)0));
  if (VAR_4 && VAR_5)
   VAR_3 = VAR_4;


  VAR_2->discard_granularity = VAR_3->store->chunk_size;
  VAR_2->max_discard_sectors = VAR_3->store->chunk_size;

  FUNC_2(&VAR_0);
 }
}
