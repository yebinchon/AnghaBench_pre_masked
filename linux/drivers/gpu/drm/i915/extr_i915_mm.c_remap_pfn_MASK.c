
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remap_pfn {int pfn; int prot; int mm; } ;
typedef int pte_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned long,int *,int ) ;

__attribute__((used)) static int FUNC_3(pte_t *VAR_0, unsigned long VAR_1, void *VAR_2)
{
 struct remap_pfn *VAR_3 = VAR_2;


 FUNC_2(VAR_3->mm, VAR_1, VAR_0, FUNC_1(FUNC_0(VAR_3->pfn, VAR_3->prot)));
 VAR_3->pfn++;

 return 0;
}
