
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int cmd_flags; } ;
struct bfq_queue {int* queued; scalar_t__ last_request_pos; int meta_pending; } ;
struct bfq_data {int idle_slice_timer; struct bfq_queue* in_service_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfq_queue*) ;
 int FUNC_1 (struct bfq_data*,struct bfq_queue*,int,int ) ;
 scalar_t__ FUNC_2 (struct bfq_queue*) ;
 int FUNC_3 (struct bfq_queue*) ;
 scalar_t__ FUNC_4 (struct request*) ;
 int FUNC_5 (struct request*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct bfq_data*,struct bfq_queue*) ;
 size_t FUNC_8 (struct request*) ;

__attribute__((used)) static void FUNC_9(struct bfq_data *VAR_2, struct bfq_queue *VAR_3,
       struct request *VAR_4)
{
 if (VAR_4->cmd_flags & VAR_1)
  VAR_3->meta_pending++;

 VAR_3->last_request_pos = FUNC_4(VAR_4) + FUNC_5(VAR_4);

 if (VAR_3 == VAR_2->in_service_queue && FUNC_2(VAR_3)) {
  bool VAR_5 = VAR_3->queued[FUNC_8(VAR_4)] == 1 &&
     FUNC_5(VAR_4) < 32;
  bool VAR_6 = FUNC_0(VAR_3);
  if (VAR_5 && FUNC_7(VAR_2, VAR_3) &&
      !VAR_6)
   return;
  FUNC_3(VAR_3);
  FUNC_6(&VAR_2->idle_slice_timer);
  if (VAR_6)
   FUNC_1(VAR_2, VAR_3, 0,
     VAR_0);
 }
}
