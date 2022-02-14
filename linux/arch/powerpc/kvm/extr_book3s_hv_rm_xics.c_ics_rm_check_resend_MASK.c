
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_xics {int dummy; } ;
struct kvmppc_ics {struct ics_irq_state* irq_state; } ;
struct kvmppc_icp {int dummy; } ;
struct ics_irq_state {int number; scalar_t__ resend; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvmppc_xics*,struct kvmppc_icp*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct kvmppc_xics *VAR_1,
    struct kvmppc_ics *VAR_2, struct kvmppc_icp *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct ics_irq_state *VAR_5 = &VAR_2->irq_state[VAR_4];
  if (VAR_5->resend)
   FUNC_0(VAR_1, VAR_3, VAR_5->number, 1);
 }

}
