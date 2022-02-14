
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ttime_mean; int ttime_samples; } ;
struct bfq_queue {scalar_t__ last_serv_time_ns; scalar_t__ decrease_time_jif; TYPE_3__ ttime; scalar_t__ split_time; } ;
struct TYPE_5__ {TYPE_1__* ioc; } ;
struct bfq_io_cq {TYPE_2__ icq; } ;
struct bfq_data {scalar_t__ bfq_slice_idle; scalar_t__ bfq_wr_min_idle_time; } ;
struct TYPE_4__ {int active_ref; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct bfq_queue*) ;
 int FUNC_2 (struct bfq_queue*) ;
 scalar_t__ FUNC_3 (struct bfq_queue*) ;
 int FUNC_4 (struct bfq_queue*) ;
 int FUNC_5 (struct bfq_queue*) ;
 int FUNC_6 (struct bfq_data*,struct bfq_queue*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct bfq_data *VAR_0,
           struct bfq_queue *VAR_1,
           struct bfq_io_cq *VAR_2)
{
 bool VAR_3 = 1, VAR_4;






 if (!FUNC_2(VAR_1) || FUNC_3(VAR_1) ||
     VAR_0->bfq_slice_idle == 0)
  return;


 if (FUNC_9(VAR_1->split_time +
         VAR_0->bfq_wr_min_idle_time))
  return;





 if (FUNC_0(&VAR_2->icq.ioc->active_ref) == 0 ||
     (FUNC_7(VAR_1->ttime.ttime_samples) &&
      VAR_1->ttime.ttime_mean > VAR_0->bfq_slice_idle))
  VAR_3 = 0;

 VAR_4 = VAR_3 != FUNC_1(VAR_1);

 if (VAR_3)
  FUNC_5(VAR_1);
 else
  FUNC_4(VAR_1);
 if (VAR_4 && VAR_1->last_serv_time_ns == 0 &&
     (FUNC_10(VAR_1->decrease_time_jif +
          FUNC_8(100)) ||
      !VAR_3))
  FUNC_6(VAR_0, VAR_1);
}
