
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
struct kvmppc_ics {struct ics_irq_state* irq_state; } ;
struct kvmppc_icp {int dummy; } ;
struct TYPE_5__ {struct kvmppc_icp* icp; } ;
struct kvm_vcpu {TYPE_3__* kvm; TYPE_2__ arch; } ;
struct ics_irq_state {int pq_state; scalar_t__ lsi; } ;
struct TYPE_4__ {struct kvmppc_xics* xics; } ;
struct TYPE_6__ {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int*,int,int) ;
 int FUNC_2 (struct kvmppc_xics*,struct kvmppc_icp*,int,int) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 struct kvmppc_ics* FUNC_4 (struct kvmppc_xics*,int,size_t*) ;

__attribute__((used)) static int FUNC_5(struct kvm_vcpu *VAR_3, u32 VAR_4)
{
 struct kvmppc_xics *VAR_5 = VAR_3->kvm->arch.xics;
 struct kvmppc_icp *VAR_6 = VAR_3->arch.icp;
 struct kvmppc_ics *VAR_7;
 struct ics_irq_state *VAR_8;
 u16 VAR_9;
 u32 VAR_10, VAR_11;
 VAR_7 = FUNC_4(VAR_5, VAR_4, &VAR_9);
 if (!VAR_7) {
  FUNC_0("ios_eoi: IRQ 0x%06x not found !\n", VAR_4);
  return VAR_0;
 }
 VAR_8 = &VAR_7->irq_state[VAR_9];

 if (VAR_8->lsi)
  VAR_11 = VAR_8->pq_state;
 else
  do {
   VAR_10 = VAR_8->pq_state;
   VAR_11 = VAR_10 >> 1;
  } while (FUNC_1(&VAR_8->pq_state, VAR_10, VAR_11) != VAR_10);

 if (VAR_11 & VAR_2)
  FUNC_2(VAR_5, VAR_6, VAR_4, 0);

 FUNC_3(VAR_3->kvm, 0, VAR_4);

 return VAR_1;
}
