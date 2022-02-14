
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mm_struct {int dummy; } ;
struct TYPE_3__ {struct mm_struct guest_user_mm; struct mm_struct guest_kernel_mm; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {int flags; } ;


 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 int VAR_0 ;
 int FUNC_1 (struct mm_struct*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_2, int VAR_3)
{
 struct mm_struct *VAR_4 = &VAR_2->arch.guest_kernel_mm;
 struct mm_struct *VAR_5 = &VAR_2->arch.guest_user_mm;
 struct mm_struct *VAR_6;





 if (VAR_1->flags & VAR_0) {
  VAR_6 = FUNC_0(VAR_2) ? VAR_4 : VAR_5;
  FUNC_1(VAR_6);
  FUNC_3(VAR_3);
  FUNC_2();
 }

 return 0;
}
