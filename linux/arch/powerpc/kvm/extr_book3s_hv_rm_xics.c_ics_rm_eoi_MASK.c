
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct kvmppc_xics {int dummy; } ;
struct kvmppc_ics {struct ics_irq_state* irq_state; } ;
struct kvmppc_icp {int rm_eoied_irq; int rm_action; } ;
struct TYPE_8__ {int pthru_bad_aff; int pthru_host; int pthru_all; } ;
struct TYPE_6__ {struct kvmppc_icp* icp; } ;
struct kvm_vcpu {TYPE_4__ stat; TYPE_3__* kvm; TYPE_2__ arch; } ;
struct ics_irq_state {int pq_state; int intr_cpu; scalar_t__ host_irq; scalar_t__ lsi; } ;
struct TYPE_5__ {struct kvmppc_xics* xics; } ;
struct TYPE_7__ {int irq_ack_notifier_list; TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvmppc_xics*,struct kvmppc_icp*) ;
 int FUNC_1 (int*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct kvmppc_xics*,int *,int,int) ;
 struct kvmppc_ics* FUNC_5 (struct kvmppc_xics*,int,size_t*) ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_8(struct kvm_vcpu *VAR_2, u32 VAR_3)
{
 struct kvmppc_xics *VAR_4 = VAR_2->kvm->arch.xics;
 struct kvmppc_icp *VAR_5 = VAR_2->arch.icp;
 struct kvmppc_ics *VAR_6;
 struct ics_irq_state *VAR_7;
 u16 VAR_8;
 u32 VAR_9, VAR_10;
 VAR_6 = FUNC_5(VAR_4, VAR_3, &VAR_8);
 if (!VAR_6)
  goto bail;

 VAR_7 = &VAR_6->irq_state[VAR_8];

 if (VAR_7->lsi)
  VAR_10 = VAR_7->pq_state;
 else
  do {
   VAR_9 = VAR_7->pq_state;
   VAR_10 = VAR_9 >> 1;
  } while (FUNC_1(&VAR_7->pq_state, VAR_9, VAR_10) != VAR_9);

 if (VAR_10 & VAR_0)
  FUNC_4(VAR_4, ((void*)0), VAR_3, 0);

 if (!FUNC_3(&VAR_2->kvm->irq_ack_notifier_list)) {
  VAR_5->rm_action |= VAR_1;
  VAR_5->rm_eoied_irq = VAR_3;
 }

 if (VAR_7->host_irq) {
  ++VAR_2->stat.pthru_all;
  if (VAR_7->intr_cpu != -1) {
   int VAR_11 = FUNC_6();

   VAR_11 = FUNC_2(VAR_11);
   ++VAR_2->stat.pthru_host;
   if (VAR_7->intr_cpu != VAR_11) {
    ++VAR_2->stat.pthru_bad_aff;
    FUNC_7(VAR_7->host_irq, VAR_11);
   }
   VAR_7->intr_cpu = -1;
  }
 }

 bail:
 return FUNC_0(VAR_4, VAR_5);
}
