
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int pte_t ;
struct TYPE_3__ {int * pmdv; } ;
typedef TYPE_1__ pmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(struct mm_struct *VAR_4, pmd_t *VAR_5, struct page *VAR_6)
{
 unsigned long VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_6) << (VAR_0-4);
 for (VAR_8 = 0; VAR_8 < VAR_1/VAR_3; VAR_8++) {
  FUNC_2((pte_t *)&VAR_5->pmdv[VAR_8], FUNC_0(VAR_2 | VAR_7));
  VAR_7 += (VAR_3 * sizeof(pte_t) >> 4);
 }
}
