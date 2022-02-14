
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mm_struct {int dummy; } ;
struct TYPE_2__ {struct mm_struct guest_user_mm; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int FUNC_0 (int,struct mm_struct*) ;
 int FUNC_1 () ;

__attribute__((used)) static u32 FUNC_2(struct kvm_vcpu *VAR_0)
{
 struct mm_struct *VAR_1 = &VAR_0->arch.guest_user_mm;
 int VAR_2 = FUNC_1();

 return FUNC_0(VAR_2, VAR_1);
}
