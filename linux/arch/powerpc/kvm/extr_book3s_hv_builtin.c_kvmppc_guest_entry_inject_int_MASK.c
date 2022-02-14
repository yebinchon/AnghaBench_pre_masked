
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int msr; } ;
struct TYPE_6__ {int pending_exceptions; unsigned long intr_msr; scalar_t__ doorbell_request; TYPE_2__* vcore; TYPE_1__ shregs; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct TYPE_5__ {int dpdes; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 () ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_4 (struct kvm_vcpu*,int ) ;
 int FUNC_5 (struct kvm_vcpu*,unsigned long) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 () ;

void FUNC_9(struct kvm_vcpu *VAR_10)
{
 int VAR_11;
 unsigned long VAR_12 = 0;
 unsigned long VAR_13;


 VAR_11 = (VAR_10->arch.pending_exceptions >> VAR_2) & 1;
 VAR_13 = FUNC_6(VAR_9);
 VAR_13 |= VAR_11 << VAR_4;
 FUNC_7(VAR_9, VAR_13);
 FUNC_1();

 if (VAR_10->arch.shregs.msr & VAR_5) {
  if (VAR_11) {
   VAR_12 = VAR_1;
  } else {
   long int VAR_14 = FUNC_6(VAR_7);
   if (!(VAR_13 & VAR_3))
    VAR_14 = (int) VAR_14;
   if (VAR_14 < 0)
    VAR_12 = VAR_0;
  }
 }
 if (VAR_12) {
  unsigned long VAR_15, VAR_16 = VAR_10->arch.shregs.msr;

  FUNC_4(VAR_10, FUNC_2(VAR_10));
  FUNC_5(VAR_10, VAR_16);
  FUNC_3(VAR_10, VAR_12);
  VAR_15 = VAR_10->arch.intr_msr;
  if (FUNC_0(VAR_16))
   VAR_15 |= VAR_6;
  VAR_10->arch.shregs.msr = VAR_15;
 }

 if (VAR_10->arch.doorbell_request) {
  FUNC_7(VAR_8, 1);
  VAR_10->arch.vcore->dpdes = 1;
  FUNC_8();
  VAR_10->arch.doorbell_request = 0;
 }
}
