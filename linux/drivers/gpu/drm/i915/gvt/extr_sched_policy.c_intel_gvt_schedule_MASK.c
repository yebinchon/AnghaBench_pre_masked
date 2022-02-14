
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int current_vgpu; struct gvt_sched_data* sched_data; } ;
struct intel_gvt {int sched_lock; TYPE_1__ scheduler; int service_request; } ;
struct gvt_sched_data {scalar_t__ expire_time; } ;
typedef scalar_t__ ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,void*) ;
 int FUNC_1 (struct gvt_sched_data*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct gvt_sched_data*) ;
 scalar_t__ FUNC_7 (int ,void*) ;
 int FUNC_8 (int ,scalar_t__) ;

void FUNC_9(struct intel_gvt *VAR_3)
{
 struct gvt_sched_data *VAR_4 = VAR_3->scheduler.sched_data;
 ktime_t VAR_5;

 FUNC_4(&VAR_3->sched_lock);
 VAR_5 = FUNC_3();

 if (FUNC_7(VAR_2,
    (void *)&VAR_3->service_request)) {
  if (VAR_5 >= VAR_4->expire_time) {
   FUNC_1(VAR_4);
   VAR_4->expire_time = FUNC_2(
    VAR_5, VAR_0);
  }
 }
 FUNC_0(VAR_1, (void *)&VAR_3->service_request);

 FUNC_8(VAR_3->scheduler.current_vgpu, VAR_5);
 FUNC_6(VAR_4);

 FUNC_5(&VAR_3->sched_lock);
}
