
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_1(void *VAR_2, void *VAR_3)
{

 if (VAR_1 == VAR_0) {
  unsigned long VAR_4 = (unsigned long) VAR_2;
  unsigned long VAR_5 = (unsigned long) VAR_3;

  VAR_4 &= ~7UL;
  VAR_5 = (VAR_5 + 7UL) & ~7UL;
  while (VAR_4 < VAR_5) {
   FUNC_0(VAR_4);
   VAR_4 += 32;
  }
 }
}
