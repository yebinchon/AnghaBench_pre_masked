
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {unsigned long paddr_accessed; int vaddr_accessed; } ;
struct kvm_vcpu {TYPE_1__ arch; TYPE_2__* kvm; } ;
struct kvm_run {int dummy; } ;
typedef int gva_t ;
typedef int gpa_t ;
struct TYPE_4__ {int srcu; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_vcpu*,int ,int ,int ,int *) ;
 int FUNC_2 (struct kvm_run*,struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*,int ,int *) ;
 scalar_t__ FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;

int FUNC_8(struct kvm_run *VAR_4, struct kvm_vcpu *VAR_5,
      unsigned long VAR_6, gva_t VAR_7, int VAR_8)
{
 u32 VAR_9;






 if (VAR_8) {
  int VAR_10, VAR_11;

  VAR_10 = FUNC_6(&VAR_5->kvm->srcu);
  VAR_11 = FUNC_1(VAR_5, VAR_2, (gpa_t) VAR_6, 0,
           ((void*)0));
  FUNC_7(&VAR_5->kvm->srcu, VAR_10);
  if (!VAR_11) {
   FUNC_5(VAR_5, FUNC_4(VAR_5) + 4);
   return VAR_3;
  }
 }




 if (FUNC_3(VAR_5, VAR_1, &VAR_9) !=
  VAR_0)
  return VAR_3;
 if (FUNC_0(VAR_9) != !!VAR_8)
  return VAR_3;
 VAR_5->arch.paddr_accessed = VAR_6;
 VAR_5->arch.vaddr_accessed = VAR_7;
 return FUNC_2(VAR_4, VAR_5);
}
