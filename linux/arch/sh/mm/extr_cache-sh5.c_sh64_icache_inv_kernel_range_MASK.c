
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long long FUNC_0 (unsigned long long) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_1, unsigned long VAR_2)
{



 unsigned long long VAR_3, VAR_4, VAR_5;
 VAR_5 = (unsigned long long)(signed long long)(signed long) VAR_1;
 VAR_4 = FUNC_0(VAR_5);
 VAR_3 = (unsigned long long) (signed long long) (signed long) VAR_2;

 while (VAR_4 <= VAR_3) {
  __asm__ __volatile__ ("icbi %0, 0" : : "r" (VAR_4));
  VAR_4 += VAR_0;
 }
}
