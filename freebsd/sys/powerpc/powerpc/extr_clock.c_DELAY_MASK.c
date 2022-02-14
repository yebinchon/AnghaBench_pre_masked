
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ volatile u_quad_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ volatile FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_0 ;

void
FUNC_6(int VAR_1)
{
 volatile u_quad_t VAR_2;
 u_quad_t VAR_3;

 FUNC_0();
 VAR_2 = FUNC_3();
 VAR_3 = VAR_2 + FUNC_2((uint64_t)VAR_1 * 1000000, VAR_0);
 FUNC_5();
 while (VAR_2 < VAR_3)
  VAR_2 = FUNC_3();
 FUNC_4();
 FUNC_1();
}
