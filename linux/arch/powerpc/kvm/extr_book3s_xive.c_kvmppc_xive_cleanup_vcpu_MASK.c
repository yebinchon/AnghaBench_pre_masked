
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xive_q {int * qpage; } ;
struct kvmppc_xive_vcpu {int valid; scalar_t__ vp_ipi; int vp_ipi_data; int vp_id; struct xive_q* queues; struct kvmppc_xive_vcpu** esc_virq_names; scalar_t__* esc_virq; TYPE_3__* xive; int server_num; } ;
struct kvmppc_xive {int q_page_order; } ;
struct TYPE_8__ {struct kvmppc_xive_vcpu* xive_vcpu; int irq_type; scalar_t__ xive_cam_word; } ;
struct kvm_vcpu {TYPE_4__ arch; TYPE_2__* kvm; } ;
struct TYPE_7__ {scalar_t__ single_escalation; } ;
struct TYPE_5__ {struct kvmppc_xive* xive; } ;
struct TYPE_6__ {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,struct kvm_vcpu*) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct kvmppc_xive_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct kvm_vcpu*,struct kvmppc_xive_vcpu*,scalar_t__) ;
 int FUNC_9 (int ,struct xive_q*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int *,int ) ;

void FUNC_13(struct kvm_vcpu *VAR_3)
{
 struct kvmppc_xive_vcpu *VAR_4 = VAR_3->arch.xive_vcpu;
 struct kvmppc_xive *VAR_5 = VAR_3->kvm->arch.xive;
 int VAR_6;

 if (!FUNC_4(VAR_3))
  return;

 if (!VAR_4)
  return;

 FUNC_6("cleanup_vcpu(cpu=%d)\n", VAR_4->server_num);


 VAR_4->valid = 0;
 FUNC_5(VAR_3);


 FUNC_12(&VAR_4->vp_ipi_data, VAR_2);


 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (VAR_4->esc_virq[VAR_6]) {
   if (VAR_4->xive->single_escalation)
    FUNC_8(VAR_3, VAR_4,
       VAR_4->esc_virq[VAR_6]);
   FUNC_0(VAR_4->esc_virq[VAR_6], VAR_3);
   FUNC_2(VAR_4->esc_virq[VAR_6]);
   FUNC_3(VAR_4->esc_virq_names[VAR_6]);
  }
 }


 FUNC_10(VAR_4->vp_id);


 VAR_3->arch.xive_cam_word = 0;


 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  struct xive_q *VAR_7 = &VAR_4->queues[VAR_6];

  FUNC_9(VAR_4->vp_id, VAR_7, VAR_6);
  if (VAR_7->qpage) {
   FUNC_1((unsigned long)VAR_7->qpage,
       VAR_5->q_page_order);
   VAR_7->qpage = ((void*)0);
  }
 }


 if (VAR_4->vp_ipi) {
  FUNC_7(&VAR_4->vp_ipi_data);
  FUNC_11(VAR_4->vp_ipi);
 }

 FUNC_3(VAR_4);


 VAR_3->arch.irq_type = VAR_0;
 VAR_3->arch.xive_vcpu = ((void*)0);
}
