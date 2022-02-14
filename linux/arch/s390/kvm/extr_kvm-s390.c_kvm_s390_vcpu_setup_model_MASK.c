
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct TYPE_6__ {TYPE_3__* sie_block; } ;
struct kvm_vcpu {TYPE_2__ arch; TYPE_4__* kvm; } ;
struct kvm_s390_cpu_model {scalar_t__ fac_list; int ibc; } ;
struct TYPE_5__ {struct kvm_s390_cpu_model model; } ;
struct TYPE_8__ {TYPE_1__ arch; } ;
struct TYPE_7__ {scalar_t__ fac; int ibc; } ;


 scalar_t__ FUNC_0 (TYPE_4__*,int) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_0)
{
 struct kvm_s390_cpu_model *VAR_1 = &VAR_0->kvm->arch.model;

 VAR_0->arch.sie_block->ibc = VAR_1->ibc;
 if (FUNC_0(VAR_0->kvm, 7))
  VAR_0->arch.sie_block->fac = (u32)(u64) VAR_1->fac_list;
}
