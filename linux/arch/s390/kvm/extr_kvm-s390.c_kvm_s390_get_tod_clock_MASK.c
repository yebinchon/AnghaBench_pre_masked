
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_s390_vm_tod_clock {scalar_t__ tod; scalar_t__ epoch_idx; } ;
struct kvm_s390_tod_clock_ext {scalar_t__ tod; scalar_t__ epoch_idx; } ;
struct TYPE_2__ {scalar_t__ epoch; scalar_t__ epdx; } ;
struct kvm {TYPE_1__ arch; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct kvm*,int) ;

__attribute__((used)) static void FUNC_4(struct kvm *VAR_0,
       struct kvm_s390_vm_tod_clock *VAR_1)
{
 struct kvm_s390_tod_clock_ext VAR_2;

 FUNC_1();

 FUNC_0((char *)&VAR_2);

 VAR_1->tod = VAR_2.tod + VAR_0->arch.epoch;
 VAR_1->epoch_idx = 0;
 if (FUNC_3(VAR_0, 139)) {
  VAR_1->epoch_idx = VAR_2.epoch_idx + VAR_0->arch.epdx;
  if (VAR_1->tod < VAR_2.tod)
   VAR_1->epoch_idx += 1;
 }

 FUNC_2();
}
