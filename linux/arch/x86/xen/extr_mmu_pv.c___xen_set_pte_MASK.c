
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmu_update {int ptr; int val; } ;
typedef int pte_t ;
struct TYPE_2__ {int maddr; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmu_update*,int,int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_1__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static inline void FUNC_4(pte_t *VAR_2, pte_t VAR_3)
{
 if (!FUNC_3(VAR_2, VAR_3)) {







  struct mmu_update VAR_4;

  VAR_4.ptr = FUNC_2(VAR_2).maddr | VAR_1;
  VAR_4.val = FUNC_1(VAR_3);
  FUNC_0(&VAR_4, 1, ((void*)0), VAR_0);
 }
}
