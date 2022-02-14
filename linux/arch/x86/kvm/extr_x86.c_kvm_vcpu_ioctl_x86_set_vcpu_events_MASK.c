
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_21__ {int smm; scalar_t__ latched_init; scalar_t__ smm_inside_nmi; scalar_t__ pending; } ;
struct TYPE_20__ {int masked; int pending; int injected; } ;
struct TYPE_19__ {int shadow; int soft; int nr; int injected; } ;
struct TYPE_16__ {int nr; int error_code; int has_error_code; scalar_t__ pending; scalar_t__ injected; } ;
struct kvm_vcpu_events {int flags; TYPE_8__ smi; int sipi_vector; TYPE_7__ nmi; TYPE_6__ interrupt; int exception_payload; scalar_t__ exception_has_payload; TYPE_3__ exception; } ;
struct TYPE_18__ {int soft; int nr; int injected; } ;
struct TYPE_17__ {int nr; int payload; scalar_t__ has_payload; int error_code; int has_error_code; scalar_t__ pending; scalar_t__ injected; } ;
struct TYPE_12__ {scalar_t__ mp_state; int hflags; TYPE_9__* apic; scalar_t__ smi_pending; int nmi_pending; int nmi_injected; TYPE_5__ interrupt; TYPE_4__ exception; } ;
struct kvm_vcpu {TYPE_10__ arch; TYPE_2__* kvm; } ;
struct TYPE_22__ {int pending_events; int sipi_vector; } ;
struct TYPE_14__ {int exception_payload_enabled; } ;
struct TYPE_15__ {TYPE_1__ arch; } ;
struct TYPE_13__ {int (* set_nmi_mask ) (struct kvm_vcpu*,int ) ;int (* set_interrupt_shadow ) (struct kvm_vcpu*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 TYPE_11__* VAR_12 ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct kvm_vcpu*,int ) ;
 int FUNC_7 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static int FUNC_8(struct kvm_vcpu *VAR_13,
           struct kvm_vcpu_events *VAR_14)
{
 if (VAR_14->flags & ~(VAR_6
         | VAR_9
         | VAR_8
         | VAR_10
         | VAR_7))
  return -VAR_0;

 if (VAR_14->flags & VAR_7) {
  if (!VAR_13->kvm->arch.exception_payload_enabled)
   return -VAR_0;
  if (VAR_14->exception.pending)
   VAR_14->exception.injected = 0;
  else
   VAR_14->exception_has_payload = 0;
 } else {
  VAR_14->exception.pending = 0;
  VAR_14->exception_has_payload = 0;
 }

 if ((VAR_14->exception.injected || VAR_14->exception.pending) &&
     (VAR_14->exception.nr > 31 || VAR_14->exception.nr == VAR_11))
  return -VAR_0;


 if (VAR_14->flags & VAR_10 &&
     (VAR_14->smi.smm || VAR_14->smi.pending) &&
     VAR_13->arch.mp_state == VAR_4)
  return -VAR_0;

 FUNC_4(VAR_13);
 VAR_13->arch.exception.injected = VAR_14->exception.injected;
 VAR_13->arch.exception.pending = VAR_14->exception.pending;
 VAR_13->arch.exception.nr = VAR_14->exception.nr;
 VAR_13->arch.exception.has_error_code = VAR_14->exception.has_error_code;
 VAR_13->arch.exception.error_code = VAR_14->exception.error_code;
 VAR_13->arch.exception.has_payload = VAR_14->exception_has_payload;
 VAR_13->arch.exception.payload = VAR_14->exception_payload;

 VAR_13->arch.interrupt.injected = VAR_14->interrupt.injected;
 VAR_13->arch.interrupt.nr = VAR_14->interrupt.nr;
 VAR_13->arch.interrupt.soft = VAR_14->interrupt.soft;
 if (VAR_14->flags & VAR_8)
  VAR_12->set_interrupt_shadow(VAR_13,
        VAR_14->interrupt.shadow);

 VAR_13->arch.nmi_injected = VAR_14->nmi.injected;
 if (VAR_14->flags & VAR_6)
  VAR_13->arch.nmi_pending = VAR_14->nmi.pending;
 VAR_12->set_nmi_mask(VAR_13, VAR_14->nmi.masked);

 if (VAR_14->flags & VAR_9 &&
     FUNC_3(VAR_13))
  VAR_13->arch.apic->sipi_vector = VAR_14->sipi_vector;

 if (VAR_14->flags & VAR_10) {
  if (!!(VAR_13->arch.hflags & VAR_2) != VAR_14->smi.smm) {
   if (VAR_14->smi.smm)
    VAR_13->arch.hflags |= VAR_2;
   else
    VAR_13->arch.hflags &= ~VAR_2;
   FUNC_2(VAR_13);
  }

  VAR_13->arch.smi_pending = VAR_14->smi.pending;

  if (VAR_14->smi.smm) {
   if (VAR_14->smi.smm_inside_nmi)
    VAR_13->arch.hflags |= VAR_1;
   else
    VAR_13->arch.hflags &= ~VAR_1;
   if (FUNC_3(VAR_13)) {
    if (VAR_14->smi.latched_init)
     FUNC_5(VAR_3, &VAR_13->arch.apic->pending_events);
    else
     FUNC_0(VAR_3, &VAR_13->arch.apic->pending_events);
   }
  }
 }

 FUNC_1(VAR_5, VAR_13);

 return 0;
}
