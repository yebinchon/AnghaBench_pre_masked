
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pmd_t ;


 int FUNC_0 (struct mm_struct*,unsigned long,int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

pmd_t FUNC_3(struct mm_struct *VAR_0, unsigned long VAR_1,
       pmd_t *VAR_2, pmd_t VAR_3)
{
 pmd_t VAR_4;

 FUNC_1();
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 *VAR_2 = VAR_3;
 FUNC_2();
 return VAR_4;
}
