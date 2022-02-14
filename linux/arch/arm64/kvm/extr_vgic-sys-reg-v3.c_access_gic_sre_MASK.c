
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vgic_v3_cpu_if {int vgic_sre; } ;
struct sys_reg_params {int regval; scalar_t__ is_write; } ;
struct sys_reg_desc {int dummy; } ;
struct TYPE_3__ {struct vgic_v3_cpu_if vgic_v3; } ;
struct TYPE_4__ {TYPE_1__ vgic_cpu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct kvm_vcpu *VAR_1, struct sys_reg_params *VAR_2,
      const struct sys_reg_desc *VAR_3)
{
 struct vgic_v3_cpu_if *VAR_4 = &VAR_1->arch.vgic_cpu.vgic_v3;


 if (VAR_2->is_write) {
  if (!(VAR_2->regval & VAR_0))
   return 0;
 } else {
  VAR_2->regval = VAR_4->vgic_sre;
 }

 return 1;
}
