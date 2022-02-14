
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * sysmmu_pte_t ;
typedef int sysmmu_iova_t ;
struct sysmmu_fault_info {int name; } ;
struct sysmmu_drvdata {int sysmmu; int pgtable; int master; } ;


 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int **) ;
 int ** FUNC_4 (int **,int ) ;
 int FUNC_5 (int ) ;
 int ** FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct sysmmu_drvdata *VAR_0,
       const struct sysmmu_fault_info *VAR_1,
       sysmmu_iova_t VAR_2)
{
 sysmmu_pte_t *VAR_3;

 FUNC_1(VAR_0->sysmmu, "%s: %s FAULT occurred at %#x\n",
  FUNC_2(VAR_0->master), VAR_1->name, VAR_2);
 FUNC_0(VAR_0->sysmmu, "Page table base: %pa\n", &VAR_0->pgtable);
 VAR_3 = FUNC_6(FUNC_5(VAR_0->pgtable), VAR_2);
 FUNC_0(VAR_0->sysmmu, "\tLv1 entry: %#x\n", *VAR_3);
 if (FUNC_3(VAR_3)) {
  VAR_3 = FUNC_4(VAR_3, VAR_2);
  FUNC_0(VAR_0->sysmmu, "\t Lv2 entry: %#x\n", *VAR_3);
 }
}
