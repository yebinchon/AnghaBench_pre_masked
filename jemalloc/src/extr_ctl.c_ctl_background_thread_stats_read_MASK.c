
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tsdn_t ;
struct TYPE_5__ {int max_counter_per_bg_thd; int run_interval; } ;
typedef TYPE_1__ background_thread_stats_t ;
struct TYPE_6__ {int * mutex_prof_data; TYPE_1__ background_thread; } ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;
 TYPE_3__* VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4(tsdn_t *VAR_3) {
 background_thread_stats_t *VAR_4 = &VAR_0->background_thread;
 if (!VAR_2 ||
     FUNC_0(VAR_3, VAR_4)) {
  FUNC_2(VAR_4, 0, sizeof(background_thread_stats_t));
  FUNC_3(&VAR_4->run_interval, 0);
 }
 FUNC_1(
     &VAR_0->mutex_prof_data[VAR_1],
     &VAR_4->max_counter_per_bg_thd);
}
