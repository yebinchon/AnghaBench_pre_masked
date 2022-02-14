
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vgpu_sched_data {int pri_sched; int active; int lru_list; int pri_time; } ;
struct intel_vgpu {struct vgpu_sched_data* sched_data; TYPE_1__* gvt; } ;
struct gvt_sched_data {int period; int timer; int lru_runq_head; } ;
typedef int ktime_t ;
struct TYPE_4__ {struct gvt_sched_data* sched_data; } ;
struct TYPE_3__ {TYPE_2__ scheduler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct intel_vgpu *VAR_2)
{
 struct gvt_sched_data *VAR_3 = VAR_2->gvt->scheduler.sched_data;
 struct vgpu_sched_data *VAR_4 = VAR_2->sched_data;
 ktime_t VAR_5;

 if (!FUNC_7(&VAR_4->lru_list))
  return;

 VAR_5 = FUNC_4();
 VAR_4->pri_time = FUNC_2(VAR_5,
     FUNC_5(VAR_0, 0));
 VAR_4->pri_sched = 1;

 FUNC_6(&VAR_4->lru_list, &VAR_3->lru_runq_head);

 if (!FUNC_0(&VAR_3->timer))
  FUNC_1(&VAR_3->timer, FUNC_3(FUNC_4(),
   VAR_3->period), VAR_1);
 VAR_4->active = 1;
}
