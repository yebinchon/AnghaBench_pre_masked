
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvmppc_xive_vcpu {int valid; int vp_id; scalar_t__* esc_virq; struct kvmppc_xive_vcpu** esc_virq_names; TYPE_1__* xive; int server_num; } ;
struct TYPE_4__ {struct kvmppc_xive_vcpu* xive_vcpu; int irq_type; scalar_t__ xive_cam_word; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {scalar_t__ single_escalation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,struct kvm_vcpu*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct kvmppc_xive_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*,int) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (struct kvm_vcpu*,struct kvmppc_xive_vcpu*,scalar_t__) ;
 int FUNC_8 (int ) ;

void FUNC_9(struct kvm_vcpu *VAR_2)
{
 struct kvmppc_xive_vcpu *VAR_3 = VAR_2->arch.xive_vcpu;
 int VAR_4;

 if (!FUNC_4(VAR_2))
  return;

 if (!VAR_3)
  return;

 FUNC_6("native_cleanup_vcpu(cpu=%d)\n", VAR_3->server_num);


 VAR_3->valid = 0;
 FUNC_3(VAR_2);


 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {

  if (VAR_3->esc_virq[VAR_4]) {
   if (VAR_3->xive->single_escalation)
    FUNC_7(VAR_2, VAR_3,
       VAR_3->esc_virq[VAR_4]);
   FUNC_0(VAR_3->esc_virq[VAR_4], VAR_2);
   FUNC_1(VAR_3->esc_virq[VAR_4]);
   FUNC_2(VAR_3->esc_virq_names[VAR_4]);
   VAR_3->esc_virq[VAR_4] = 0;
  }
 }


 FUNC_8(VAR_3->vp_id);


 VAR_2->arch.xive_cam_word = 0;


 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  FUNC_5(VAR_2, VAR_4);
 }


 FUNC_2(VAR_3);


 VAR_2->arch.irq_type = VAR_0;
 VAR_2->arch.xive_vcpu = ((void*)0);
}
