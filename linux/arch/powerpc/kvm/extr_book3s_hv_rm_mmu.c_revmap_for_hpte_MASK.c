
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * rmap; } ;
struct kvm_memory_slot {unsigned long base_gfn; TYPE_1__ arch; } ;
struct kvm {int dummy; } ;


 struct kvm_memory_slot* FUNC_0 (int ,unsigned long) ;
 unsigned long FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (struct kvm*) ;
 int FUNC_3 (unsigned long,unsigned long) ;
 unsigned long* FUNC_4 (int *) ;

__attribute__((used)) static unsigned long *FUNC_5(struct kvm *VAR_0, unsigned long VAR_1,
          unsigned long VAR_2,
          struct kvm_memory_slot **VAR_3,
          unsigned long *VAR_4)
{
 struct kvm_memory_slot *VAR_5;
 unsigned long *VAR_6;
 unsigned long VAR_7;

 VAR_7 = FUNC_1(VAR_2, FUNC_3(VAR_1, VAR_2));
 VAR_5 = FUNC_0(FUNC_2(VAR_0), VAR_7);
 if (VAR_3)
  *VAR_3 = VAR_5;
 if (VAR_4)
  *VAR_4 = VAR_7;
 if (!VAR_5)
  return ((void*)0);

 VAR_6 = FUNC_4(&VAR_5->arch.rmap[VAR_7 - VAR_5->base_gfn]);
 return VAR_6;
}
