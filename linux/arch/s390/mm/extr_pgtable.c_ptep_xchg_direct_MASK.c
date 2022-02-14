
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pte_t ;
typedef int pgste_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct mm_struct*,unsigned long,int *,int) ;
 int FUNC_4 (struct mm_struct*,unsigned long,int *,int ,int ,int ) ;
 int FUNC_5 (struct mm_struct*,unsigned long,int *) ;

pte_t FUNC_6(struct mm_struct *VAR_1, unsigned long VAR_2,
         pte_t *VAR_3, pte_t VAR_4)
{
 pgste_t VAR_5;
 pte_t VAR_6;
 int VAR_7;

 FUNC_1();
 VAR_5 = FUNC_5(VAR_1, VAR_2, VAR_3);
 VAR_7 = !!(FUNC_0(VAR_5) & VAR_0);
 VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_7);
 VAR_6 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_5, VAR_6, VAR_4);
 FUNC_2();
 return VAR_6;
}
