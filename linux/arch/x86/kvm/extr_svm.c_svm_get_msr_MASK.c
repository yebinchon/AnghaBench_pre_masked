
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int hsave_msr; int vm_cr_msr; } ;
struct vcpu_svm {int sysenter_eip; int sysenter_esp; int tsc_aux; int spec_ctrl; int virt_spec_ctrl; int msr_decfg; TYPE_3__ nested; TYPE_2__* vmcb; } ;
struct msr_data {int index; int data; int host_initiated; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_4__ {int star; int lstar; int cstar; int kernel_gs_base; int sfmask; int sysenter_cs; int dbgctl; int br_from; int br_to; int last_excp_from; int last_excp_to; } ;
struct TYPE_5__ {TYPE_1__ save; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*,struct msr_data*) ;
 struct vcpu_svm* FUNC_5 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_6(struct kvm_vcpu *VAR_4, struct msr_data *VAR_5)
{
 struct vcpu_svm *VAR_6 = FUNC_5(VAR_4);

 switch (VAR_5->index) {
 case 132:
  VAR_5->data = VAR_6->vmcb->save.star;
  break;
 case 137:
  VAR_5->data = VAR_6->vmcb->save.sysenter_cs;
  break;
 case 136:
  VAR_5->data = VAR_6->sysenter_eip;
  break;
 case 135:
  VAR_5->data = VAR_6->sysenter_esp;
  break;
 case 130:
  if (!FUNC_0(VAR_2))
   return 1;
  VAR_5->data = VAR_6->tsc_aux;
  break;





 case 143:
  VAR_5->data = VAR_6->vmcb->save.dbgctl;
  break;
 case 142:
  VAR_5->data = VAR_6->vmcb->save.br_from;
  break;
 case 141:
  VAR_5->data = VAR_6->vmcb->save.br_to;
  break;
 case 140:
  VAR_5->data = VAR_6->vmcb->save.last_excp_from;
  break;
 case 139:
  VAR_5->data = VAR_6->vmcb->save.last_excp_to;
  break;
 case 128:
  VAR_5->data = VAR_6->nested.hsave_msr;
  break;
 case 129:
  VAR_5->data = VAR_6->nested.vm_cr_msr;
  break;
 case 138:
  if (!VAR_5->host_initiated &&
      !FUNC_2(VAR_4, VAR_0) &&
      !FUNC_2(VAR_4, VAR_1))
   return 1;

  VAR_5->data = VAR_6->spec_ctrl;
  break;
 case 147:
  if (!VAR_5->host_initiated &&
      !FUNC_2(VAR_4, VAR_3))
   return 1;

  VAR_5->data = VAR_6->virt_spec_ctrl;
  break;
 case 144: {

  int VAR_7, VAR_8;

  VAR_7 = FUNC_1(VAR_4);
  VAR_8 = FUNC_3(VAR_4);

  if (VAR_7 < 0 || VAR_8 < 0)
   return FUNC_4(VAR_4, VAR_5);

  VAR_5->data = 0;

  if (VAR_7 == 0x15 &&
      (VAR_8 >= 0x2 && VAR_8 < 0x20))
   VAR_5->data = 0x1E;
  }
  break;
 case 145:
  VAR_5->data = VAR_6->msr_decfg;
  break;
 default:
  return FUNC_4(VAR_4, VAR_5);
 }
 return 0;
}
