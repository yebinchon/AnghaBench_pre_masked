
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int nstime_t ;
struct TYPE_6__ {scalar_t__ max_n_thds; int max_wait_time; int tot_wait_time; int n_wait_times; int n_waiting_thds; int n_spin_acquired; } ;
typedef TYPE_1__ mutex_prof_data_t ;
struct TYPE_7__ {int locked; TYPE_1__ prof_data; } ;
typedef TYPE_2__ malloc_mutex_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;

void
FUNC_11(malloc_mutex_t *VAR_5) {
 mutex_prof_data_t *VAR_6 = &VAR_5->prof_data;
 nstime_t VAR_7 = VAR_2;

 if (VAR_4 == 1) {
  goto label_spin_done;
 }

 int VAR_8 = 0, VAR_9 = VAR_1;
 do {
  FUNC_10();
  if (!FUNC_2(&VAR_5->locked, VAR_0)
                    && !FUNC_4(VAR_5)) {
   VAR_6->n_spin_acquired++;
   return;
  }
 } while (VAR_8++ < VAR_9);

 if (!VAR_3) {

  FUNC_3(VAR_5);
  return;
 }
label_spin_done:
 FUNC_9(&VAR_7);

 nstime_t VAR_10;
 FUNC_7(&VAR_10, &VAR_7);
 uint32_t VAR_11 = FUNC_0(&VAR_6->n_waiting_thds, 1,
     VAR_0) + 1;

 if (!FUNC_4(VAR_5)) {
  FUNC_1(&VAR_6->n_waiting_thds, 1, VAR_0);
  VAR_6->n_spin_acquired++;
  return;
 }


 FUNC_3(VAR_5);

 FUNC_1(&VAR_6->n_waiting_thds, 1, VAR_0);
 FUNC_9(&VAR_10);

 nstime_t VAR_12;
 FUNC_7(&VAR_12, &VAR_10);
 FUNC_8(&VAR_12, &VAR_7);

 VAR_6->n_wait_times++;
 FUNC_5(&VAR_6->tot_wait_time, &VAR_12);
 if (FUNC_6(&VAR_6->max_wait_time, &VAR_12) < 0) {
  FUNC_7(&VAR_6->max_wait_time, &VAR_12);
 }
 if (VAR_11 > VAR_6->max_n_thds) {
  VAR_6->max_n_thds = VAR_11;
 }
}
