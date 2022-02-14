
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memory_slot {scalar_t__ dirty_bitmap; } ;
struct kvm {int dummy; } ;


 struct kvm_memory_slot* FUNC_0 (int ,unsigned long) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (struct kvm*) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (struct kvm_memory_slot*,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct kvm *VAR_0,
    unsigned long VAR_1, unsigned long VAR_2)
{
 struct kvm_memory_slot *VAR_3;
 unsigned long VAR_4;
 unsigned long VAR_5;

 VAR_5 = FUNC_3(VAR_1, VAR_2);
 VAR_4 = FUNC_1(VAR_2, VAR_5);
 VAR_3 = FUNC_0(FUNC_2(VAR_0), VAR_4);
 if (VAR_3 && VAR_3->dirty_bitmap)
  FUNC_4(VAR_3, VAR_4, VAR_5);
}
