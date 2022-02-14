
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ mask; } ;
struct kvm_s390_gisa_interrupt {int * origin; int timer; TYPE_2__ alert; } ;
struct TYPE_3__ {struct kvm_s390_gisa_interrupt gisa_int; } ;
struct kvm {TYPE_1__ arch; } ;


 int FUNC_0 (int,char*,struct kvm*,scalar_t__) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct kvm *VAR_0)
{
 struct kvm_s390_gisa_interrupt *VAR_1 = &VAR_0->arch.gisa_int;

 if (!VAR_1->origin)
  return;
 if (VAR_1->alert.mask)
  FUNC_0(3, "vm 0x%pK has unexpected iam 0x%02x",
     VAR_0, VAR_1->alert.mask);
 while (FUNC_2(VAR_1->origin))
  FUNC_1();
 FUNC_3(&VAR_1->timer);
 VAR_1->origin = ((void*)0);
}
