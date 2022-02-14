
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int write_cnt; int type; } ;
struct intel_vgpu_ppgtt_spt {TYPE_1__ guest_page; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct intel_vgpu_ppgtt_spt *VAR_1)
{
 return VAR_0
  && FUNC_0(VAR_1->guest_page.type)
  && VAR_1->guest_page.write_cnt >= 2;
}
