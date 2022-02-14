
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*,char*) ;

__attribute__((used)) static void
FUNC_3(uint8_t VAR_0)
{
 uint8_t VAR_1;

 while (1) {

  VAR_1 = FUNC_2(VAR_0, "Select Computer Mode",
      "1) This computer is Running the Device Side\n"
      "2) This computer is Running the Host Side\n"
      "x) Return to previous menu\n");

  switch (VAR_1) {
  case 0:
   break;
  case 1:
   FUNC_0(VAR_0 + 1);
   break;
  case 2:
   FUNC_1(VAR_0 + 1);
   break;
  default:
   return;
  }
 }
}
