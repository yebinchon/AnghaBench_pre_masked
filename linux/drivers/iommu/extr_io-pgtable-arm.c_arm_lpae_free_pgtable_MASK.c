
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_pgtable {int dummy; } ;
struct arm_lpae_io_pgtable {int pgd; } ;


 int FUNC_0 (struct arm_lpae_io_pgtable*) ;
 int FUNC_1 (struct arm_lpae_io_pgtable*,int ,int ) ;
 struct arm_lpae_io_pgtable* FUNC_2 (struct io_pgtable*) ;
 int FUNC_3 (struct arm_lpae_io_pgtable*) ;

__attribute__((used)) static void FUNC_4(struct io_pgtable *VAR_0)
{
 struct arm_lpae_io_pgtable *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1, FUNC_0(VAR_1), VAR_1->pgd);
 FUNC_3(VAR_1);
}
