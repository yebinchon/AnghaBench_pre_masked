
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(u64 VAR_2, u64 VAR_3)
{
 u64 VAR_4, VAR_5, VAR_6;

 VAR_6 = FUNC_1(VAR_1);
 VAR_5 = 4 << FUNC_0(VAR_6,
          VAR_0);
 VAR_4 = VAR_2 & ~(VAR_5 - 1);
 do {





  asm volatile("dc civac, %0" : : "r" (VAR_4) : "memory");
 } while (VAR_4 += VAR_5, VAR_4 < VAR_3);
}
