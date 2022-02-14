
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int dummy; } ;
struct bfq_queue {int split_time; int burst_list_node; } ;
struct bfq_io_cq {scalar_t__ was_in_burst_list; scalar_t__ saved_in_large_burst; } ;
struct bfq_data {int burst_list; scalar_t__ large_burst; struct bfq_queue oom_bfqq; } ;


 int FUNC_0 (struct bfq_queue*) ;
 struct bfq_queue* FUNC_1 (struct bfq_data*,struct bio*,int,struct bfq_io_cq*) ;
 int FUNC_2 (struct bfq_queue*) ;
 int FUNC_3 (struct bfq_queue*) ;
 int FUNC_4 (struct bfq_io_cq*,struct bfq_queue*,int) ;
 struct bfq_queue* FUNC_5 (struct bfq_io_cq*,int) ;
 int FUNC_6 (int *,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static struct bfq_queue *FUNC_8(struct bfq_data *VAR_1,
         struct bfq_io_cq *VAR_2,
         struct bio *VAR_3,
         bool VAR_4, bool VAR_5,
         bool *VAR_6)
{
 struct bfq_queue *VAR_7 = FUNC_5(VAR_2, VAR_5);

 if (FUNC_7(VAR_7 && VAR_7 != &VAR_1->oom_bfqq))
  return VAR_7;

 if (VAR_6)
  *VAR_6 = 1;

 if (VAR_7)
  FUNC_3(VAR_7);
 VAR_7 = FUNC_1(VAR_1, VAR_3, VAR_5, VAR_2);

 FUNC_4(VAR_2, VAR_7, VAR_5);
 if (VAR_4 && VAR_5) {
  if ((VAR_2->was_in_burst_list && VAR_1->large_burst) ||
      VAR_2->saved_in_large_burst)
   FUNC_2(VAR_7);
  else {
   FUNC_0(VAR_7);
   if (VAR_2->was_in_burst_list)
    FUNC_6(&VAR_7->burst_list_node,
            &VAR_1->burst_list);
  }
  VAR_7->split_time = VAR_0;
 }

 return VAR_7;
}
