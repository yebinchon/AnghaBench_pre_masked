
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xive_q {int guest_qaddr; int qpage; } ;
struct kvmppc_xive_vcpu {struct xive_q* queues; } ;
struct TYPE_3__ {struct kvmppc_xive_vcpu* xive_vcpu; } ;
struct kvm_vcpu {TYPE_2__* kvm; TYPE_1__ arch; } ;
struct TYPE_4__ {int srcu; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_2)
{
 struct kvmppc_xive_vcpu *VAR_3 = VAR_2->arch.xive_vcpu;
 unsigned int VAR_4;
 int VAR_5;

 if (!VAR_3)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  struct xive_q *VAR_6 = &VAR_3->queues[VAR_4];

  if (!VAR_6->qpage)
   continue;


  VAR_5 = FUNC_2(&VAR_2->kvm->srcu);
  FUNC_1(VAR_2->kvm, FUNC_0(VAR_6->guest_qaddr));
  FUNC_3(&VAR_2->kvm->srcu, VAR_5);
 }
 return 0;
}
