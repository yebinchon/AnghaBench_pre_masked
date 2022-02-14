
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_start; } ;



const char *FUNC_0(struct vm_area_struct *VAR_0)
{
 return (VAR_0->vm_start == 0xffff0000) ? "[vectors]" : ((void*)0);
}
