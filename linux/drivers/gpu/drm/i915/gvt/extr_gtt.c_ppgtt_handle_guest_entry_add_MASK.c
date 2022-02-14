
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct intel_vgpu_ppgtt_spt {TYPE_1__ shadow_page; struct intel_vgpu* vgpu; } ;
struct intel_vgpu {int id; } ;
struct intel_gvt_gtt_entry {int type; int val64; } ;


 scalar_t__ FUNC_0 (struct intel_vgpu_ppgtt_spt*) ;
 int FUNC_1 (struct intel_vgpu_ppgtt_spt*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,unsigned long,int ) ;
 int FUNC_5 (char*,struct intel_vgpu_ppgtt_spt*,int ,int ) ;
 int FUNC_6 (struct intel_gvt_gtt_entry*,struct intel_vgpu_ppgtt_spt*,struct intel_gvt_gtt_entry*) ;
 int FUNC_7 (struct intel_vgpu_ppgtt_spt*,struct intel_gvt_gtt_entry*,unsigned long) ;
 int FUNC_8 (struct intel_vgpu*,struct intel_vgpu_ppgtt_spt*,unsigned long,struct intel_gvt_gtt_entry*) ;
 struct intel_vgpu_ppgtt_spt* FUNC_9 (struct intel_vgpu*,struct intel_gvt_gtt_entry*) ;
 int FUNC_10 (struct intel_vgpu_ppgtt_spt*,struct intel_gvt_gtt_entry*,unsigned long) ;
 int FUNC_11 (int ,char*,struct intel_vgpu_ppgtt_spt*,int ,int ,unsigned long) ;

__attribute__((used)) static int FUNC_12(struct intel_vgpu_ppgtt_spt *VAR_0,
  struct intel_gvt_gtt_entry *VAR_1, unsigned long VAR_2)
{
 struct intel_vgpu *VAR_3 = VAR_0->vgpu;
 struct intel_gvt_gtt_entry VAR_4;
 struct intel_vgpu_ppgtt_spt *VAR_5;
 int VAR_6;

 FUNC_11(VAR_0->vgpu->id, "add", VAR_0, VAR_0->shadow_page.type,
          VAR_1->val64, VAR_2);

 FUNC_4("add shadow entry: type %d, index %lu, value %llx\n",
      VAR_1->type, VAR_2, VAR_1->val64);

 if (FUNC_3(FUNC_2(VAR_1->type))) {
  VAR_5 = FUNC_9(VAR_3, VAR_1);
  if (FUNC_0(VAR_5)) {
   VAR_6 = FUNC_1(VAR_5);
   goto fail;
  }
  FUNC_7(VAR_0, &VAR_4, VAR_2);
  FUNC_6(&VAR_4, VAR_5, VAR_1);
  FUNC_10(VAR_0, &VAR_4, VAR_2);
 } else {
  VAR_6 = FUNC_8(VAR_3, VAR_0, VAR_2, VAR_1);
  if (VAR_6)
   goto fail;
 }
 return 0;
fail:
 FUNC_5("fail: spt %p guest entry 0x%llx type %d\n",
  VAR_0, VAR_1->val64, VAR_1->type);
 return VAR_6;
}
