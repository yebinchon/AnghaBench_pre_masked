
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct kvmppc_xics {int dummy; } ;
struct kvmppc_passthru_irqmap {int dummy; } ;
struct kvmppc_irq_map {int v_hwirq; int r_hwirq; int desc; } ;
struct kvmppc_ics {struct ics_irq_state* irq_state; } ;
struct kvmppc_icp {int dummy; } ;
struct TYPE_6__ {struct kvmppc_icp* icp; } ;
struct kvm_vcpu {TYPE_3__ arch; TYPE_2__* kvm; } ;
struct ics_irq_state {int pq_state; } ;
typedef int __be32 ;
struct TYPE_4__ {struct kvmppc_xics* xics; } ;
struct TYPE_5__ {TYPE_1__ arch; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kvmppc_xics*,struct kvmppc_icp*) ;
 int FUNC_1 (int*,int,int) ;
 int FUNC_2 (int ,int ,int ,int*) ;
 int FUNC_3 (struct kvmppc_xics*,struct kvmppc_icp*,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct kvmppc_ics* FUNC_6 (struct kvmppc_xics*,int,size_t*) ;

long FUNC_7(struct kvm_vcpu *VAR_2,
     __be32 VAR_3,
     struct kvmppc_irq_map *VAR_4,
     struct kvmppc_passthru_irqmap *VAR_5,
     bool *VAR_6)
{
 struct kvmppc_xics *VAR_7;
 struct kvmppc_icp *VAR_8;
 struct kvmppc_ics *VAR_9;
 struct ics_irq_state *VAR_10;
 u32 VAR_11;
 u16 VAR_12;
 u32 VAR_13, VAR_14;

 VAR_11 = VAR_4->v_hwirq;
 VAR_7 = VAR_2->kvm->arch.xics;
 VAR_8 = VAR_2->arch.icp;

 FUNC_5(VAR_4->desc);

 VAR_9 = FUNC_6(VAR_7, VAR_11, &VAR_12);
 if (!VAR_9)
  return 2;

 VAR_10 = &VAR_9->irq_state[VAR_12];


 do {
  VAR_13 = VAR_10->pq_state;
  VAR_14 = ((VAR_13 << 1) & 3) | VAR_1;
 } while (FUNC_1(&VAR_10->pq_state, VAR_13, VAR_14) != VAR_13);


 if (VAR_14 == VAR_1)
  FUNC_3(VAR_7, VAR_8, VAR_11, 0);


 FUNC_2(FUNC_4(VAR_4->desc), VAR_4->r_hwirq, VAR_3,
  VAR_6);

 if (FUNC_0(VAR_7, VAR_8) == VAR_0)
  return 2;
 else
  return -2;
}
