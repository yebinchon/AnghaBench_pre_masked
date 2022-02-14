
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pgtable; } ;
struct kvm {TYPE_1__ arch; int mm; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

int FUNC_1(struct kvm *VAR_1)
{
 VAR_1->arch.pgtable = FUNC_0(VAR_1->mm);
 if (!VAR_1->arch.pgtable)
  return -VAR_0;
 return 0;
}
