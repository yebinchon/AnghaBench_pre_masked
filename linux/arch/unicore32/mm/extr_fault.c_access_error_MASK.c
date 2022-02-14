
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned int vm_flags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

__attribute__((used)) static inline bool FUNC_0(unsigned int VAR_4, struct vm_area_struct *VAR_5)
{
 unsigned int VAR_6 = VAR_2 | VAR_3 | VAR_1;

 if (!(VAR_4 ^ 0x12))
  VAR_6 = VAR_3;
 if (VAR_4 & VAR_0)
  VAR_6 = VAR_1;

 return VAR_5->vm_flags & VAR_6 ? 0 : 1;
}
