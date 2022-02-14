
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int vm86_active; } ;
struct TYPE_7__ {scalar_t__ nested_run_pending; } ;
struct vcpu_vmx {TYPE_2__ rmode; scalar_t__ emulation_required; int vcpu; TYPE_1__ nested; } ;
struct TYPE_9__ {scalar_t__ pending; } ;
struct TYPE_12__ {scalar_t__ halt_request; TYPE_3__ exception; } ;
struct kvm_vcpu {TYPE_6__ arch; TYPE_5__* run; } ;
struct TYPE_10__ {scalar_t__ ndata; int suberror; } ;
struct TYPE_11__ {TYPE_4__ internal; int exit_reason; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (struct vcpu_vmx*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_4 (int ,struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ) ;
 struct vcpu_vmx* FUNC_9 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_10 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_11(struct kvm_vcpu *VAR_5)
{
 struct vcpu_vmx *VAR_6 = FUNC_9(VAR_5);
 bool VAR_7;
 unsigned VAR_8 = 130;






 FUNC_0(VAR_6->emulation_required && VAR_6->nested.nested_run_pending);

 VAR_7 = FUNC_1(VAR_6) &
    VAR_0;

 while (VAR_6->emulation_required && VAR_8-- != 0) {
  if (VAR_7 && FUNC_10(VAR_5))
   return FUNC_2(&VAR_6->vcpu);

  if (FUNC_4(VAR_3, VAR_5))
   return 1;

  if (!FUNC_3(VAR_5, 0))
   return 0;

  if (VAR_6->emulation_required && !VAR_6->rmode.vm86_active &&
      VAR_5->arch.exception.pending) {
   VAR_5->run->exit_reason = VAR_1;
   VAR_5->run->internal.suberror =
      VAR_2;
   VAR_5->run->internal.ndata = 0;
   return 0;
  }

  if (VAR_5->arch.halt_request) {
   VAR_5->arch.halt_request = 0;
   return FUNC_5(VAR_5);
  }





  if (FUNC_8(VAR_4))
   return 1;

  if (FUNC_6())
   FUNC_7();
 }

 return 1;
}
