
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;
typedef int pte_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (int ,unsigned long,int *,int ,int ,int ) ;

pte_t FUNC_2(struct vm_area_struct *VAR_2, unsigned long VAR_3,
        pte_t *VAR_4)
{
 unsigned long VAR_5;






 VAR_5 = FUNC_1(VAR_2->vm_mm, VAR_3, VAR_4, VAR_1, VAR_0, 0);

 return FUNC_0(VAR_5);

}
