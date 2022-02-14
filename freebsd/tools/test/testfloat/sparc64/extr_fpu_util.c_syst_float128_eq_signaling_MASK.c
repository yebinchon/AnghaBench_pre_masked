
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int float128 ;
typedef int flag ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;

flag FUNC_2(float128 VAR_1, float128 VAR_2)
{
 u_long VAR_3;

 FUNC_0(0, VAR_1);
 FUNC_0(4, VAR_2);
 FUNC_1(&VAR_0, 0x0UL);
 __asm __volatile("mov 0,%0; move %%fcc0,1,%0" : "=r" (VAR_3));
 return (VAR_3);
}
