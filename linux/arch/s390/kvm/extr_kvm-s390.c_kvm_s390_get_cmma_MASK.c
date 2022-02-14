
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u8 ;
struct kvm_s390_cmma_log {unsigned long start_gfn; unsigned long count; } ;
struct kvm_memslots {TYPE_1__* memslots; } ;
struct kvm_memory_slot {unsigned long base_gfn; unsigned long npages; } ;
struct TYPE_4__ {int cmma_dirty_pages; } ;
struct kvm {int mm; TYPE_2__ arch; } ;
struct TYPE_3__ {unsigned long base_gfn; unsigned long npages; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,unsigned long,unsigned long*) ;
 unsigned long FUNC_2 (struct kvm*,unsigned long) ;
 struct kvm_memory_slot* FUNC_3 (struct kvm*,unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long) ;
 struct kvm_memslots* FUNC_5 (struct kvm*) ;
 unsigned long FUNC_6 (struct kvm_memslots*,unsigned long) ;
 int FUNC_7 (struct kvm_memory_slot*) ;
 scalar_t__ FUNC_8 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_9(struct kvm *VAR_1, struct kvm_s390_cmma_log *VAR_2,
        u8 *VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 struct kvm_memslots *VAR_10 = FUNC_5(VAR_1);
 struct kvm_memory_slot *VAR_11;

 VAR_6 = FUNC_6(VAR_10, VAR_2->start_gfn);
 VAR_11 = FUNC_3(VAR_1, VAR_6);
 VAR_2->count = 0;
 VAR_2->start_gfn = VAR_6;
 if (!VAR_11)
  return 0;
 VAR_7 = FUNC_6(VAR_10, VAR_6 + 1);
 VAR_5 = VAR_10->memslots[0].base_gfn + VAR_10->memslots[0].npages;

 while (VAR_2->count < VAR_4) {
  VAR_8 = FUNC_2(VAR_1, VAR_6);
  if (FUNC_4(VAR_8))
   return 0;

  if (FUNC_8(VAR_6 - VAR_11->base_gfn, FUNC_7(VAR_11)))
   FUNC_0(&VAR_1->arch.cmma_dirty_pages);
  if (FUNC_1(VAR_1->mm, VAR_8, &VAR_9) < 0)
   VAR_9 = 0;

  VAR_3[VAR_2->count++] = (VAR_9 >> 24) & 0x43;

  if (VAR_7 > VAR_6 + VAR_0)
   return 0;

  if (VAR_6 == VAR_7)
   VAR_7 = FUNC_6(VAR_10, VAR_6 + 1);

  if ((VAR_7 >= VAR_5) ||
      (VAR_7 - VAR_2->start_gfn >= VAR_4))
   return 0;
  VAR_6++;

  if (VAR_6 - VAR_11->base_gfn >= VAR_11->npages) {
   VAR_11 = FUNC_3(VAR_1, VAR_6);
   if (!VAR_11)
    return 0;
  }
 }
 return 0;
}
