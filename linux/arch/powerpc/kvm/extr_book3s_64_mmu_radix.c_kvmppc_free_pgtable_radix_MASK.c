
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;
typedef int pud_t ;
typedef int pgd_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct kvm*,int *,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *,int ) ;

void FUNC_4(struct kvm *VAR_1, pgd_t *VAR_2, unsigned int VAR_3)
{
 unsigned long VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4, ++VAR_2) {
  pud_t *VAR_5;

  if (!FUNC_2(*VAR_2))
   continue;
  VAR_5 = FUNC_3(VAR_2, 0);
  FUNC_0(VAR_1, VAR_5, VAR_3);
  FUNC_1(VAR_2);
 }
}
