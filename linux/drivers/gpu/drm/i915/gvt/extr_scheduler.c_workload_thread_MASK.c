
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct workload_thread_param {int ring_id; struct intel_gvt* gvt; } ;
struct intel_vgpu_workload {struct intel_vgpu_workload* status; int req; struct intel_vgpu_workload* ring_id; struct intel_vgpu* vgpu; } ;
struct intel_vgpu {int id; } ;
struct intel_runtime_pm {int dummy; } ;
struct intel_gvt_workload_scheduler {int * waitq; } ;
struct intel_gvt {TYPE_1__* dev_priv; struct intel_gvt_workload_scheduler scheduler; } ;
struct TYPE_2__ {int uncore; struct intel_runtime_pm runtime_pm; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct intel_gvt*,int) ;
 int FUNC_4 (struct intel_vgpu_workload*) ;
 int FUNC_5 (struct intel_vgpu*,int ) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,struct intel_vgpu_workload*,struct intel_vgpu_workload*,...) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (struct intel_runtime_pm*) ;
 int FUNC_11 (struct intel_runtime_pm*) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (struct workload_thread_param*) ;
 int FUNC_15 () ;
 struct intel_vgpu_workload* FUNC_16 (struct intel_gvt*,int) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (struct intel_vgpu_workload*) ;
 scalar_t__ FUNC_19 (int) ;
 int VAR_4 ;
 int FUNC_20 (int *,int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_21(void *VAR_6)
{
 struct workload_thread_param *VAR_7 = (struct workload_thread_param *)VAR_6;
 struct intel_gvt *VAR_8 = VAR_7->gvt;
 int VAR_9 = VAR_7->ring_id;
 struct intel_gvt_workload_scheduler *VAR_10 = &VAR_8->scheduler;
 struct intel_vgpu_workload *VAR_11 = ((void*)0);
 struct intel_vgpu *VAR_12 = ((void*)0);
 int VAR_13;
 bool VAR_14 = (FUNC_1(VAR_8->dev_priv) >= 9);
 FUNC_0(VAR_4, VAR_5);
 struct intel_runtime_pm *VAR_15 = &VAR_8->dev_priv->runtime_pm;

 FUNC_14(VAR_7);

 FUNC_6("workload thread for ring %d started\n", VAR_9);

 while (!FUNC_15()) {
  FUNC_2(&VAR_10->waitq[VAR_9], &VAR_4);
  do {
   VAR_11 = FUNC_16(VAR_8, VAR_9);
   if (VAR_11)
    break;
   FUNC_20(&VAR_4, VAR_3,
       VAR_2);
  } while (!FUNC_15());
  FUNC_17(&VAR_10->waitq[VAR_9], &VAR_4);

  if (!VAR_11)
   break;

  FUNC_7("ring id %d next workload %p vgpu %d\n",
    VAR_11->ring_id, VAR_11,
    VAR_11->vgpu->id);

  FUNC_10(VAR_15);

  FUNC_7("ring id %d will dispatch workload %p\n",
    VAR_11->ring_id, VAR_11);

  if (VAR_14)
   FUNC_12(&VAR_8->dev_priv->uncore,
     VAR_0);






  FUNC_18(VAR_11);

  VAR_13 = FUNC_4(VAR_11);

  if (VAR_13) {
   VAR_12 = VAR_11->vgpu;
   FUNC_8("fail to dispatch workload, skip\n");
   goto complete;
  }

  FUNC_7("ring id %d wait workload %p\n",
    VAR_11->ring_id, VAR_11);
  FUNC_9(VAR_11->req, 0, VAR_2);

complete:
  FUNC_7("will complete workload %p, status: %d\n",
    VAR_11, VAR_11->status);

  FUNC_3(VAR_8, VAR_9);

  if (VAR_14)
   FUNC_13(&VAR_8->dev_priv->uncore,
     VAR_0);

  FUNC_11(VAR_15);
  if (VAR_13 && (FUNC_19(VAR_13)))
   FUNC_5(VAR_12, VAR_1);
 }
 return 0;
}
