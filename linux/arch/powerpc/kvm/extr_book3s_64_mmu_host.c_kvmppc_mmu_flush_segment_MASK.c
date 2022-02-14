
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
struct kvmppc_book3s_shadow_vcpu {int slb_max; TYPE_1__* slb; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int esid; } ;


 int VAR_0 ;
 struct kvmppc_book3s_shadow_vcpu* FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvmppc_book3s_shadow_vcpu*) ;

void FUNC_2(struct kvm_vcpu *VAR_1, ulong VAR_2, ulong VAR_3)
{
 struct kvmppc_book3s_shadow_vcpu *VAR_4 = FUNC_0(VAR_1);
 ulong VAR_5 = -VAR_3;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4->slb_max; VAR_6++) {
  if ((VAR_4->slb[VAR_6].esid & VAR_0) &&
      (VAR_4->slb[VAR_6].esid & VAR_5) == VAR_2) {

   VAR_4->slb[VAR_6].esid = 0;
  }
 }

 FUNC_1(VAR_4);
}
