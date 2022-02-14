
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sysmmu_pte_t ;
typedef int sysmmu_iova_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static sysmmu_pte_t *FUNC_3(sysmmu_pte_t *VAR_0, sysmmu_iova_t VAR_1)
{
 return (sysmmu_pte_t *)FUNC_2(
    FUNC_1(VAR_0)) + FUNC_0(VAR_1);
}
