
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memory_slot {int dirty_bitmap; scalar_t__ base_gfn; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int ,unsigned long,unsigned long) ;

void FUNC_1(const struct kvm_memory_slot *VAR_1,
        unsigned long VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4;

 if (!VAR_3 || !VAR_1->dirty_bitmap)
  return;
 VAR_4 = (VAR_3 + VAR_0 - 1) / VAR_0;
 VAR_2 -= VAR_1->base_gfn;
 FUNC_0(VAR_1->dirty_bitmap, VAR_2, VAR_4);
}
