
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int u_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static __inline u_int
FUNC_0(u_int VAR_4, vm_offset_t VAR_5)
{
 u_int VAR_6;

 VAR_6 = (VAR_4 & VAR_2) ^ (((u_int)VAR_5 & VAR_0) >>
     VAR_1);
 return (VAR_6 & VAR_3);
}
