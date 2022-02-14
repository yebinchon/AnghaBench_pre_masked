
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int addressing_mode; } ;
struct intel_vgpu_workload {TYPE_1__ ctx_desc; } ;
struct intel_context {int lrc_desc; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct intel_context *VAR_1,
     struct intel_vgpu_workload *VAR_2)
{
 u64 VAR_3 = VAR_1->lrc_desc;





 VAR_3 &= ~(0x3 << VAR_0);
 VAR_3 |= VAR_2->ctx_desc.addressing_mode <<
  VAR_0;

 VAR_1->lrc_desc = VAR_3;
}
