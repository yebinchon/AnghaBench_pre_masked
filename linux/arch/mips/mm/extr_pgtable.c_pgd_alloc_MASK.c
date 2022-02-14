
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pgd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (unsigned long) ;
 int * FUNC_3 (int *,unsigned long) ;

pgd_t *FUNC_4(struct mm_struct *VAR_5)
{
 pgd_t *VAR_6, *VAR_7;

 VAR_6 = (pgd_t *) FUNC_0(VAR_0, VAR_1);
 if (VAR_6) {
  VAR_7 = FUNC_3(&VAR_4, 0UL);
  FUNC_2((unsigned long)VAR_6);
  FUNC_1(VAR_6 + VAR_3, VAR_7 + VAR_3,
         (VAR_2 - VAR_3) * sizeof(pgd_t));
 }

 return VAR_6;
}
