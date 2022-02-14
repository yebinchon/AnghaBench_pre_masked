
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pgd; } ;
struct TYPE_4__ {TYPE_1__ gpa_mm; } ;
struct kvm {TYPE_2__ arch; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct kvm*,int ,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct kvm *VAR_0)
{

 FUNC_0(!FUNC_1(VAR_0, 0, ~0));
 FUNC_2(((void*)0), VAR_0->arch.gpa_mm.pgd);
}
