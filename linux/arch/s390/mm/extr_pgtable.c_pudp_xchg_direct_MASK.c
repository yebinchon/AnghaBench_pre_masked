
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pud_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct mm_struct*,unsigned long,int *) ;

pud_t FUNC_3(struct mm_struct *VAR_0, unsigned long VAR_1,
         pud_t *VAR_2, pud_t VAR_3)
{
 pud_t VAR_4;

 FUNC_0();
 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2);
 *VAR_2 = VAR_3;
 FUNC_1();
 return VAR_4;
}
