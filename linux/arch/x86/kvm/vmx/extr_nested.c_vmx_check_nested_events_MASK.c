
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ preemption_timer_expired; scalar_t__ nested_run_pending; } ;
struct vcpu_vmx {TYPE_2__ nested; } ;
struct TYPE_4__ {scalar_t__ pending; } ;
struct TYPE_6__ {scalar_t__ nmi_pending; TYPE_1__ exception; struct kvm_lapic* apic; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct kvm_lapic {int pending_events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_6 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_7 (struct kvm_vcpu*,unsigned long*) ;
 int FUNC_8 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_9 (struct kvm_vcpu*,int ,int,int ) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 struct vcpu_vmx* FUNC_11 (struct kvm_vcpu*) ;
 int FUNC_12 (struct kvm_vcpu*) ;
 int FUNC_13 (struct kvm_vcpu*,int) ;

__attribute__((used)) static int FUNC_14(struct kvm_vcpu *VAR_9, bool VAR_10)
{
 struct vcpu_vmx *VAR_11 = FUNC_11(VAR_9);
 unsigned long VAR_12;
 bool VAR_13 =
     VAR_11->nested.nested_run_pending || FUNC_2(VAR_9);
 struct kvm_lapic *VAR_14 = VAR_9->arch.apic;

 if (FUNC_3(VAR_9) &&
  FUNC_10(VAR_7, &VAR_14->pending_events)) {
  if (VAR_13)
   return -VAR_0;
  FUNC_9(VAR_9, VAR_3, 0, 0);
  return 0;
 }

 if (VAR_9->arch.exception.pending &&
  FUNC_7(VAR_9, &VAR_12)) {
  if (VAR_13)
   return -VAR_0;
  FUNC_8(VAR_9, VAR_12);
  return 0;
 }

 if (FUNC_4(FUNC_0(VAR_9)) &&
     VAR_11->nested.preemption_timer_expired) {
  if (VAR_13)
   return -VAR_0;
  FUNC_9(VAR_9, VAR_4, 0, 0);
  return 0;
 }

 if (VAR_9->arch.nmi_pending && FUNC_6(VAR_9)) {
  if (VAR_13)
   return -VAR_0;
  FUNC_9(VAR_9, VAR_1,
      VAR_8 | VAR_6 |
      VAR_5, 0);




  VAR_9->arch.nmi_pending = 0;
  FUNC_13(VAR_9, 1);
  return 0;
 }

 if ((FUNC_1(VAR_9) || VAR_10) &&
     FUNC_5(VAR_9)) {
  if (VAR_13)
   return -VAR_0;
  FUNC_9(VAR_9, VAR_2, 0, 0);
  return 0;
 }

 FUNC_12(VAR_9);
 return 0;
}
