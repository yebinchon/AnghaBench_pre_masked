
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long* rmap; } ;
struct kvm_memory_slot {int base_gfn; TYPE_2__ arch; } ;
struct TYPE_3__ {int lpid; int pgtable; } ;
struct kvm {int mmu_lock; TYPE_1__ arch; } ;
typedef int pte_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,unsigned long,int *,unsigned int*) ;
 int FUNC_1 (struct kvm*,unsigned long*,int ,int ,unsigned long,unsigned long) ;
 int FUNC_2 (struct kvm*,unsigned long,unsigned int,int ) ;
 unsigned long FUNC_3 (struct kvm*,int *,int ,int ,unsigned long,unsigned int) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct kvm *VAR_3,
    struct kvm_memory_slot *VAR_4, int VAR_5)
{
 unsigned long VAR_6 = VAR_4->base_gfn + VAR_5;
 unsigned long VAR_7 = VAR_6 << VAR_0;
 pte_t *VAR_8;
 unsigned int VAR_9;
 int VAR_10 = 0;
 unsigned long VAR_11, *VAR_12;

 VAR_8 = FUNC_0(VAR_3->arch.pgtable, VAR_7, ((void*)0), &VAR_9);
 if (VAR_8 && FUNC_5(*VAR_8) && FUNC_4(*VAR_8)) {
  VAR_10 = 1;
  if (VAR_9)
   VAR_10 = 1 << (VAR_9 - VAR_0);
  FUNC_6(&VAR_3->mmu_lock);
  VAR_11 = FUNC_3(VAR_3, VAR_8, VAR_2, 0,
           VAR_7, VAR_9);
  FUNC_2(VAR_3, VAR_7, VAR_9, VAR_3->arch.lpid);

  VAR_12 = &VAR_4->arch.rmap[VAR_6 - VAR_4->base_gfn];
  FUNC_1(VAR_3, VAR_12, VAR_2, 0,
            VAR_11 & VAR_1,
            1UL << VAR_9);
  FUNC_7(&VAR_3->mmu_lock);
 }
 return VAR_10;
}
