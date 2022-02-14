
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct x86_exception {int dummy; } ;
struct TYPE_5__ {TYPE_1__* walk_mmu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
typedef int gva_t ;
typedef int gpa_t ;
struct TYPE_6__ {int (* get_cpl ) (struct kvm_vcpu*) ;} ;
struct TYPE_4__ {int (* gva_to_gpa ) (struct kvm_vcpu*,int ,int ,struct x86_exception*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int ,int ,struct x86_exception*) ;

gpa_t FUNC_2(struct kvm_vcpu *VAR_3, gva_t VAR_4,
    struct x86_exception *VAR_5)
{
 u32 VAR_6 = (VAR_2->get_cpl(VAR_3) == 3) ? VAR_1 : 0;
 VAR_6 |= VAR_0;
 return VAR_3->arch.walk_mmu->gva_to_gpa(VAR_3, VAR_4, VAR_6, VAR_5);
}
