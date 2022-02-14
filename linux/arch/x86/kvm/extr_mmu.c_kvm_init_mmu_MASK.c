
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint ;
struct TYPE_4__ {TYPE_1__* mmu; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {int * prev_roots; int root_hpa; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*) ;
 scalar_t__ VAR_3 ;

void FUNC_4(struct kvm_vcpu *VAR_4, bool VAR_5)
{
 if (VAR_5) {
  uint VAR_6;

  VAR_4->arch.mmu->root_hpa = VAR_0;

  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
   VAR_4->arch.mmu->prev_roots[VAR_6] = VAR_2;
 }

 if (FUNC_3(VAR_4))
  FUNC_0(VAR_4);
 else if (VAR_3)
  FUNC_2(VAR_4);
 else
  FUNC_1(VAR_4);
}
