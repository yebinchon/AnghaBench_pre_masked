
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (char*,int ) ;

int
FUNC_4(void)
{
 int VAR_5;

 VAR_4 = FUNC_1(VAR_0) | FUNC_1(VAR_0 + 1) << 8;
 if ((VAR_4 & (FUNC_0(0) | FUNC_0(1) | FUNC_0(2) |
     FUNC_0(8) | FUNC_0(13))) != 0)
  return (VAR_1);
 if (VAR_2) {
  FUNC_2("ELCR Found.  ISA IRQs programmed as:\n");
  for (VAR_5 = 0; VAR_5 < 16; VAR_5++)
   FUNC_2(" %2d", VAR_5);
  FUNC_2("\n");
  for (VAR_5 = 0; VAR_5 < 16; VAR_5++)
   if (VAR_4 & FUNC_0(VAR_5))
    FUNC_2("  L");
   else
    FUNC_2("  E");
  FUNC_2("\n");
 }
 if (FUNC_3("elcr", 0))
  return (VAR_1);
 VAR_3 = 1;
 return (0);
}
