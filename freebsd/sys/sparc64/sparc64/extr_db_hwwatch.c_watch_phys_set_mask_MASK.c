
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long vm_paddr_t ;
typedef unsigned long u_long ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,unsigned long) ;

int
FUNC_2(vm_paddr_t VAR_6, u_long VAR_7)
{
 u_long VAR_8;

 FUNC_1(VAR_0, VAR_1, VAR_6 & (((2UL << 38) - 1) << 3));
 VAR_8 = FUNC_0(0, VAR_2);
 VAR_8 = ((VAR_8 | VAR_5) & ~VAR_3) |
     (VAR_7 << VAR_4);
 FUNC_1(0, VAR_2, VAR_8);
 return (0);
}
