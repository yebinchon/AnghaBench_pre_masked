
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 unsigned int VAR_0 ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_1)
{
 if (VAR_1 > VAR_0) {
  while (VAR_0 < VAR_1) {
   if (FUNC_0())
    return;
  }
 } else if (VAR_1 < VAR_0) {
  while (VAR_0 > VAR_1)
   FUNC_1();
 }
}
