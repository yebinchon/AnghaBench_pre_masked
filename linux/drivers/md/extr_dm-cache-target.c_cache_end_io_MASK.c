
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct per_bio_data {scalar_t__ tick; } ;
struct dm_target {struct cache* private; } ;
struct cache {int need_tick_bio; int lock; int policy; } ;
struct bio {int dummy; } ;
typedef int blk_status_t ;


 int VAR_0 ;
 int FUNC_0 (struct cache*,struct bio*) ;
 int FUNC_1 (struct cache*,struct bio*) ;
 struct per_bio_data* FUNC_2 (struct bio*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct dm_target *VAR_1, struct bio *VAR_2, blk_status_t *VAR_3)
{
 struct cache *VAR_4 = VAR_1->private;
 unsigned long VAR_5;
 struct per_bio_data *VAR_6 = FUNC_2(VAR_2);

 if (VAR_6->tick) {
  FUNC_3(VAR_4->policy, 0);

  FUNC_4(&VAR_4->lock, VAR_5);
  VAR_4->need_tick_bio = 1;
  FUNC_5(&VAR_4->lock, VAR_5);
 }

 FUNC_1(VAR_4, VAR_2);
 FUNC_0(VAR_4, VAR_2);

 return VAR_0;
}
