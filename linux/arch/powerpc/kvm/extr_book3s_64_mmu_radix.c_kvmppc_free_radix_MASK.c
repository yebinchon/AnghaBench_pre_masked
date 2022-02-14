
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * pgtable; int lpid; } ;
struct kvm {TYPE_1__ arch; int mm; } ;


 int FUNC_0 (struct kvm*,int *,int ) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct kvm *VAR_0)
{
 if (VAR_0->arch.pgtable) {
  FUNC_0(VAR_0, VAR_0->arch.pgtable,
       VAR_0->arch.lpid);
  FUNC_1(VAR_0->mm, VAR_0->arch.pgtable);
  VAR_0->arch.pgtable = ((void*)0);
 }
}
