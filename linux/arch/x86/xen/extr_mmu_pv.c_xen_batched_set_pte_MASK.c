
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmu_update {int ptr; int val; } ;
typedef int pte_t ;
struct TYPE_2__ {int maddr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 TYPE_1__ FUNC_2 (int *) ;
 int FUNC_3 (struct mmu_update*) ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static bool FUNC_6(pte_t *VAR_2, pte_t VAR_3)
{
 struct mmu_update VAR_4;

 if (FUNC_0() != VAR_1)
  return 0;

 FUNC_4();

 VAR_4.ptr = FUNC_2(VAR_2).maddr | VAR_0;
 VAR_4.val = FUNC_1(VAR_3);
 FUNC_3(&VAR_4);

 FUNC_5(VAR_1);

 return 1;
}
