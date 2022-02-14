
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {TYPE_1__* mmu; } ;
struct kvm_vcpu {TYPE_2__ arch; int kvm; } ;
struct kvm_mmu_page {int spt; scalar_t__ unsync; } ;
typedef int kvm_pfn_t ;
typedef int hpa_t ;
typedef int gfn_t ;
struct TYPE_3__ {int root_level; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int ,char*,struct kvm_mmu_page*,int,...) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct kvm_mmu_page*,int*) ;
 int FUNC_6 (struct kvm_vcpu*,int ) ;
 struct kvm_mmu_page* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct kvm_vcpu *VAR_3, u64 *VAR_4, int VAR_5)
{
 struct kvm_mmu_page *VAR_6;
 gfn_t VAR_7;
 kvm_pfn_t VAR_8;
 hpa_t VAR_9;

 VAR_6 = FUNC_7(FUNC_0(VAR_4));

 if (VAR_6->unsync) {
  if (VAR_5 != VAR_2) {
   FUNC_1(VAR_3->kvm, "unsync sp: %p "
         "level = %d\n", VAR_6, VAR_5);
   return;
  }
 }

 if (!FUNC_4(*VAR_4) || !FUNC_3(*VAR_4, VAR_5))
  return;

 VAR_7 = FUNC_5(VAR_6, VAR_4 - VAR_6->spt);
 VAR_8 = FUNC_6(VAR_3, VAR_7);

 if (FUNC_2(VAR_8))
  return;

 VAR_9 = VAR_8 << VAR_0;
 if ((*VAR_4 & VAR_1) != VAR_9)
  FUNC_1(VAR_3->kvm, "levels %d pfn %llx hpa %llx "
        "ent %llxn", VAR_3->arch.mmu->root_level, VAR_8,
        VAR_9, *VAR_4);
}
