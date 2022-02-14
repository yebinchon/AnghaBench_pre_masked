
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long u32 ;
struct TYPE_6__ {int doorbell_request; TYPE_2__* vcore; } ;
struct kvm_vcpu {int vcpu_id; TYPE_3__ arch; struct kvm* kvm; } ;
struct TYPE_4__ {int emul_smt_mode; } ;
struct kvm {TYPE_1__ arch; } ;
struct TYPE_5__ {int dpdes; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 unsigned long VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 struct kvm_vcpu* FUNC_6 (struct kvm*,int ) ;
 unsigned long FUNC_7 (struct kvm_vcpu*,unsigned long) ;
 scalar_t__ FUNC_8 (struct kvm_vcpu*,int ,unsigned long*) ;
 scalar_t__ FUNC_9 (struct kvm_vcpu*) ;
 unsigned long FUNC_10 (struct kvm_vcpu*) ;
 int FUNC_11 (struct kvm_vcpu*,int ,unsigned long) ;
 int FUNC_12 (struct kvm_vcpu*,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct kvm_vcpu *VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8;
 unsigned long VAR_9;
 struct kvm *VAR_10 = VAR_5->kvm;
 struct kvm_vcpu *VAR_11;

 if (FUNC_8(VAR_5, VAR_2, &VAR_6) != VAR_0)
  return VAR_4;
 if (FUNC_0(VAR_6) != 31)
  return VAR_1;
 VAR_7 = FUNC_1(VAR_6);
 VAR_8 = VAR_5->vcpu_id & (VAR_10->arch.emul_smt_mode - 1);
 switch (FUNC_4(VAR_6)) {
 case 130:
  VAR_9 = FUNC_7(VAR_5, VAR_7);
  if (((VAR_9 >> 27) & 0xf) != VAR_3)
   break;
  VAR_9 &= 0x3f;
  if (VAR_9 >= VAR_10->arch.emul_smt_mode)
   break;
  VAR_11 = FUNC_6(VAR_10, VAR_5->vcpu_id - VAR_8 + VAR_9);
  if (!VAR_11)
   break;
  if (!VAR_11->arch.doorbell_request) {
   VAR_11->arch.doorbell_request = 1;
   FUNC_5(VAR_11);
  }
  break;
 case 131:
  VAR_9 = FUNC_7(VAR_5, VAR_7);
  if (((VAR_9 >> 27) & 0xf) != VAR_3)
   break;
  VAR_5->arch.vcore->dpdes = 0;
  VAR_5->arch.doorbell_request = 0;
  break;
 case 132:
  switch (FUNC_3(VAR_6)) {
  case 128:
   VAR_9 = VAR_8;
   break;
  case 129:
   VAR_9 = FUNC_10(VAR_5);
   break;
  default:
   return VAR_1;
  }
  FUNC_11(VAR_5, FUNC_2(VAR_6), VAR_9);
  break;
 default:
  return VAR_1;
 }
 FUNC_12(VAR_5, FUNC_9(VAR_5) + 4);
 return VAR_4;
}
