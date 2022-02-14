
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int * vm_mm; } ;


 int FUNC_0 (int *,unsigned long,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

void FUNC_2(struct vm_area_struct *VAR_1, unsigned long VAR_2)
{
 FUNC_0(VAR_1 ? VAR_1->vm_mm : ((void*)0), VAR_2,
          FUNC_1(VAR_0), 0);
}
