
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_vgpu {int failsafe; int pv_notified; int id; scalar_t__ resetting_eng; int vgpu_lock; struct intel_gvt* gvt; } ;
struct intel_gvt_workload_scheduler {int * current_vgpu; } ;
struct intel_gvt {struct intel_gvt_workload_scheduler scheduler; } ;
typedef scalar_t__ intel_engine_mask_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct intel_vgpu*) ;
 int FUNC_2 (struct intel_vgpu*) ;
 int FUNC_3 (struct intel_vgpu*) ;
 int FUNC_4 (struct intel_vgpu*) ;
 int FUNC_5 (struct intel_vgpu*) ;
 int FUNC_6 (struct intel_vgpu*,int) ;
 int FUNC_7 (struct intel_vgpu*) ;
 int FUNC_8 (struct intel_vgpu*,scalar_t__) ;
 int FUNC_9 (struct intel_vgpu*,scalar_t__,int ) ;
 int FUNC_10 (struct intel_vgpu*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct intel_vgpu*) ;

void FUNC_14(struct intel_vgpu *VAR_1, bool VAR_2,
     intel_engine_mask_t VAR_3)
{
 struct intel_gvt *VAR_4 = VAR_1->gvt;
 struct intel_gvt_workload_scheduler *VAR_5 = &VAR_4->scheduler;
 intel_engine_mask_t VAR_6 = VAR_2 ? VAR_0 : VAR_3;

 FUNC_0("------------------------------------------\n");
 FUNC_0("resseting vgpu%d, dmlr %d, engine_mask %08x\n",
       VAR_1->id, VAR_2, VAR_3);

 VAR_1->resetting_eng = VAR_6;

 FUNC_10(VAR_1);




 if (VAR_5->current_vgpu == ((void*)0)) {
  FUNC_12(&VAR_1->vgpu_lock);
  FUNC_1(VAR_1);
  FUNC_11(&VAR_1->vgpu_lock);
 }

 FUNC_8(VAR_1, VAR_6);

 if (VAR_3 == VAR_0 || VAR_2) {
  FUNC_9(VAR_1, VAR_0, 0);
  FUNC_2(VAR_1);

  if (VAR_2) {
   FUNC_5(VAR_1);
   FUNC_7(VAR_1);
  }

  FUNC_6(VAR_1, VAR_2);
  FUNC_13(VAR_1);
  FUNC_4(VAR_1);

  if (VAR_2) {
   FUNC_3(VAR_1);

   VAR_1->failsafe = 0;
   VAR_1->pv_notified = 0;
  }
 }

 VAR_1->resetting_eng = 0;
 FUNC_0("reset vgpu%d done\n", VAR_1->id);
 FUNC_0("------------------------------------------\n");
}
