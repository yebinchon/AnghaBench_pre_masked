
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t u8 ;
struct vgic_v3_cpu_if {int * vgic_ap0r; int * vgic_ap1r; } ;
struct sys_reg_params {int regval; scalar_t__ is_write; } ;
struct TYPE_3__ {struct vgic_v3_cpu_if vgic_v3; } ;
struct TYPE_4__ {TYPE_1__ vgic_cpu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;



__attribute__((used)) static void FUNC_0(struct kvm_vcpu *VAR_0,
       struct sys_reg_params *VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct vgic_v3_cpu_if *VAR_4 = &VAR_0->arch.vgic_cpu.vgic_v3;
 uint32_t *VAR_5;

 if (VAR_2)
  VAR_5 = &VAR_4->vgic_ap1r[VAR_3];
 else
  VAR_5 = &VAR_4->vgic_ap0r[VAR_3];

 if (VAR_1->is_write)
  *VAR_5 = VAR_1->regval;
 else
  VAR_1->regval = *VAR_5;
}
