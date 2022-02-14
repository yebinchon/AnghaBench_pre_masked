
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct x86_exception {int dummy; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm_mmu {scalar_t__ (* translate_gpa ) (struct kvm_vcpu*,int ,int ,struct x86_exception*) ;} ;
typedef int gpa_t ;
typedef scalar_t__ gfn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct kvm_vcpu*,scalar_t__,void*,int,int) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*,int ,int ,struct x86_exception*) ;

int FUNC_4(struct kvm_vcpu *VAR_2, struct kvm_mmu *VAR_3,
       gfn_t VAR_4, void *VAR_5, int VAR_6, int VAR_7,
       u32 VAR_8)
{
 struct x86_exception VAR_9;
 gfn_t VAR_10;
 gpa_t VAR_11;

 VAR_11 = FUNC_0(VAR_4);
 VAR_10 = VAR_3->translate_gpa(VAR_2, VAR_11, VAR_8, &VAR_9);
 if (VAR_10 == VAR_1)
  return -VAR_0;

 VAR_10 = FUNC_1(VAR_10);

 return FUNC_2(VAR_2, VAR_10, VAR_5, VAR_6, VAR_7);
}
