
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_vgpu_ppgtt_spt {int dummy; } ;
struct TYPE_2__ {int spt_tree; } ;
struct intel_vgpu {TYPE_1__ gtt; } ;


 struct intel_vgpu_ppgtt_spt* FUNC_0 (int *,unsigned long) ;

__attribute__((used)) static inline struct intel_vgpu_ppgtt_spt *FUNC_1(
  struct intel_vgpu *VAR_0, unsigned long VAR_1)
{
 return FUNC_0(&VAR_0->gtt.spt_tree, VAR_1);
}
