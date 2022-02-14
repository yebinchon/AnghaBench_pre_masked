
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u64 ;
struct kvmppc_slb {size_t origv; } ;
struct TYPE_2__ {size_t slb_nr; struct kvmppc_slb* slb; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;



__attribute__((used)) static u64 FUNC_0(struct kvm_vcpu *VAR_0, u64 VAR_1)
{
 struct kvmppc_slb *VAR_2;

 if (VAR_1 > VAR_0->arch.slb_nr)
  return 0;

 VAR_2 = &VAR_0->arch.slb[VAR_1];

 return VAR_2->origv;
}
