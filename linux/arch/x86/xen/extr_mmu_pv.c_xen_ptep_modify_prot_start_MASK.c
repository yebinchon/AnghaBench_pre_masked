
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_mm; } ;
typedef int pte_t ;


 int FUNC_0 (int ,unsigned long,int *,int ) ;

pte_t FUNC_1(struct vm_area_struct *VAR_0,
     unsigned long VAR_1, pte_t *VAR_2)
{

 FUNC_0(VAR_0->vm_mm, VAR_1, VAR_2, *VAR_2);
 return *VAR_2;
}
