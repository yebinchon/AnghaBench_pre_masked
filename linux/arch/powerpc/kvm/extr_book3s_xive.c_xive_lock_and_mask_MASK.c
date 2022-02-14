
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;
struct xive_irq_data {int flags; } ;
struct kvmppc_xive_src_block {int lock; } ;
struct kvmppc_xive_irq_state {scalar_t__ guest_priority; int old_p; int old_q; int number; int act_server; int in_eoi; } ;
struct kvmppc_xive {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct kvmppc_xive_irq_state*,int *,struct xive_irq_data**) ;
 int FUNC_3 (struct kvmppc_xive*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,scalar_t__,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct xive_irq_data*,int ) ;

__attribute__((used)) static u8 FUNC_8(struct kvmppc_xive *VAR_3,
        struct kvmppc_xive_src_block *VAR_4,
        struct kvmppc_xive_irq_state *VAR_5)
{
 struct xive_irq_data *VAR_6;
 u32 VAR_7;
 u8 VAR_8;
 u64 VAR_9;





 for (;;) {
  FUNC_0(&VAR_4->lock);
  VAR_8 = VAR_5->guest_priority;
  VAR_5->guest_priority = VAR_0;
  FUNC_4();
  if (!VAR_5->in_eoi)
   break;
  VAR_5->guest_priority = VAR_8;
  FUNC_1(&VAR_4->lock);
 }


 if (VAR_8 == VAR_0)
  return VAR_8;


 FUNC_2(VAR_5, &VAR_7, &VAR_6);
 if (VAR_6->flags & VAR_1) {
  FUNC_5(VAR_7,
    FUNC_3(VAR_3, VAR_5->act_server),
    VAR_0, VAR_5->number);

  VAR_5->old_p = 1;
  VAR_5->old_q = 0;
 } else {

  VAR_9 = FUNC_7(VAR_6, VAR_2);
  VAR_5->old_p = !!(VAR_9 & 2);
  VAR_5->old_q = !!(VAR_9 & 1);





  FUNC_6(VAR_7);
 }

 return VAR_8;
}
