
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct xive_irq_data {int flags; } ;
struct kvmppc_xive_src_block {int dummy; } ;
struct kvmppc_xive_irq_state {scalar_t__ guest_priority; int old_p; scalar_t__ old_q; int number; int act_priority; int act_server; } ;
struct kvmppc_xive {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kvmppc_xive_irq_state*,int *,struct xive_irq_data**) ;
 int FUNC_1 (struct kvmppc_xive*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct xive_irq_data*) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (struct xive_irq_data*,int ) ;
 int FUNC_6 (int ,struct xive_irq_data*) ;

__attribute__((used)) static void FUNC_7(struct kvmppc_xive *VAR_4,
          struct kvmppc_xive_src_block *VAR_5,
          struct kvmppc_xive_irq_state *VAR_6,
          u8 VAR_7)
{
 struct xive_irq_data *VAR_8;
 u32 VAR_9;


 if (VAR_6->guest_priority != VAR_0)
  goto bail;


 FUNC_0(VAR_6, &VAR_9, &VAR_8);





 if (VAR_8->flags & VAR_2) {
  FUNC_4(VAR_9,
    FUNC_1(VAR_4, VAR_6->act_server),
    VAR_6->act_priority, VAR_6->number);

  if (!VAR_6->old_p)
   FUNC_6(VAR_9, VAR_8);

  if (!(VAR_8->flags & VAR_1))
   FUNC_3(VAR_8);
  goto bail;
 }


 if (VAR_6->old_q)
  FUNC_5(VAR_8, VAR_3);






 if (!VAR_6->old_p)
  FUNC_6(VAR_9, VAR_8);


 FUNC_2();
bail:
 VAR_6->guest_priority = VAR_7;
}
