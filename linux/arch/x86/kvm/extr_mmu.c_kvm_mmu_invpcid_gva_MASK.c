
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint ;
struct TYPE_7__ {int invlpg; } ;
struct TYPE_5__ {struct kvm_mmu* mmu; } ;
struct kvm_vcpu {TYPE_3__ stat; TYPE_1__ arch; } ;
struct kvm_mmu {TYPE_2__* prev_roots; int (* invlpg ) (struct kvm_vcpu*,int ,int ) ;int root_hpa; } ;
typedef int gva_t ;
struct TYPE_8__ {int (* tlb_flush_gva ) (struct kvm_vcpu*,int ) ;} ;
struct TYPE_6__ {int hpa; int cr3; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned long FUNC_1 (struct kvm_vcpu*) ;
 unsigned long FUNC_2 (struct kvm_vcpu*,int ) ;
 TYPE_4__* VAR_1 ;
 int FUNC_3 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_4 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_5 (struct kvm_vcpu*,int ) ;

void FUNC_6(struct kvm_vcpu *VAR_2, gva_t VAR_3, unsigned long VAR_4)
{
 struct kvm_mmu *VAR_5 = VAR_2->arch.mmu;
 bool VAR_6 = 0;
 uint VAR_7;

 if (VAR_4 == FUNC_1(VAR_2)) {
  VAR_5->invlpg(VAR_2, VAR_3, VAR_5->root_hpa);
  VAR_6 = 1;
 }

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (FUNC_0(VAR_5->prev_roots[VAR_7].hpa) &&
      VAR_4 == FUNC_2(VAR_2, VAR_5->prev_roots[VAR_7].cr3)) {
   VAR_5->invlpg(VAR_2, VAR_3, VAR_5->prev_roots[VAR_7].hpa);
   VAR_6 = 1;
  }
 }

 if (VAR_6)
  VAR_1->tlb_flush_gva(VAR_2, VAR_3);

 ++VAR_2->stat.invlpg;






}
