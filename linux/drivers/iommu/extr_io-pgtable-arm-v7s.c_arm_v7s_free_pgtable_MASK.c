
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_pgtable {int dummy; } ;
struct arm_v7s_io_pgtable {int l2_tables; int * pgd; } ;
typedef int arm_v7s_iopte ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int,struct arm_v7s_io_pgtable*) ;
 struct arm_v7s_io_pgtable* FUNC_3 (struct io_pgtable*) ;
 int * FUNC_4 (int ,int,struct arm_v7s_io_pgtable*) ;
 int FUNC_5 (struct arm_v7s_io_pgtable*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct io_pgtable *VAR_0)
{
 struct arm_v7s_io_pgtable *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(1); VAR_2++) {
  arm_v7s_iopte VAR_3 = VAR_1->pgd[VAR_2];

  if (FUNC_1(VAR_3, 1))
   FUNC_2(FUNC_4(VAR_3, 1, VAR_1),
          2, VAR_1);
 }
 FUNC_2(VAR_1->pgd, 1, VAR_1);
 FUNC_6(VAR_1->l2_tables);
 FUNC_5(VAR_1);
}
