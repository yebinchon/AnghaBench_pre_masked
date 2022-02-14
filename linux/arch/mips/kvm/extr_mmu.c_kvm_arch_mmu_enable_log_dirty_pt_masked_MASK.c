
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memory_slot {scalar_t__ base_gfn; } ;
struct kvm {int dummy; } ;
typedef scalar_t__ gfn_t ;


 scalar_t__ FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 (struct kvm*,scalar_t__,scalar_t__) ;

void FUNC_3(struct kvm *VAR_0,
  struct kvm_memory_slot *VAR_1,
  gfn_t VAR_2, unsigned long VAR_3)
{
 gfn_t VAR_4 = VAR_1->base_gfn + VAR_2;
 gfn_t VAR_5 = VAR_4 + FUNC_0(VAR_3);
 gfn_t VAR_6 = VAR_4 + FUNC_1(VAR_3);

 FUNC_2(VAR_0, VAR_5, VAR_6);
}
