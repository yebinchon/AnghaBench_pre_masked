
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct kvm_vcpu {struct kvm* kvm; } ;
struct kvm {int dummy; } ;
struct TYPE_6__ {scalar_t__ tlb_remote_flush; } ;
struct TYPE_5__ {unsigned long ept_identity_map_addr; int ept_pointer_lock; int ept_pointers_match; } ;
struct TYPE_4__ {int ept_pointer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,unsigned long) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*) ;
 unsigned long FUNC_4 (struct kvm_vcpu*) ;
 TYPE_3__* VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_2__* FUNC_7 (struct kvm*) ;
 TYPE_1__* FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,unsigned long) ;

void FUNC_11(struct kvm_vcpu *VAR_6, unsigned long VAR_7)
{
 struct kvm *VAR_8 = VAR_6->kvm;
 unsigned long VAR_9;
 u64 VAR_10;

 VAR_9 = VAR_7;
 if (VAR_3) {
  VAR_10 = FUNC_0(VAR_6, VAR_7);
  FUNC_9(VAR_0, VAR_10);

  if (VAR_5->tlb_remote_flush) {
   FUNC_5(&FUNC_7(VAR_8)->ept_pointer_lock);
   FUNC_8(VAR_6)->ept_pointer = VAR_10;
   FUNC_7(VAR_8)->ept_pointers_match
    = VAR_1;
   FUNC_6(&FUNC_7(VAR_8)->ept_pointer_lock);
  }

  if (VAR_4 || FUNC_3(VAR_6) ||
      FUNC_2(VAR_6))
   VAR_9 = FUNC_4(VAR_6);
  else
   VAR_9 = FUNC_7(VAR_8)->ept_identity_map_addr;
  FUNC_1(VAR_6);
 }

 FUNC_10(VAR_2, VAR_9);
}
