
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {void* pgd; } ;
struct TYPE_2__ {struct mm_struct guest_user_mm; struct mm_struct guest_kernel_mm; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 void* FUNC_0 (struct mm_struct*) ;
 int FUNC_1 (struct mm_struct*,void*) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_1)
{
 struct mm_struct *VAR_2 = &VAR_1->arch.guest_kernel_mm;
 struct mm_struct *VAR_3 = &VAR_1->arch.guest_user_mm;





 VAR_2->pgd = FUNC_0(VAR_2);
 if (!VAR_2->pgd)
  return -VAR_0;

 VAR_3->pgd = FUNC_0(VAR_3);
 if (!VAR_3->pgd) {
  FUNC_1(VAR_2, VAR_2->pgd);
  return -VAR_0;
 }

 return 0;
}
