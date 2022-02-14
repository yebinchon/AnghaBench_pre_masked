
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_vgpu {int id; int vgpu_lock; int active; struct intel_gvt* gvt; } ;
struct intel_gvt {int lock; int vgpu_idr; } ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct intel_gvt*) ;
 int FUNC_4 (struct intel_vgpu*) ;
 int FUNC_5 (struct intel_vgpu*) ;
 int FUNC_6 (struct intel_gvt*) ;
 int FUNC_7 (struct intel_vgpu*) ;
 int FUNC_8 (struct intel_vgpu*) ;
 int FUNC_9 (struct intel_vgpu*) ;
 int FUNC_10 (struct intel_vgpu*) ;
 int FUNC_11 (struct intel_vgpu*) ;
 int FUNC_12 (struct intel_vgpu*) ;
 int FUNC_13 (struct intel_vgpu*) ;
 int FUNC_14 (struct intel_vgpu*) ;
 int FUNC_15 (struct intel_vgpu*,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct intel_vgpu*) ;

void FUNC_19(struct intel_vgpu *VAR_0)
{
 struct intel_gvt *VAR_1 = VAR_0->gvt;

 FUNC_16(&VAR_0->vgpu_lock);

 FUNC_0(VAR_0->active, "vGPU is still active!\n");

 FUNC_4(VAR_0);
 FUNC_11(VAR_0);
 FUNC_12(VAR_0);
 FUNC_7(VAR_0);
 FUNC_10(VAR_0);
 FUNC_15(VAR_0, 1);
 FUNC_8(VAR_0);
 FUNC_5(VAR_0);
 FUNC_14(VAR_0);
 FUNC_9(VAR_0);
 FUNC_13(VAR_0);
 FUNC_17(&VAR_0->vgpu_lock);

 FUNC_16(&VAR_1->lock);
 FUNC_2(&VAR_1->vgpu_idr, VAR_0->id);
 if (FUNC_1(&VAR_1->vgpu_idr))
  FUNC_3(VAR_1);
 FUNC_6(VAR_1);
 FUNC_17(&VAR_1->lock);

 FUNC_18(VAR_0);
}
