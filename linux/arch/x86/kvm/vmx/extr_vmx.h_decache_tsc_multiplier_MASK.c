
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tsc_scaling_ratio; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;
struct vcpu_vmx {int current_tsc_ratio; TYPE_2__ vcpu; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct vcpu_vmx *VAR_1)
{
 VAR_1->current_tsc_ratio = VAR_1->vcpu.arch.tsc_scaling_ratio;
 FUNC_0(VAR_0, VAR_1->current_tsc_ratio);
}
