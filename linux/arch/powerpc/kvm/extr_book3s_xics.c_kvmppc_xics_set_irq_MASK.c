
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct kvmppc_xics {int dummy; } ;
struct TYPE_2__ {struct kvmppc_xics* xics; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvmppc_xics*,int ,int) ;

int FUNC_1(struct kvm *VAR_1, int VAR_2, u32 VAR_3, int VAR_4,
   bool VAR_5)
{
 struct kvmppc_xics *VAR_6 = VAR_1->arch.xics;

 if (!VAR_6)
  return -VAR_0;
 return FUNC_0(VAR_6, VAR_3, VAR_4);
}
