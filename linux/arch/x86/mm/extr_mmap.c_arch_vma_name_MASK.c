
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;


 int VAR_0 ;

const char *FUNC_0(struct vm_area_struct *VAR_1)
{
 if (VAR_1->vm_flags & VAR_0)
  return "[mpx]";
 return ((void*)0);
}
