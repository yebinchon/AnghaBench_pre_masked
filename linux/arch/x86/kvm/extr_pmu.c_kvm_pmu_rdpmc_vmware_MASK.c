
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct kvm_vcpu {TYPE_2__* kvm; } ;
struct TYPE_3__ {scalar_t__ kvmclock_offset; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;





 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_0, unsigned VAR_1, u64 *VAR_2)
{
 u64 VAR_3;

 switch (VAR_1) {
 case 129:
  VAR_3 = FUNC_1();
  break;
 case 128:
  VAR_3 = FUNC_0();
  break;
 case 130:
  VAR_3 = FUNC_0() +
   VAR_0->kvm->arch.kvmclock_offset;
  break;
 default:
  return 1;
 }

 *VAR_2 = VAR_3;
 return 0;
}
