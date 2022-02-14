
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct kvmppc_xics {int kvm; } ;
struct kvmppc_ics {int lock; int icsid; struct ics_irq_state* irq_state; } ;
struct TYPE_2__ {int need_resend; } ;
struct kvmppc_icp {scalar_t__ server_num; TYPE_1__ state; int resend_map; } ;
struct ics_irq_state {scalar_t__ server; int resend; scalar_t__ priority; int masked_pending; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct kvmppc_icp*,scalar_t__,scalar_t__,scalar_t__*) ;
 struct kvmppc_ics* FUNC_4 (struct kvmppc_xics*,scalar_t__,size_t*) ;
 struct kvmppc_icp* FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (char*,scalar_t__,scalar_t__) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;

__attribute__((used)) static void FUNC_12(struct kvmppc_xics *VAR_2, struct kvmppc_icp *VAR_3,
       u32 VAR_4, bool VAR_5)
{
 struct ics_irq_state *VAR_6;
 struct kvmppc_ics *VAR_7;
 u32 VAR_8;
 u16 VAR_9;
 unsigned long VAR_10;
 again:

 VAR_7 = FUNC_4(VAR_2, VAR_4, &VAR_9);
 if (!VAR_7) {
  FUNC_0("icp_deliver_irq: IRQ 0x%06x not found !\n", VAR_4);
  return;
 }
 VAR_6 = &VAR_7->irq_state[VAR_9];


 FUNC_7(VAR_10);
 FUNC_1(&VAR_7->lock);


 if (!VAR_3 || VAR_6->server != VAR_3->server_num) {
  VAR_3 = FUNC_5(VAR_2->kvm, VAR_6->server);
  if (!VAR_3) {
   FUNC_8("icp_deliver_irq: IRQ 0x%06x server 0x%x not found !\n",
    VAR_4, VAR_6->server);
   goto out;
  }
 }

 if (VAR_5)
  if (!VAR_6->resend)
   goto out;


 VAR_6->resend = 0;
 if (VAR_6->priority == VAR_0) {
  FUNC_0("irq %#x masked pending\n", VAR_4);
  VAR_6->masked_pending = 1;
  goto out;
 }
 if (FUNC_3(VAR_3, VAR_4, VAR_6->priority, &VAR_8)) {



  if (VAR_8 && VAR_8 != VAR_1) {
   FUNC_2(&VAR_7->lock);
   FUNC_6(VAR_10);
   VAR_4 = VAR_8;
   VAR_5 = 0;
   goto again;
  }
 } else {




  VAR_6->resend = 1;





  FUNC_11();
  FUNC_9(VAR_7->icsid, VAR_3->resend_map);







  FUNC_10();
  if (!VAR_3->state.need_resend) {
   VAR_6->resend = 0;
   FUNC_2(&VAR_7->lock);
   FUNC_6(VAR_10);
   VAR_5 = 0;
   goto again;
  }
 }
 out:
 FUNC_2(&VAR_7->lock);
 FUNC_6(VAR_10);
}
