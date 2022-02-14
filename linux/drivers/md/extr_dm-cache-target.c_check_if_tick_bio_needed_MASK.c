
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct per_bio_data {int tick; } ;
struct cache {int need_tick_bio; int lock; } ;
struct bio {int bi_opf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 struct per_bio_data* FUNC_1 (struct bio*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct cache *VAR_1, struct bio *VAR_2)
{
 unsigned long VAR_3;
 struct per_bio_data *VAR_4;

 FUNC_3(&VAR_1->lock, VAR_3);
 if (VAR_1->need_tick_bio && !FUNC_2(VAR_2->bi_opf) &&
     FUNC_0(VAR_2) != VAR_0) {
  VAR_4 = FUNC_1(VAR_2);
  VAR_4->tick = 1;
  VAR_1->need_tick_bio = 0;
 }
 FUNC_4(&VAR_1->lock, VAR_3);
}
