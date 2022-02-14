
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmu_update {int val; int ptr; } ;
typedef int pud_t ;
struct TYPE_2__ {int maddr; } ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mmu_update*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(pud_t *VAR_1, pud_t VAR_2)
{
 struct mmu_update VAR_3;

 FUNC_1();

 FUNC_5();


 VAR_3.ptr = FUNC_0(VAR_1).maddr;
 VAR_3.val = FUNC_3(VAR_2);
 FUNC_4(&VAR_3);

 FUNC_6(VAR_0);

 FUNC_2();
}
