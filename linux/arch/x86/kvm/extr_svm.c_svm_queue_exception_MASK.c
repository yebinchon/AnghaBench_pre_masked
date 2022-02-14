
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


typedef int u32 ;
struct vcpu_svm {unsigned long int3_injected; TYPE_6__* vmcb; scalar_t__ int3_rip; int vcpu; } ;
struct TYPE_7__ {unsigned int nr; int has_error_code; int injected; int error_code; } ;
struct TYPE_8__ {TYPE_1__ exception; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_11__ {unsigned int event_inj; int event_inj_err; } ;
struct TYPE_9__ {scalar_t__ base; } ;
struct TYPE_10__ {TYPE_3__ cs; } ;
struct TYPE_12__ {TYPE_5__ control; TYPE_4__ save; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *) ;
 unsigned long FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct vcpu_svm*,unsigned int,int,int ) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 struct vcpu_svm* FUNC_4 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_5(struct kvm_vcpu *VAR_5)
{
 struct vcpu_svm *VAR_6 = FUNC_4(VAR_5);
 unsigned VAR_7 = VAR_5->arch.exception.nr;
 bool VAR_8 = VAR_5->arch.exception.has_error_code;
 bool VAR_9 = VAR_5->arch.exception.injected;
 u32 VAR_10 = VAR_5->arch.exception.error_code;





 if (!VAR_9 &&
     FUNC_2(VAR_6, VAR_7, VAR_8, VAR_10))
  return;

 FUNC_0(&VAR_6->vcpu);

 if (VAR_7 == VAR_0 && !VAR_4) {
  unsigned long VAR_11, VAR_12 = FUNC_1(&VAR_6->vcpu);
  (void)FUNC_3(&VAR_6->vcpu);
  VAR_11 = FUNC_1(&VAR_6->vcpu);
  VAR_6->int3_rip = VAR_11 + VAR_6->vmcb->save.cs.base;
  VAR_6->int3_injected = VAR_11 - VAR_12;
 }

 VAR_6->vmcb->control.event_inj = VAR_7
  | VAR_2
  | (VAR_8 ? VAR_3 : 0)
  | VAR_1;
 VAR_6->vmcb->control.event_inj_err = VAR_10;
}
