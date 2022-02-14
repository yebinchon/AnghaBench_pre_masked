
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* pending_pri; void* mfrr; } ;
struct kvmppc_icp {unsigned long server_num; TYPE_1__ state; struct kvm_vcpu* vcpu; } ;
struct TYPE_6__ {struct kvmppc_icp* icp; } ;
struct kvm_vcpu {int vcpu_id; TYPE_2__ arch; TYPE_4__* kvm; } ;
struct TYPE_7__ {int xics; } ;
struct TYPE_8__ {TYPE_3__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*,unsigned long) ;
 struct kvmppc_icp* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_5, unsigned long VAR_6)
{
 struct kvmppc_icp *VAR_7;

 if (!VAR_5->kvm->arch.xics)
  return -VAR_1;

 if (FUNC_1(VAR_5->kvm, VAR_6))
  return -VAR_0;

 VAR_7 = FUNC_2(sizeof(struct kvmppc_icp), VAR_3);
 if (!VAR_7)
  return -VAR_2;

 VAR_7->vcpu = VAR_5;
 VAR_7->server_num = VAR_6;
 VAR_7->state.mfrr = VAR_4;
 VAR_7->state.pending_pri = VAR_4;
 VAR_5->arch.icp = VAR_7;

 FUNC_0("created server for vcpu %d\n", VAR_5->vcpu_id);

 return 0;
}
