
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int flags; } ;
struct mm_walk {int dummy; } ;
typedef int pte_t ;
typedef int pmd_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 struct page* FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(pte_t *VAR_5, unsigned long VAR_6,
          unsigned long VAR_7, unsigned long VAR_8,
          struct mm_walk *VAR_9)
{
 pmd_t *VAR_10 = (pmd_t *)VAR_5;
 unsigned long VAR_11, VAR_12;
 struct page *VAR_13 = FUNC_1(*VAR_10);







 if (FUNC_2(*VAR_10) & VAR_3 ||
     !(FUNC_2(*VAR_10) & VAR_4))
  return 0;

 VAR_11 = FUNC_2(*VAR_10) & VAR_0;
 VAR_12 = VAR_11 + VAR_1 - 1;
 FUNC_0(VAR_11, VAR_12);
 FUNC_3(VAR_2, &VAR_13->flags);
 return 0;
}
