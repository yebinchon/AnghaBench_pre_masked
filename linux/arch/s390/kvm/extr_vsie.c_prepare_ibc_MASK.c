
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct kvm_s390_sie_block {int ibc; } ;
struct vsie_page {struct kvm_s390_sie_block* scb_o; struct kvm_s390_sie_block scb_s; } ;
struct kvm_vcpu {TYPE_3__* kvm; } ;
typedef scalar_t__ __u64 ;
struct TYPE_8__ {int ibc; } ;
struct TYPE_5__ {scalar_t__ ibc; } ;
struct TYPE_6__ {TYPE_1__ model; } ;
struct TYPE_7__ {TYPE_2__ arch; } ;


 int FUNC_0 (int const) ;
 TYPE_4__ VAR_0 ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_1, struct vsie_page *VAR_2)
{
 struct kvm_s390_sie_block *VAR_3 = &VAR_2->scb_s;
 struct kvm_s390_sie_block *VAR_4 = VAR_2->scb_o;

 const uint32_t VAR_5 = VAR_4->ibc;
 const uint32_t VAR_6 = FUNC_0(VAR_5) & 0x0fffU;
 __u64 VAR_7 = (VAR_0.ibc >> 16) & 0x0fffU;

 VAR_3->ibc = 0;

 if (VAR_1->kvm->arch.model.ibc && VAR_6) {
  VAR_3->ibc = VAR_6;

  if (VAR_3->ibc < VAR_7)
   VAR_3->ibc = VAR_7;

  if (VAR_3->ibc > VAR_1->kvm->arch.model.ibc)
   VAR_3->ibc = VAR_1->kvm->arch.model.ibc;
 }
}
