
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct kvmppc_xive_irq_state {scalar_t__ act_priority; int number; int act_server; } ;
struct kvmppc_xive {int dummy; } ;
struct TYPE_2__ {struct kvmppc_xive* xive; } ;
struct kvm {TYPE_1__ arch; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct kvmppc_xive_irq_state*,int *,int *) ;
 int FUNC_1 (struct kvm*,int *,scalar_t__) ;
 int FUNC_2 (struct kvmppc_xive*,int ) ;
 int FUNC_3 (struct kvm*,int ,scalar_t__) ;
 int FUNC_4 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_5(struct kvm *VAR_1,
     struct kvmppc_xive_irq_state *VAR_2,
     u32 VAR_3, u8 VAR_4)
{
 struct kvmppc_xive *VAR_5 = VAR_1->arch.xive;
 u32 VAR_6;
 int VAR_7;






 VAR_7 = FUNC_1(VAR_1, &VAR_3, VAR_4);





 if (VAR_7)
  return VAR_7;






 if (VAR_2->act_priority != VAR_0)
  FUNC_3(VAR_1,
       VAR_2->act_server,
       VAR_2->act_priority);



 VAR_2->act_priority = VAR_4;
 VAR_2->act_server = VAR_3;


 FUNC_0(VAR_2, &VAR_6, ((void*)0));

 return FUNC_4(VAR_6,
      FUNC_2(VAR_5, VAR_3),
      VAR_4, VAR_2->number);
}
