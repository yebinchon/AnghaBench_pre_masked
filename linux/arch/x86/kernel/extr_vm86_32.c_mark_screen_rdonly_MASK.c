
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct mm_struct {int mmap_sem; } ;
typedef int spinlock_t ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;
typedef int p4d_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct vm_area_struct* FUNC_1 (struct mm_struct*,int) ;
 int FUNC_2 (struct mm_struct*,int,int,int ,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (struct mm_struct*,int) ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int ) ;
 int * FUNC_10 (struct mm_struct*,int *,int,int **) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int *) ;
 int * FUNC_15 (int *,int) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (struct vm_area_struct*,int *,int) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static void FUNC_19(struct mm_struct *VAR_2)
{
 struct vm_area_struct *VAR_3;
 spinlock_t *VAR_4;
 pgd_t *VAR_5;
 p4d_t *VAR_6;
 pud_t *VAR_7;
 pmd_t *VAR_8;
 pte_t *VAR_9;
 int VAR_10;

 FUNC_0(&VAR_2->mmap_sem);
 VAR_5 = FUNC_6(VAR_2, 0xA0000);
 if (FUNC_5(VAR_5))
  goto out;
 VAR_6 = FUNC_4(VAR_5, 0xA0000);
 if (FUNC_3(VAR_6))
  goto out;
 VAR_7 = FUNC_15(VAR_6, 0xA0000);
 if (FUNC_14(VAR_7))
  goto out;
 VAR_8 = FUNC_8(VAR_7, 0xA0000);

 if (FUNC_9(*VAR_8)) {
  VAR_3 = FUNC_1(VAR_2, 0xA0000);
  FUNC_17(VAR_3, VAR_8, 0xA0000);
 }
 if (FUNC_7(VAR_8))
  goto out;
 VAR_9 = FUNC_10(VAR_2, VAR_8, 0xA0000, &VAR_4);
 for (VAR_10 = 0; VAR_10 < 32; VAR_10++) {
  if (FUNC_11(*VAR_9))
   FUNC_16(VAR_9, FUNC_13(*VAR_9));
  VAR_9++;
 }
 FUNC_12(VAR_9, VAR_4);
out:
 FUNC_18(&VAR_2->mmap_sem);
 FUNC_2(VAR_2, 0xA0000, 0xA0000 + 32*VAR_1, VAR_0, 0);
}
