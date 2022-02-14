
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (struct vm_area_struct*,unsigned long,unsigned long,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline int
FUNC_2(unsigned long VAR_7, struct vm_area_struct *VAR_8)
{

 bool VAR_9 = 0;






 if (VAR_7 & VAR_4)
  return 1;






 if (!FUNC_0(VAR_8, (VAR_7 & VAR_6),
           (VAR_7 & VAR_3), VAR_9))
  return 1;

 if (VAR_7 & VAR_6) {

  if (FUNC_1(!(VAR_8->vm_flags & VAR_2)))
   return 1;
  return 0;
 }


 if (FUNC_1(VAR_7 & VAR_5))
  return 1;


 if (FUNC_1(!(VAR_8->vm_flags & (VAR_1 | VAR_0 | VAR_2))))
  return 1;

 return 0;
}
