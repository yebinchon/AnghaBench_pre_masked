
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
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int*,int*,int) ;
 int* FUNC_4 (int ) ;
 int FUNC_5 (unsigned long*) ;

pgd_t *FUNC_6(struct mm_struct *VAR_4)
{
 pgd_t *VAR_5, *VAR_6;
 int VAR_7;

 VAR_5 = (pgd_t *) FUNC_0(VAR_1, 0);
 if (!VAR_5)
  return ((void*)0);
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  (*VAR_5) = 1;
  VAR_5++;
 }
 VAR_5 -= VAR_3;

 VAR_6 = FUNC_4(0);

 FUNC_3(VAR_5 + VAR_0, VAR_6 + VAR_0,
        (VAR_3 - VAR_0) * sizeof(pgd_t));

 FUNC_1((unsigned long)VAR_5,
       (unsigned long)VAR_5 +
       VAR_3 * sizeof(pgd_t));
 FUNC_2(FUNC_5((unsigned long *)VAR_5),
       VAR_2);

 return VAR_5;
}
