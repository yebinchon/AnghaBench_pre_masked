
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int kvm; } ;
struct vcpu_svm {int last_cpu; TYPE_3__* vmcb; TYPE_2__ vcpu; } ;
struct svm_cpu_data {TYPE_3__** sev_vmcbs; } ;
struct TYPE_4__ {int asid; int tlb_ctl; } ;
struct TYPE_6__ {TYPE_1__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 struct svm_cpu_data* FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct vcpu_svm *VAR_3, int VAR_4)
{
 struct svm_cpu_data *VAR_5 = FUNC_1(VAR_2, VAR_4);
 int VAR_6 = FUNC_2(VAR_3->vcpu.kvm);


 VAR_3->vmcb->control.asid = VAR_6;







 if (VAR_5->sev_vmcbs[VAR_6] == VAR_3->vmcb &&
     VAR_3->last_cpu == VAR_4)
  return;

 VAR_3->last_cpu = VAR_4;
 VAR_5->sev_vmcbs[VAR_6] = VAR_3->vmcb;
 VAR_3->vmcb->control.tlb_ctl = VAR_0;
 FUNC_0(VAR_3->vmcb, VAR_1);
}
