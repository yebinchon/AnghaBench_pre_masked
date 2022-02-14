
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memory_slot {int dummy; } ;
struct kvm {int dummy; } ;
typedef int pte_t ;
typedef int gpa_t ;
typedef int gfn_t ;


 int VAR_0 ;
 int * FUNC_0 (struct kvm*,int *,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct kvm *VAR_1, gfn_t VAR_2, gfn_t VAR_3,
        struct kvm_memory_slot *VAR_4, void *VAR_5)
{
 gpa_t VAR_6 = VAR_2 << VAR_0;
 pte_t *VAR_7 = FUNC_0(VAR_1, ((void*)0), VAR_6);

 if (!VAR_7)
  return 0;
 return FUNC_1(*VAR_7);
}
