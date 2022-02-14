
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int lru; } ;
typedef int pgd_t ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 struct page* FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(pgd_t *VAR_1)
{
 struct page *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(&VAR_2->lru, &VAR_0);
}
