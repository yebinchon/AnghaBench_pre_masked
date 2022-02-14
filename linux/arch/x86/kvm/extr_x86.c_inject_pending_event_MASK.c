
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int injected; int pending; scalar_t__ nr; int error_code; int has_error_code; } ;
struct TYPE_5__ {scalar_t__ injected; } ;
struct TYPE_7__ {int nmi_injected; int dr7; int smi_pending; scalar_t__ nmi_pending; int smi_count; TYPE_2__ exception; TYPE_1__ interrupt; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct TYPE_8__ {int (* check_nested_events ) (struct kvm_vcpu*,int) ;int (* set_irq ) (struct kvm_vcpu*) ;scalar_t__ (* interrupt_allowed ) (struct kvm_vcpu*) ;int (* set_nmi ) (struct kvm_vcpu*) ;scalar_t__ (* nmi_allowed ) (struct kvm_vcpu*) ;scalar_t__ (* smi_allowed ) (struct kvm_vcpu*) ;int (* queue_exception ) (struct kvm_vcpu*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct kvm_vcpu*,int) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_9 (struct kvm_vcpu*) ;
 int FUNC_10 (struct kvm_vcpu*) ;
 int FUNC_11 (struct kvm_vcpu*,int ,int) ;
 int FUNC_12 (struct kvm_vcpu*) ;
 TYPE_4__* VAR_4 ;
 int FUNC_13 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_14 (struct kvm_vcpu*) ;
 int FUNC_15 (struct kvm_vcpu*) ;
 int FUNC_16 (struct kvm_vcpu*) ;
 int FUNC_17 (struct kvm_vcpu*) ;
 int FUNC_18 (struct kvm_vcpu*,int) ;
 int FUNC_19 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_20 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_21 (struct kvm_vcpu*) ;
 int FUNC_22 (struct kvm_vcpu*) ;
 int FUNC_23 (struct kvm_vcpu*,int) ;
 int FUNC_24 (scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_25(struct kvm_vcpu *VAR_5, bool VAR_6)
{
 int VAR_7;



 if (VAR_5->arch.exception.injected)
  VAR_4->queue_exception(VAR_5);
 else if (!VAR_5->arch.exception.pending) {
  if (VAR_5->arch.nmi_injected)
   VAR_4->set_nmi(VAR_5);
  else if (VAR_5->arch.interrupt.injected)
   VAR_4->set_irq(VAR_5);
 }







 if (FUNC_4(VAR_5) && VAR_4->check_nested_events) {
  VAR_7 = VAR_4->check_nested_events(VAR_5, VAR_6);
  if (VAR_7 != 0)
   return VAR_7;
 }


 if (VAR_5->arch.exception.pending) {
  FUNC_24(VAR_5->arch.exception.nr,
     VAR_5->arch.exception.has_error_code,
     VAR_5->arch.exception.error_code);

  FUNC_0(VAR_5->arch.exception.injected);
  VAR_5->arch.exception.pending = 0;
  VAR_5->arch.exception.injected = 1;

  if (FUNC_3(VAR_5->arch.exception.nr) == VAR_2)
   FUNC_1(VAR_5, FUNC_10(VAR_5) |
          VAR_3);

  if (VAR_5->arch.exception.nr == VAR_0) {
   FUNC_8(VAR_5);
   if (VAR_5->arch.dr7 & VAR_1) {
    VAR_5->arch.dr7 &= ~VAR_1;
    FUNC_12(VAR_5);
   }
  }

  VAR_4->queue_exception(VAR_5);
 }


 if (FUNC_9(VAR_5))
  return 0;

 if (VAR_5->arch.smi_pending && !FUNC_5(VAR_5) &&
     VAR_4->smi_allowed(VAR_5)) {
  VAR_5->arch.smi_pending = 0;
  ++VAR_5->arch.smi_count;
  FUNC_2(VAR_5);
 } else if (VAR_5->arch.nmi_pending && VAR_4->nmi_allowed(VAR_5)) {
  --VAR_5->arch.nmi_pending;
  VAR_5->arch.nmi_injected = 1;
  VAR_4->set_nmi(VAR_5);
 } else if (FUNC_7(VAR_5)) {







  if (FUNC_4(VAR_5) && VAR_4->check_nested_events) {
   VAR_7 = VAR_4->check_nested_events(VAR_5, VAR_6);
   if (VAR_7 != 0)
    return VAR_7;
  }
  if (VAR_4->interrupt_allowed(VAR_5)) {
   FUNC_11(VAR_5, FUNC_6(VAR_5),
         0);
   VAR_4->set_irq(VAR_5);
  }
 }

 return 0;
}
