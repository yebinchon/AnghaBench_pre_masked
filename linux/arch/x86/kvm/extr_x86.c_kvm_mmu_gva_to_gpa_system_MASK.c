
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct x86_exception {int dummy; } ;
struct TYPE_4__ {TYPE_1__* walk_mmu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
typedef int gva_t ;
typedef int gpa_t ;
struct TYPE_3__ {int (* gva_to_gpa ) (struct kvm_vcpu*,int ,int ,struct x86_exception*) ;} ;


 int FUNC_0 (struct kvm_vcpu*,int ,int ,struct x86_exception*) ;

gpa_t FUNC_1(struct kvm_vcpu *VAR_0, gva_t VAR_1,
    struct x86_exception *VAR_2)
{
 return VAR_0->arch.walk_mmu->gva_to_gpa(VAR_0, VAR_1, 0, VAR_2);
}
