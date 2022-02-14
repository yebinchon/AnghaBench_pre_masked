
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memory_slot {unsigned long npages; } ;
struct kvm {int dummy; } ;


 int FUNC_0 (struct kvm*,struct kvm_memory_slot*,unsigned long) ;
 int FUNC_1 (unsigned long*,unsigned long,int) ;

long FUNC_2(struct kvm *VAR_0,
   struct kvm_memory_slot *VAR_1, unsigned long *VAR_2)
{
 unsigned long VAR_3, VAR_4;
 int VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_1->npages; VAR_3 = VAR_4) {
  VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_3);
  VAR_4 = VAR_3 + 1;
  if (VAR_5) {
   FUNC_1(VAR_2, VAR_3, VAR_5);
   VAR_4 = VAR_3 + VAR_5;
  }
 }
 return 0;
}
