
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_s390_sie_block {int fac; } ;
struct vsie_page {int fac; TYPE_1__* scb_o; struct kvm_s390_sie_block scb_s; } ;
struct kvm_vcpu {int kvm; } ;
typedef scalar_t__ __u64 ;
typedef int __u32 ;
struct TYPE_2__ {int fac; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*,int,int *,int) ;
 int FUNC_2 (struct vsie_page*) ;
 int FUNC_3 (struct kvm_s390_sie_block*,int) ;
 scalar_t__ FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct kvm_vcpu *VAR_0, struct vsie_page *VAR_1)
{
 struct kvm_s390_sie_block *VAR_2 = &VAR_1->scb_s;
 __u32 VAR_3 = FUNC_0(VAR_1->scb_o->fac) & 0x7ffffff8U;

 if (VAR_3 && FUNC_4(VAR_0->kvm, 7)) {
  FUNC_2(VAR_1);
  if (FUNC_1(VAR_0, VAR_3, &VAR_1->fac,
        sizeof(VAR_1->fac)))
   return FUNC_3(VAR_2, 0x1090U);
  VAR_2->fac = (__u32)(__u64) &VAR_1->fac;
 }
 return 0;
}
