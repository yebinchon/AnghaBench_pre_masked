
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(char VAR_0)
{
 FUNC_0("\n\r");
 switch (VAR_0) {

 case '0':
  FUNC_0("OK");
  break;

 case '1':
  FUNC_0("CONNECT");
  break;

 case '2':
  FUNC_0("RING");
  break;

 case '3':
  FUNC_0("NO CARRIER");
  break;

 case '4':
  FUNC_0("ERROR in input");
  break;

 case '5':
  FUNC_0("CONNECT 1200");
  break;

 default:
  FUNC_0("Unknown Modem error: %c (0x%x)", VAR_0, VAR_0);
 }
 FUNC_0("\n\r");
 return;
}
