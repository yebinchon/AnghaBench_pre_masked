
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct kvmppc_xics {int real_mode; } ;
struct kvmppc_icp {int dummy; } ;
struct TYPE_6__ {struct kvmppc_icp* icp; } ;
struct kvm_vcpu {TYPE_3__ arch; TYPE_2__* kvm; } ;
struct TYPE_4__ {struct kvmppc_xics* xics; } ;
struct TYPE_5__ {TYPE_1__ arch; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct kvmppc_xics*,struct kvmppc_icp*) ;
 int FUNC_1 (struct kvmppc_xics*,struct kvmppc_icp*,unsigned long) ;
 int FUNC_2 (struct kvm_vcpu*,scalar_t__) ;

int FUNC_3(struct kvm_vcpu *VAR_2, unsigned long VAR_3)
{
 struct kvmppc_xics *VAR_4 = VAR_2->kvm->arch.xics;
 struct kvmppc_icp *VAR_5 = VAR_2->arch.icp;
 u32 VAR_6 = VAR_3 & 0x00ffffff;

 if (!VAR_4 || !VAR_4->real_mode)
  return VAR_0;
 FUNC_1(VAR_4, VAR_5, VAR_3 >> 24);


 if (VAR_6 == VAR_1)
  return FUNC_0(VAR_4, VAR_5);

 return FUNC_2(VAR_2, VAR_6);
}
