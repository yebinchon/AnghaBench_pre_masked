
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct kvmppc_xics {int dummy; } ;
struct kvmppc_ics {struct ics_irq_state* irq_state; } ;
struct kvmppc_icp {int dummy; } ;
struct TYPE_2__ {struct kvmppc_xics* xics; } ;
struct kvm {TYPE_1__ arch; } ;
struct ics_irq_state {int resend; int masked_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct kvmppc_xics*,struct kvmppc_icp*,int ,int) ;
 struct kvmppc_ics* FUNC_2 (struct kvmppc_xics*,int ,size_t*) ;
 struct kvmppc_icp* FUNC_3 (struct kvm*,int ) ;
 scalar_t__ FUNC_4 (struct kvmppc_xics*,struct kvmppc_ics*,struct ics_irq_state*,int ,int ,int ) ;

int FUNC_5(struct kvm *VAR_2, u32 VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct kvmppc_xics *VAR_6 = VAR_2->arch.xics;
 struct kvmppc_icp *VAR_7;
 struct kvmppc_ics *VAR_8;
 struct ics_irq_state *VAR_9;
 u16 VAR_10;

 if (!VAR_6)
  return -VAR_1;

 VAR_8 = FUNC_2(VAR_6, VAR_3, &VAR_10);
 if (!VAR_8)
  return -VAR_0;
 VAR_9 = &VAR_8->irq_state[VAR_10];

 VAR_7 = FUNC_3(VAR_2, VAR_4);
 if (!VAR_7)
  return -VAR_0;

 FUNC_0("set_xive %#x server %#x prio %#x MP:%d RS:%d\n",
   VAR_3, VAR_4, VAR_5,
   VAR_9->masked_pending, VAR_9->resend);

 if (FUNC_4(VAR_6, VAR_8, VAR_9, VAR_4, VAR_5, VAR_5))
  FUNC_1(VAR_6, VAR_7, VAR_3, 0);

 return 0;
}
