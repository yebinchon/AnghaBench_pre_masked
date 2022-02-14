
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int invlpg; } ;
struct TYPE_7__ {struct kvm_mmu* mmu; } ;
struct kvm_vcpu {TYPE_2__ stat; TYPE_3__ arch; } ;
struct kvm_mmu {TYPE_1__* prev_roots; int (* invlpg ) (struct kvm_vcpu*,int ,int ) ;int root_hpa; } ;
typedef int gva_t ;
struct TYPE_8__ {int (* tlb_flush_gva ) (struct kvm_vcpu*,int ) ;} ;
struct TYPE_5__ {int hpa; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,struct kvm_vcpu*) ;
 TYPE_4__* VAR_1 ;
 int FUNC_2 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_3 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_4 (struct kvm_vcpu*,int ) ;

void FUNC_5(struct kvm_vcpu *VAR_2, gva_t VAR_3)
{
 struct kvm_mmu *VAR_4 = VAR_2->arch.mmu;
 int VAR_5;


 if (FUNC_1(VAR_3, VAR_2))
  return;

 VAR_4->invlpg(VAR_2, VAR_3, VAR_4->root_hpa);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  if (FUNC_0(VAR_4->prev_roots[VAR_5].hpa))
   VAR_4->invlpg(VAR_2, VAR_3, VAR_4->prev_roots[VAR_5].hpa);

 VAR_1->tlb_flush_gva(VAR_2, VAR_3);
 ++VAR_2->stat.invlpg;
}
