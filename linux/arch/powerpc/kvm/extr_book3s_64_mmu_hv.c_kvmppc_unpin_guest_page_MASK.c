
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct kvm_memory_slot {scalar_t__ dirty_bitmap; scalar_t__ base_gfn; } ;
struct kvm {int srcu; } ;


 unsigned long VAR_0 ;
 struct kvm_memory_slot* FUNC_0 (struct kvm*,unsigned long) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 struct page* FUNC_5 (void*) ;

void FUNC_6(struct kvm *VAR_1, void *VAR_2, unsigned long VAR_3,
        bool VAR_4)
{
 struct page *VAR_5 = FUNC_5(VAR_2);
 struct kvm_memory_slot *VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 FUNC_1(VAR_5);

 if (!VAR_4)
  return;


 VAR_7 = VAR_3 >> VAR_0;
 VAR_8 = FUNC_3(&VAR_1->srcu);
 VAR_6 = FUNC_0(VAR_1, VAR_7);
 if (VAR_6 && VAR_6->dirty_bitmap)
  FUNC_2(VAR_7 - VAR_6->base_gfn, VAR_6->dirty_bitmap);
 FUNC_4(&VAR_1->srcu, VAR_8);
}
