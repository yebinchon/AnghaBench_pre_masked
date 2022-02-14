
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_18__ {int smm_inside_nmi; int latched_init; int pending; int smm; } ;
struct TYPE_16__ {int pending; scalar_t__ pad; int masked; int injected; } ;
struct TYPE_15__ {int injected; int shadow; scalar_t__ soft; int nr; } ;
struct TYPE_12__ {int error_code; int has_error_code; int nr; int injected; int pending; } ;
struct kvm_vcpu_events {int flags; int reserved; TYPE_7__ smi; scalar_t__ sipi_vector; TYPE_5__ nmi; TYPE_4__ interrupt; int exception_payload; int exception_has_payload; TYPE_1__ exception; } ;
struct TYPE_14__ {int nr; int soft; scalar_t__ injected; } ;
struct TYPE_13__ {int payload; int has_payload; int error_code; int has_error_code; int nr; int pending; int injected; } ;
struct TYPE_17__ {scalar_t__ nmi_pending; int hflags; int smi_pending; int nmi_injected; TYPE_3__ interrupt; TYPE_2__ exception; } ;
struct kvm_vcpu {TYPE_9__* kvm; TYPE_6__ arch; } ;
struct TYPE_19__ {scalar_t__ exception_payload_enabled; } ;
struct TYPE_20__ {TYPE_8__ arch; } ;
struct TYPE_11__ {int (* get_nmi_mask ) (struct kvm_vcpu*) ;int (* get_interrupt_shadow ) (struct kvm_vcpu*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 TYPE_10__* VAR_5 ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_7(struct kvm_vcpu *VAR_6,
            struct kvm_vcpu_events *VAR_7)
{
 FUNC_4(VAR_6);







 if (FUNC_1(VAR_6->arch.exception.nr)) {
  VAR_7->exception.injected = 0;
  VAR_7->exception.pending = 0;
 } else {
  VAR_7->exception.injected = VAR_6->arch.exception.injected;
  VAR_7->exception.pending = VAR_6->arch.exception.pending;





  if (!VAR_6->kvm->arch.exception_payload_enabled)
   VAR_7->exception.injected |=
    VAR_6->arch.exception.pending;
 }
 VAR_7->exception.nr = VAR_6->arch.exception.nr;
 VAR_7->exception.has_error_code = VAR_6->arch.exception.has_error_code;
 VAR_7->exception.error_code = VAR_6->arch.exception.error_code;
 VAR_7->exception_has_payload = VAR_6->arch.exception.has_payload;
 VAR_7->exception_payload = VAR_6->arch.exception.payload;

 VAR_7->interrupt.injected =
  VAR_6->arch.interrupt.injected && !VAR_6->arch.interrupt.soft;
 VAR_7->interrupt.nr = VAR_6->arch.interrupt.nr;
 VAR_7->interrupt.soft = 0;
 VAR_7->interrupt.shadow = VAR_5->get_interrupt_shadow(VAR_6);

 VAR_7->nmi.injected = VAR_6->arch.nmi_injected;
 VAR_7->nmi.pending = VAR_6->arch.nmi_pending != 0;
 VAR_7->nmi.masked = VAR_5->get_nmi_mask(VAR_6);
 VAR_7->nmi.pad = 0;

 VAR_7->sipi_vector = 0;

 VAR_7->smi.smm = FUNC_0(VAR_6);
 VAR_7->smi.pending = VAR_6->arch.smi_pending;
 VAR_7->smi.smm_inside_nmi =
  !!(VAR_6->arch.hflags & VAR_0);
 VAR_7->smi.latched_init = FUNC_2(VAR_6);

 VAR_7->flags = (VAR_1
    | VAR_3
    | VAR_4);
 if (VAR_6->kvm->arch.exception_payload_enabled)
  VAR_7->flags |= VAR_2;

 FUNC_3(&VAR_7->reserved, 0, sizeof(VAR_7->reserved));
}
