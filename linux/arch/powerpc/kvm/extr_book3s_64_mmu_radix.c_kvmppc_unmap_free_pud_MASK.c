
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int mm; } ;
typedef int pud_t ;
typedef int pmd_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct kvm*,int *,int,unsigned int) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct kvm *VAR_1, pud_t *VAR_2,
      unsigned int VAR_3)
{
 unsigned long VAR_4;
 pud_t *VAR_5 = VAR_2;

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4, ++VAR_5) {
  if (!FUNC_5(*VAR_5))
   continue;
  if (FUNC_4(*VAR_5)) {
   FUNC_2(VAR_5);
  } else {
   pmd_t *VAR_6;

   VAR_6 = FUNC_1(VAR_5, 0);
   FUNC_0(VAR_1, VAR_6, 1, VAR_3);
   FUNC_2(VAR_5);
  }
 }
 FUNC_3(VAR_1->mm, VAR_2);
}
