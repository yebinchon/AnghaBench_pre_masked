
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct xive_q {int count; scalar_t__ msk; int qpage; } ;
struct kvmppc_xive_vcpu {struct xive_q* queues; int valid; } ;
struct TYPE_2__ {struct kvmppc_xive_vcpu* xive_vcpu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int *,int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_3, u8 VAR_4)
{
 struct kvmppc_xive_vcpu *VAR_5 = VAR_3->arch.xive_vcpu;
 struct xive_q *VAR_6;
 u32 VAR_7;

 if (FUNC_0(!VAR_5))
  return -VAR_1;
 if (!VAR_5->valid)
  return -VAR_1;

 VAR_6 = &VAR_5->queues[VAR_4];
 if (FUNC_0(!VAR_6->qpage))
  return -VAR_1;


 VAR_7 = (VAR_6->msk + 1) - VAR_2;
 return FUNC_1(&VAR_6->count, 1, VAR_7) ? 0 : -VAR_0;
}
