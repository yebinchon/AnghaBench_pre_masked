
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memory_slot {int flags; } ;
struct kvm {int dummy; } ;
typedef int pte_t ;
typedef int gpa_t ;
typedef int gfn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (struct kvm*,int *,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct kvm *VAR_3, gfn_t VAR_4, gfn_t VAR_5,
    struct kvm_memory_slot *VAR_6, void *VAR_7)
{
 gpa_t VAR_8 = VAR_4 << VAR_2;
 pte_t VAR_9 = *(pte_t *)VAR_7;
 pte_t *VAR_10 = FUNC_0(VAR_3, ((void*)0), VAR_8);
 pte_t VAR_11;

 if (!VAR_10)
  return 0;


 VAR_11 = *VAR_10;
 if (VAR_6->flags & VAR_0 && !FUNC_1(VAR_11))
  VAR_9 = FUNC_2(VAR_9);
 else if (VAR_6->flags & VAR_1)
  VAR_9 = FUNC_5(VAR_9);

 FUNC_7(VAR_10, VAR_9);


 if (!FUNC_4(VAR_11) || !FUNC_6(VAR_11))
  return 0;


 return !FUNC_4(VAR_9) ||
        !FUNC_6(VAR_9) ||
        FUNC_3(VAR_11) != FUNC_3(VAR_9) ||
        (FUNC_1(VAR_11) && !FUNC_1(VAR_9));
}
