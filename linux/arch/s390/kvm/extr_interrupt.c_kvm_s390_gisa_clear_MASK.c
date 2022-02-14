
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_s390_gisa_interrupt {int origin; } ;
struct TYPE_2__ {struct kvm_s390_gisa_interrupt gisa_int; } ;
struct kvm {TYPE_1__ arch; } ;


 int FUNC_0 (struct kvm*,int,char*,int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct kvm *VAR_0)
{
 struct kvm_s390_gisa_interrupt *VAR_1 = &VAR_0->arch.gisa_int;

 if (!VAR_1->origin)
  return;
 FUNC_1(VAR_1->origin);
 FUNC_0(VAR_0, 3, "gisa 0x%pK cleared", VAR_1->origin);
}
