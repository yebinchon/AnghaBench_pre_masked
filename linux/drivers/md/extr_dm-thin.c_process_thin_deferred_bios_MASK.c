
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_list {int dummy; } ;
struct thin_c {int lock; struct bio_list deferred_bio_list; scalar_t__ requeue_mode; struct pool* pool; } ;
struct pool {int pmd; int throttle; int (* process_bio ) (struct thin_c*,struct bio*) ;int (* process_discard ) (struct thin_c*,struct bio*) ;} ;
struct blk_plug {int dummy; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct thin_c*) ;
 int FUNC_1 (struct bio_list*,struct bio*) ;
 scalar_t__ FUNC_2 (struct bio_list*) ;
 int FUNC_3 (struct bio_list*) ;
 int FUNC_4 (struct bio_list*,struct bio_list*) ;
 struct bio* FUNC_5 (struct bio_list*) ;
 scalar_t__ FUNC_6 (struct bio*) ;
 int FUNC_7 (struct blk_plug*) ;
 int FUNC_8 (struct blk_plug*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct pool*) ;
 int FUNC_11 (struct thin_c*,struct bio_list*,int ) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (struct thin_c*,struct bio*) ;
 int FUNC_15 (struct thin_c*,struct bio*) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void FUNC_17(struct thin_c *VAR_2)
{
 struct pool *VAR_3 = VAR_2->pool;
 unsigned long VAR_4;
 struct bio *VAR_5;
 struct bio_list VAR_6;
 struct blk_plug VAR_7;
 unsigned VAR_8 = 0;

 if (VAR_2->requeue_mode) {
  FUNC_11(VAR_2, &VAR_2->deferred_bio_list,
    VAR_0);
  return;
 }

 FUNC_3(&VAR_6);

 FUNC_12(&VAR_2->lock, VAR_4);

 if (FUNC_2(&VAR_2->deferred_bio_list)) {
  FUNC_13(&VAR_2->lock, VAR_4);
  return;
 }

 FUNC_0(VAR_2);

 FUNC_4(&VAR_6, &VAR_2->deferred_bio_list);
 FUNC_3(&VAR_2->deferred_bio_list);

 FUNC_13(&VAR_2->lock, VAR_4);

 FUNC_8(&VAR_7);
 while ((VAR_5 = FUNC_5(&VAR_6))) {





  if (FUNC_10(VAR_3)) {
   FUNC_12(&VAR_2->lock, VAR_4);
   FUNC_1(&VAR_2->deferred_bio_list, VAR_5);
   FUNC_4(&VAR_2->deferred_bio_list, &VAR_6);
   FUNC_13(&VAR_2->lock, VAR_4);
   break;
  }

  if (FUNC_6(VAR_5) == VAR_1)
   VAR_3->process_discard(VAR_2, VAR_5);
  else
   VAR_3->process_bio(VAR_2, VAR_5);

  if ((VAR_8++ & 127) == 0) {
   FUNC_16(&VAR_3->throttle);
   FUNC_9(VAR_3->pmd);
  }
 }
 FUNC_7(&VAR_7);
}
