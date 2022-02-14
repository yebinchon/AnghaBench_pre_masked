
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long phys_addr_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 () ;

__attribute__((used)) static phys_addr_t FUNC_1(void)
{
 unsigned long VAR_3 = FUNC_0();

 if (!(VAR_3 & VAR_2))
  return 0;

 return (VAR_3 >> VAR_0)
  << VAR_1;
}
