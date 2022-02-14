
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xive_q {int * qpage; } ;
struct kvmppc_xive_vcpu {int vp_id; struct xive_q* queues; } ;
struct TYPE_2__ {struct kvmppc_xive_vcpu* xive_vcpu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct xive_q*,int) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_0, int VAR_1)
{
 struct kvmppc_xive_vcpu *VAR_2 = VAR_0->arch.xive_vcpu;
 struct xive_q *VAR_3 = &VAR_2->queues[VAR_1];

 FUNC_2(VAR_2->vp_id, VAR_3, VAR_1);
 if (VAR_3->qpage) {
  FUNC_0(FUNC_1(VAR_3->qpage));
  VAR_3->qpage = ((void*)0);
 }
}
