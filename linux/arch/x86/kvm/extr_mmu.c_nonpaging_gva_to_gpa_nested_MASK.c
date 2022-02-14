
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct x86_exception {scalar_t__ error_code; } ;
struct TYPE_3__ {int (* translate_gpa ) (struct kvm_vcpu*,int ,int ,struct x86_exception*) ;} ;
struct TYPE_4__ {TYPE_1__ nested_mmu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
typedef int gva_t ;
typedef int gpa_t ;


 int FUNC_0 (struct kvm_vcpu*,int ,int ,struct x86_exception*) ;

__attribute__((used)) static gpa_t FUNC_1(struct kvm_vcpu *VAR_0, gva_t VAR_1,
      u32 VAR_2,
      struct x86_exception *VAR_3)
{
 if (VAR_3)
  VAR_3->error_code = 0;
 return VAR_0->arch.nested_mmu.translate_gpa(VAR_0, VAR_1, VAR_2, VAR_3);
}
