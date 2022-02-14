
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_memslots {int used_slots; struct kvm_memory_slot* memslots; } ;
struct kvm_memory_slot {scalar_t__ npages; int dirty_bitmap; } ;
struct TYPE_2__ {int migration_mode; int cmma_dirty_pages; int use_cmma; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (struct kvm_memory_slot*) ;
 struct kvm_memslots* FUNC_2 (struct kvm*) ;
 int FUNC_3 (struct kvm*,int ) ;
 int FUNC_4 (struct kvm_memory_slot*) ;
 int FUNC_5 (int ,int,int ) ;

__attribute__((used)) static int FUNC_6(struct kvm *VAR_2)
{
 struct kvm_memory_slot *VAR_3;
 struct kvm_memslots *VAR_4;
 unsigned long VAR_5 = 0;
 int VAR_6;


 if (VAR_2->arch.migration_mode)
  return 0;
 VAR_4 = FUNC_2(VAR_2);
 if (!VAR_4 || !VAR_4->used_slots)
  return -VAR_0;

 if (!VAR_2->arch.use_cmma) {
  VAR_2->arch.migration_mode = 1;
  return 0;
 }

 for (VAR_6 = 0; VAR_6 < VAR_4->used_slots; VAR_6++) {
  VAR_3 = VAR_4->memslots + VAR_6;
  if (!VAR_3->dirty_bitmap)
   return -VAR_0;






  FUNC_5(FUNC_4(VAR_3), 0xff, FUNC_1(VAR_3));
  VAR_5 += VAR_3->npages;
 }
 FUNC_0(&VAR_2->arch.cmma_dirty_pages, VAR_5);
 VAR_2->arch.migration_mode = 1;
 FUNC_3(VAR_2, VAR_1);
 return 0;
}
