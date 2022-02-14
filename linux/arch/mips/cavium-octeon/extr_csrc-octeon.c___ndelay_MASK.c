
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 () ;

void FUNC_1(unsigned long VAR_1)
{
 u64 VAR_2, VAR_3, VAR_4;

 VAR_2 = FUNC_0();

 VAR_4 = ((VAR_1 * VAR_0) >> 16);
 VAR_3 = VAR_2 + VAR_4;

 while (VAR_3 > VAR_2)
  VAR_2 = FUNC_0();
}
