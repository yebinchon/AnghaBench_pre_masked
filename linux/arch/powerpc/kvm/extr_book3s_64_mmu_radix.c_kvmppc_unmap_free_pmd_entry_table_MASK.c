
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;
typedef int pte_t ;
typedef int pmd_t ;


 int FUNC_0 (struct kvm*,unsigned int) ;
 int FUNC_1 (struct kvm*,int *,int,unsigned int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct kvm *VAR_0, pmd_t *VAR_1,
     unsigned long VAR_2, unsigned int VAR_3)
{
 pte_t *VAR_4 = FUNC_3(VAR_1, 0);






 FUNC_2(VAR_1);
 FUNC_0(VAR_0, VAR_3);

 FUNC_1(VAR_0, VAR_4, 0, VAR_3);
}
