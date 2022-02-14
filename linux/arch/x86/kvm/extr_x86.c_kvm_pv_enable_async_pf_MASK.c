
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {int msr_val; int send_user_only; int delivery_as_pf_vmexit; int data; } ;
struct TYPE_4__ {TYPE_1__ apf; } ;
struct kvm_vcpu {TYPE_2__ arch; int kvm; } ;
typedef int gpa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (int ,int *,int,int) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_3, u64 VAR_4)
{
 gpa_t VAR_5 = VAR_4 & ~0x3f;


 if (VAR_4 & 0x38)
  return 1;

 VAR_3->arch.apf.msr_val = VAR_4;

 if (!(VAR_4 & VAR_1)) {
  FUNC_2(VAR_3);
  FUNC_0(VAR_3);
  return 0;
 }

 if (FUNC_3(VAR_3->kvm, &VAR_3->arch.apf.data, VAR_5,
     sizeof(u32)))
  return 1;

 VAR_3->arch.apf.send_user_only = !(VAR_4 & VAR_2);
 VAR_3->arch.apf.delivery_as_pf_vmexit = VAR_4 & VAR_0;
 FUNC_1(VAR_3);
 return 0;
}
