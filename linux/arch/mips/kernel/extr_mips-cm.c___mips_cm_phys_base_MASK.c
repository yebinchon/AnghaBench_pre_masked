
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef unsigned long phys_addr_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 () ;

phys_addr_t FUNC_2(void)
{
 u32 VAR_2 = FUNC_1();
 unsigned long VAR_3;


 if (!(VAR_2 & VAR_1))
  return 0;


 VAR_3 = FUNC_0();
 return (VAR_3 & VAR_0) << (36 - 32);
}
