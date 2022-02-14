
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int entry; int flags; } ;
typedef TYPE_2__ wait_queue_entry_t ;
struct wait_queue_head {int lock; } ;
struct sbitmap_queue {int ws_active; } ;
struct request {int dummy; } ;
struct blk_mq_hw_ctx {int flags; int dispatch_wait_lock; TYPE_2__ dispatch_wait; TYPE_1__* tags; } ;
struct TYPE_7__ {struct wait_queue_head wait; } ;
struct TYPE_5__ {struct sbitmap_queue bitmap_tags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wait_queue_head*,TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct request*) ;
 int FUNC_4 (struct blk_mq_hw_ctx*) ;
 TYPE_3__* FUNC_5 (struct sbitmap_queue*,struct blk_mq_hw_ctx*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static bool FUNC_13(struct blk_mq_hw_ctx *VAR_2,
     struct request *VAR_3)
{
 struct sbitmap_queue *VAR_4 = &VAR_2->tags->bitmap_tags;
 struct wait_queue_head *VAR_5;
 wait_queue_entry_t *VAR_6;
 bool VAR_7;

 if (!(VAR_2->flags & VAR_0)) {
  FUNC_4(VAR_2);
  return FUNC_3(VAR_3);
 }

 VAR_6 = &VAR_2->dispatch_wait;
 if (!FUNC_8(&VAR_6->entry))
  return 0;

 VAR_5 = &FUNC_5(VAR_4, VAR_2)->wait;

 FUNC_10(&VAR_5->lock);
 FUNC_9(&VAR_2->dispatch_wait_lock);
 if (!FUNC_7(&VAR_6->entry)) {
  FUNC_11(&VAR_2->dispatch_wait_lock);
  FUNC_12(&VAR_5->lock);
  return 0;
 }

 FUNC_2(&VAR_4->ws_active);
 VAR_6->flags &= ~VAR_1;
 FUNC_0(VAR_5, VAR_6);






 VAR_7 = FUNC_3(VAR_3);
 if (!VAR_7) {
  FUNC_11(&VAR_2->dispatch_wait_lock);
  FUNC_12(&VAR_5->lock);
  return 0;
 }





 FUNC_6(&VAR_6->entry);
 FUNC_1(&VAR_4->ws_active);
 FUNC_11(&VAR_2->dispatch_wait_lock);
 FUNC_12(&VAR_5->lock);

 return 1;
}
