
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_vcn_inst; int harvest_config; int num_enc_rings; int fw; TYPE_1__* inst; int dpg_sram_cpu_addr; int dpg_sram_gpu_addr; int dpg_sram_bo; scalar_t__ indirect_sram; } ;
struct amdgpu_device {TYPE_2__ vcn; } ;
struct TYPE_3__ {int ring_jpeg; int * ring_enc; int ring_dec; int cpu_addr; int gpu_addr; int vcpu_bo; int saved_bo; } ;


 int FUNC_0 (int *,int *,void**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct amdgpu_device *VAR_0)
{
 int VAR_1, VAR_2;

 if (VAR_0->vcn.indirect_sram) {
  FUNC_0(&VAR_0->vcn.dpg_sram_bo,
          &VAR_0->vcn.dpg_sram_gpu_addr,
          (void **)&VAR_0->vcn.dpg_sram_cpu_addr);
 }

 for (VAR_2 = 0; VAR_2 < VAR_0->vcn.num_vcn_inst; ++VAR_2) {
  if (VAR_0->vcn.harvest_config & (1 << VAR_2))
   continue;
  FUNC_2(VAR_0->vcn.inst[VAR_2].saved_bo);

  FUNC_0(&VAR_0->vcn.inst[VAR_2].vcpu_bo,
       &VAR_0->vcn.inst[VAR_2].gpu_addr,
       (void **)&VAR_0->vcn.inst[VAR_2].cpu_addr);

  FUNC_1(&VAR_0->vcn.inst[VAR_2].ring_dec);

  for (VAR_1 = 0; VAR_1 < VAR_0->vcn.num_enc_rings; ++VAR_1)
   FUNC_1(&VAR_0->vcn.inst[VAR_2].ring_enc[VAR_1]);

  FUNC_1(&VAR_0->vcn.inst[VAR_2].ring_jpeg);
 }

 FUNC_3(VAR_0->vcn.fw);

 return 0;
}
