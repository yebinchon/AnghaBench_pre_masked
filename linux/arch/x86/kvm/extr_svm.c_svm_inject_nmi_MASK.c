
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vcpu_svm {TYPE_2__* vmcb; } ;
struct TYPE_8__ {int nmi_injections; } ;
struct TYPE_7__ {int hflags; } ;
struct kvm_vcpu {TYPE_4__ stat; TYPE_3__ arch; } ;
struct TYPE_5__ {int event_inj; } ;
struct TYPE_6__ {TYPE_1__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vcpu_svm*,int ) ;
 struct vcpu_svm* FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_4)
{
 struct vcpu_svm *VAR_5 = FUNC_1(VAR_4);

 VAR_5->vmcb->control.event_inj = VAR_3 | VAR_2;
 VAR_4->arch.hflags |= VAR_0;
 FUNC_0(VAR_5, VAR_1);
 ++VAR_4->stat.nmi_injections;
}
