
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct msr_data {int data; int host_initiated; } ;
struct TYPE_3__ {int efer; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {int (* set_efer ) (struct kvm_vcpu*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_3 (struct kvm_vcpu*,int) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_5, struct msr_data *VAR_6)
{
 u64 VAR_7 = VAR_5->arch.efer;
 u64 VAR_8 = VAR_6->data;

 if (VAR_8 & VAR_3)
  return 1;

 if (!VAR_6->host_initiated) {
  if (!FUNC_0(VAR_5, VAR_8))
   return 1;

  if (FUNC_1(VAR_5) &&
      (VAR_5->arch.efer & VAR_1) != (VAR_8 & VAR_1))
   return 1;
 }

 VAR_8 &= ~VAR_0;
 VAR_8 |= VAR_5->arch.efer & VAR_0;

 VAR_4->set_efer(VAR_5, VAR_8);


 if ((VAR_8 ^ VAR_7) & VAR_2)
  FUNC_2(VAR_5);

 return 0;
}
