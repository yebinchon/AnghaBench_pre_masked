
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vgic_sre; } ;
struct TYPE_5__ {TYPE_1__ vgic_v3; } ;
struct TYPE_6__ {TYPE_2__ vgic_cpu; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct coproc_reg {int dummy; } ;
struct coproc_params {int Rt1; scalar_t__ is_write; } ;


 int FUNC_0 (struct kvm_vcpu*,struct coproc_params const*) ;
 int * FUNC_1 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static bool FUNC_2(struct kvm_vcpu *VAR_0,
      const struct coproc_params *VAR_1,
      const struct coproc_reg *VAR_2)
{
 if (VAR_1->is_write)
  return FUNC_0(VAR_0, VAR_1);

 *FUNC_1(VAR_0, VAR_1->Rt1) = VAR_0->arch.vgic_cpu.vgic_v3.vgic_sre;

 return 1;
}
