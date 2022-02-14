
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_flags; } ;
struct fault {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;

__attribute__((used)) static bool FUNC_0(struct vm_area_struct *VAR_6, struct fault *VAR_7)
{
 unsigned long VAR_8 = 0;

 if (VAR_7->flags & VAR_0)
  VAR_8 |= VAR_3;

 if (VAR_7->flags & VAR_1)
  VAR_8 |= VAR_4;

 if (VAR_7->flags & VAR_2)
  VAR_8 |= VAR_5;

 return (VAR_8 & ~VAR_6->vm_flags) != 0;
}
