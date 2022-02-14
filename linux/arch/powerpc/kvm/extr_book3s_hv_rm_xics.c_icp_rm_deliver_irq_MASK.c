
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct kvmppc_xics {int err_noicp; int kvm; int err_noics; } ;
struct kvmppc_ics {int lock; int icsid; struct ics_irq_state* irq_state; } ;
struct TYPE_2__ {int need_resend; } ;
struct kvmppc_icp {scalar_t__ server_num; TYPE_1__ state; int resend_map; int n_reject; } ;
struct ics_irq_state {scalar_t__ server; int resend; scalar_t__ priority; int masked_pending; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct kvmppc_icp*,scalar_t__,scalar_t__,scalar_t__*) ;
 struct kvmppc_ics* FUNC_3 (struct kvmppc_xics*,scalar_t__,size_t*) ;
 struct kvmppc_icp* FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct kvmppc_xics *VAR_2, struct kvmppc_icp *VAR_3,
       u32 VAR_4, bool VAR_5)
{
 struct ics_irq_state *VAR_6;
 struct kvmppc_ics *VAR_7;
 u32 VAR_8;
 u16 VAR_9;
 again:

 VAR_7 = FUNC_3(VAR_2, VAR_4, &VAR_9);
 if (!VAR_7) {

  VAR_2->err_noics++;
  return;
 }
 VAR_6 = &VAR_7->irq_state[VAR_9];


 FUNC_0(&VAR_7->lock);


 if (!VAR_3 || VAR_6->server != VAR_3->server_num) {
  VAR_3 = FUNC_4(VAR_2->kvm, VAR_6->server);
  if (!VAR_3) {

   VAR_2->err_noicp++;
   goto out;
  }
 }

 if (VAR_5)
  if (!VAR_6->resend)
   goto out;


 VAR_6->resend = 0;
 if (VAR_6->priority == VAR_0) {
  VAR_6->masked_pending = 1;
  goto out;
 }
 if (FUNC_2(VAR_3, VAR_4, VAR_6->priority, &VAR_8)) {



  if (VAR_8 && VAR_8 != VAR_1) {
   FUNC_1(&VAR_7->lock);
   VAR_3->n_reject++;
   VAR_4 = VAR_8;
   VAR_5 = 0;
   goto again;
  }
 } else {




  VAR_6->resend = 1;





  FUNC_7();
  FUNC_5(VAR_7->icsid, VAR_3->resend_map);







  FUNC_6();
  if (!VAR_3->state.need_resend) {
   VAR_6->resend = 0;
   FUNC_1(&VAR_7->lock);
   VAR_5 = 0;
   goto again;
  }
 }
 out:
 FUNC_1(&VAR_7->lock);
}
