
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_start; } ;


 scalar_t__ VAR_0 ;

const char *FUNC_0(struct vm_area_struct *VAR_1)
{
 return (VAR_1->vm_start == VAR_0) ? "[kuser]" : ((void*)0);
}
