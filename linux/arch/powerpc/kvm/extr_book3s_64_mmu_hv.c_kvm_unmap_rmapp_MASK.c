
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long* rmap; } ;
struct kvm_memory_slot {unsigned long base_gfn; TYPE_1__ arch; } ;
struct TYPE_5__ {scalar_t__ virt; } ;
struct TYPE_6__ {TYPE_2__ hpt; } ;
struct kvm {TYPE_3__ arch; } ;
typedef int __be64 ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct kvm*,unsigned long,struct kvm_memory_slot*,unsigned long*,unsigned long) ;
 int FUNC_4 (unsigned long*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (unsigned long*) ;

__attribute__((used)) static int FUNC_7(struct kvm *VAR_3, struct kvm_memory_slot *VAR_4,
      unsigned long VAR_5)
{
 unsigned long VAR_6;
 __be64 *VAR_7;
 unsigned long *VAR_8;

 VAR_8 = &VAR_4->arch.rmap[VAR_5 - VAR_4->base_gfn];
 for (;;) {
  FUNC_4(VAR_8);
  if (!(*VAR_8 & VAR_2)) {
   FUNC_6(VAR_8);
   break;
  }






  VAR_6 = *VAR_8 & VAR_1;
  VAR_7 = (__be64 *) (VAR_3->arch.hpt.virt + (VAR_6 << 4));
  if (!FUNC_5(VAR_7, VAR_0)) {

   FUNC_6(VAR_8);
   while (FUNC_1(VAR_7[0]) & VAR_0)
    FUNC_2();
   continue;
  }

  FUNC_3(VAR_3, VAR_6, VAR_4, VAR_8, VAR_5);
  FUNC_6(VAR_8);
  FUNC_0(VAR_7, FUNC_1(VAR_7[0]));
 }
 return 0;
}
