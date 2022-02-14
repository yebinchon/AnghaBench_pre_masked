
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct mm_struct {int dummy; } ;
typedef int pte_t ;
typedef int pgste_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mm_struct*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ,struct mm_struct*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct mm_struct*,unsigned long,int *,int) ;
 int FUNC_6 (struct mm_struct*,unsigned long,int *) ;

pte_t FUNC_7(struct vm_area_struct *VAR_1, unsigned long VAR_2,
        pte_t *VAR_3)
{
 pgste_t VAR_4;
 pte_t VAR_5;
 int VAR_6;
 struct mm_struct *VAR_7 = VAR_1->vm_mm;

 FUNC_4();
 VAR_4 = FUNC_6(VAR_7, VAR_2, VAR_3);
 VAR_6 = !!(FUNC_3(VAR_4) & VAR_0);
 VAR_5 = FUNC_5(VAR_7, VAR_2, VAR_3, VAR_6);
 if (FUNC_0(VAR_7)) {
  VAR_4 = FUNC_2(VAR_5, VAR_4, VAR_7);
  FUNC_1(VAR_3, VAR_4);
 }
 return VAR_5;
}
