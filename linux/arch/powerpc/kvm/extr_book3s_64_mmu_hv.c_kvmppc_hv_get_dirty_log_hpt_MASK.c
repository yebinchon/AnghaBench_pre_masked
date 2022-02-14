
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long* rmap; } ;
struct kvm_memory_slot {unsigned long npages; TYPE_1__ arch; } ;
struct kvm {int dummy; } ;


 int FUNC_0 (struct kvm*,unsigned long*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned long*,unsigned long,int) ;

long FUNC_4(struct kvm *VAR_0,
   struct kvm_memory_slot *VAR_1, unsigned long *VAR_2)
{
 unsigned long VAR_3;
 unsigned long *VAR_4;

 FUNC_1();
 VAR_4 = VAR_1->arch.rmap;
 for (VAR_3 = 0; VAR_3 < VAR_1->npages; ++VAR_3) {
  int VAR_5 = FUNC_0(VAR_0, VAR_4);





  if (VAR_5)
   FUNC_3(VAR_2, VAR_3, VAR_5);
  ++VAR_4;
 }
 FUNC_2();
 return 0;
}
