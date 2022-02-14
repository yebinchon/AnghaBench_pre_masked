
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mfn; } ;
struct TYPE_4__ {int type; unsigned long gfn; int pde_ips; } ;
struct intel_vgpu_ppgtt_spt {TYPE_1__ shadow_page; TYPE_2__ guest_page; } ;
struct intel_vgpu {int id; } ;
typedef enum intel_gvt_gtt_type { ____Placeholder_intel_gvt_gtt_type } intel_gvt_gtt_type ;


 struct intel_vgpu_ppgtt_spt* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct intel_vgpu_ppgtt_spt*) ;
 int FUNC_2 (struct intel_vgpu*,unsigned long,int ,struct intel_vgpu_ppgtt_spt*) ;
 struct intel_vgpu_ppgtt_spt* FUNC_3 (struct intel_vgpu*,int) ;
 int FUNC_4 (struct intel_vgpu_ppgtt_spt*) ;
 int VAR_0 ;
 int FUNC_5 (int ,struct intel_vgpu_ppgtt_spt*,int,int ,unsigned long) ;

__attribute__((used)) static struct intel_vgpu_ppgtt_spt *FUNC_6(
  struct intel_vgpu *VAR_1, enum intel_gvt_gtt_type VAR_2,
  unsigned long VAR_3, bool VAR_4)
{
 struct intel_vgpu_ppgtt_spt *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_1, VAR_2);
 if (FUNC_1(VAR_5))
  return VAR_5;




 VAR_6 = FUNC_2(VAR_1, VAR_3,
   VAR_0, VAR_5);
 if (VAR_6) {
  FUNC_4(VAR_5);
  return FUNC_0(VAR_6);
 }

 VAR_5->guest_page.type = VAR_2;
 VAR_5->guest_page.gfn = VAR_3;
 VAR_5->guest_page.pde_ips = VAR_4;

 FUNC_5(VAR_1->id, VAR_5, VAR_2, VAR_5->shadow_page.mfn, VAR_3);

 return VAR_5;
}
