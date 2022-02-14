
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memory_slot {int dummy; } ;
struct kvm {int dummy; } ;


 long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 (struct kvm_memory_slot*,unsigned long) ;
 int FUNC_1 (struct kvm*) ;
 struct kvm_memory_slot* FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static long FUNC_3(struct kvm *VAR_5, unsigned long VAR_6,
  unsigned long *VAR_7)
{
 unsigned long VAR_8 = VAR_6 >> VAR_2;
 struct kvm_memory_slot *VAR_9;

 VAR_9 = FUNC_2(FUNC_1(VAR_5), VAR_8);
 if (!VAR_9)
  return -VAR_0;

 *VAR_7 = FUNC_0(VAR_9, VAR_8) |
  (VAR_6 & ~(VAR_1 | VAR_3 | VAR_4));

 return 0;
}
