
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;
typedef int pte_t ;
typedef int pmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct kvm*,int *,int,unsigned int) ;
 int FUNC_3 (struct kvm*,int *,int,int ,int *,unsigned int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int *,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct kvm *VAR_3, pmd_t *VAR_4, bool VAR_5,
      unsigned int VAR_6)
{
 unsigned long VAR_7;
 pmd_t *VAR_8 = VAR_4;

 for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7, ++VAR_8) {
  if (!FUNC_6(*VAR_8))
   continue;
  if (FUNC_5(*VAR_8)) {
   if (VAR_5) {
    FUNC_4(VAR_8);
   } else {
    FUNC_0(1);
    FUNC_3(VAR_3, (pte_t *)VAR_8,
      FUNC_8(*(pte_t *)VAR_8) << VAR_0,
      VAR_1, ((void*)0), VAR_6);
   }
  } else {
   pte_t *VAR_9;

   VAR_9 = FUNC_7(VAR_8, 0);
   FUNC_2(VAR_3, VAR_9, VAR_5, VAR_6);
   FUNC_4(VAR_8);
  }
 }
 FUNC_1(VAR_4);
}
