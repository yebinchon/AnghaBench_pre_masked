
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,char*) ;

__attribute__((used)) static void
FUNC_2(uint8_t VAR_0)
{
 uint8_t VAR_1;

 while (1) {

  VAR_1 = FUNC_1(VAR_0, "Select Audio Device Model",
      "1) Generic Audio Device\n"
      "x) Return to previous menu\n");

  switch (VAR_1) {
  case 0:
   break;
  case 1:
   FUNC_0(VAR_0 + 1);
   break;
  default:
   return;
  }
 }
}
