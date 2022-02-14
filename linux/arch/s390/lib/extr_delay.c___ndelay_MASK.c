
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;


 int FUNC_0 (unsigned long long) ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned long long,int) ;
 scalar_t__ FUNC_3 () ;

void FUNC_4(unsigned long long VAR_0)
{
 u64 VAR_1;

 VAR_0 <<= 9;
 FUNC_2(VAR_0, 125);
 VAR_1 = FUNC_3() + VAR_0;
 if (VAR_0 & ~0xfffUL)
  FUNC_0(VAR_0 >> 12);
 while (FUNC_3() < VAR_1)
  FUNC_1();
}
