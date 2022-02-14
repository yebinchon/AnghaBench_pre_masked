
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct throtl_service_queue {scalar_t__* nr_queued; struct throtl_service_queue* parent_sq; } ;
struct throtl_grp {int flags; } ;
struct throtl_data {int dispatch_work; struct request_queue* queue; } ;
struct request_queue {int queue_lock; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 () ;
 struct throtl_service_queue* FUNC_1 (int ,struct timer_list*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct throtl_service_queue* VAR_5 ;
 struct throtl_data* FUNC_5 (struct throtl_service_queue*) ;
 struct throtl_grp* FUNC_6 (struct throtl_service_queue*) ;
 int FUNC_7 (struct throtl_grp*) ;
 scalar_t__ FUNC_8 (struct throtl_data*,int *) ;
 int FUNC_9 (struct throtl_service_queue*,char*,int,...) ;
 scalar_t__ FUNC_10 (struct throtl_service_queue*,int) ;
 int FUNC_11 (struct throtl_service_queue*) ;
 int FUNC_12 (struct throtl_data*) ;

__attribute__((used)) static void FUNC_13(struct timer_list *VAR_6)
{
 struct throtl_service_queue *VAR_7 = FUNC_1(VAR_7, VAR_6, VAR_4);
 struct throtl_grp *VAR_8 = FUNC_6(VAR_7);
 struct throtl_data *VAR_9 = FUNC_5(VAR_7);
 struct request_queue *VAR_10 = VAR_9->queue;
 struct throtl_service_queue *VAR_11;
 bool VAR_12;
 int VAR_13;

 FUNC_3(&VAR_10->queue_lock);
 if (FUNC_8(VAR_9, ((void*)0)))
  FUNC_12(VAR_9);

again:
 VAR_11 = VAR_7->parent_sq;
 VAR_12 = 0;

 while (1) {
  FUNC_9(VAR_7, "dispatch nr_queued=%u read=%u write=%u",
      VAR_7->nr_queued[VAR_0] + VAR_7->nr_queued[VAR_2],
      VAR_7->nr_queued[VAR_0], VAR_7->nr_queued[VAR_2]);

  VAR_13 = FUNC_11(VAR_7);
  if (VAR_13) {
   FUNC_9(VAR_7, "bios disp=%u", VAR_13);
   VAR_12 = 1;
  }

  if (FUNC_10(VAR_7, 0))
   break;


  FUNC_4(&VAR_10->queue_lock);
  FUNC_0();
  FUNC_3(&VAR_10->queue_lock);
 }

 if (!VAR_12)
  goto out_unlock;

 if (VAR_11) {

  if (VAR_8->flags & VAR_1) {
   FUNC_7(VAR_8);
   if (!FUNC_10(VAR_11, 0)) {

    VAR_7 = VAR_11;
    VAR_8 = FUNC_6(VAR_7);
    goto again;
   }
  }
 } else {

  FUNC_2(VAR_3, &VAR_9->dispatch_work);
 }
out_unlock:
 FUNC_4(&VAR_10->queue_lock);
}
