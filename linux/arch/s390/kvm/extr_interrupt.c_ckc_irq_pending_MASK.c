
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_4__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_2__ arch; int kvm; } ;
typedef scalar_t__ s64 ;
struct TYPE_3__ {scalar_t__ ckc; int* gcr; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_1)
{
 const u64 VAR_2 = FUNC_1(VAR_1->kvm);
 const u64 VAR_3 = VAR_1->arch.sie_block->ckc;

 if (VAR_1->arch.sie_block->gcr[0] & VAR_0) {
  if ((s64)VAR_3 >= (s64)VAR_2)
   return 0;
 } else if (VAR_3 >= VAR_2) {
  return 0;
 }
 return FUNC_0(VAR_1);
}
