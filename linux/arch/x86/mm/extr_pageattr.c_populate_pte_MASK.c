
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpa_data {int pfn; } ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgprot_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct cpa_data *VAR_1,
    unsigned long VAR_2, unsigned long VAR_3,
    unsigned VAR_4, pmd_t *VAR_5, pgprot_t VAR_6)
{
 pte_t *VAR_7;

 VAR_7 = FUNC_2(VAR_5, VAR_2);

 VAR_6 = FUNC_1(VAR_6);

 while (VAR_4-- && VAR_2 < VAR_3) {
  FUNC_3(VAR_7, FUNC_0(VAR_1->pfn, VAR_6));

  VAR_2 += VAR_0;
  VAR_1->pfn++;
  VAR_7++;
 }
}
