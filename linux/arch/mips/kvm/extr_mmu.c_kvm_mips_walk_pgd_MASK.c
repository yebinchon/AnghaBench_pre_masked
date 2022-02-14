
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_mmu_memory_cache {int dummy; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 void* FUNC_2 (struct kvm_mmu_memory_cache*) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_6 (int ) ;
 int * FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,int *,int *) ;
 int * FUNC_9 (int *,unsigned long) ;
 scalar_t__ FUNC_10 (int ) ;
 int * FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,int *,int *) ;

__attribute__((used)) static pte_t *FUNC_13(pgd_t *VAR_1, struct kvm_mmu_memory_cache *VAR_2,
    unsigned long VAR_3)
{
 pud_t *VAR_4;
 pmd_t *VAR_5;

 VAR_1 += FUNC_3(VAR_3);
 if (FUNC_4(*VAR_1)) {

  FUNC_0();
  return ((void*)0);
 }
 VAR_4 = FUNC_11(VAR_1, VAR_3);
 if (FUNC_10(*VAR_4)) {
  pmd_t *VAR_6;

  if (!VAR_2)
   return ((void*)0);
  VAR_6 = FUNC_2(VAR_2);
  FUNC_5((unsigned long)VAR_6,
    (unsigned long)VAR_0);
  FUNC_12(((void*)0), VAR_4, VAR_6);
 }
 VAR_5 = FUNC_7(VAR_4, VAR_3);
 if (FUNC_6(*VAR_5)) {
  pte_t *VAR_7;

  if (!VAR_2)
   return ((void*)0);
  VAR_7 = FUNC_2(VAR_2);
  FUNC_1(VAR_7);
  FUNC_8(((void*)0), VAR_5, VAR_7);
 }
 return FUNC_9(VAR_5, VAR_3);
}
