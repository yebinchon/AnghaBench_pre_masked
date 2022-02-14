
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static bool FUNC_2(bool VAR_4, bool VAR_5,
    struct vm_area_struct *VAR_6)
{
 if (VAR_5) {
  return !(VAR_6->vm_flags & VAR_1) &&
   (FUNC_0(VAR_0) ||
    !(VAR_6->vm_flags & (VAR_2 | VAR_3)));
 }

 if (VAR_4) {
  if (FUNC_1(!(VAR_6->vm_flags & VAR_3)))
   return 1;
  return 0;
 }

 if (FUNC_1(!(VAR_6->vm_flags & (VAR_2 | VAR_1 | VAR_3))))
  return 1;






 return 0;
}
