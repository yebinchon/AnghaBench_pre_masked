
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static bool FUNC_4(u16 VAR_0, u8 VAR_1)
{
 bool VAR_2 = 1;

 if (FUNC_2(VAR_0)) {

  switch (VAR_1) {
  case 0x0:
   FUNC_3("Data Array access error.\n");
   break;

  case 0x1:
   FUNC_3("UC error during a linefill from L2/NB.\n");
   break;

  case 0x2:
  case 0x11:
   FUNC_3("STQ access error.\n");
   break;

  case 0x3:
   FUNC_3("SCB access error.\n");
   break;

  case 0x10:
   FUNC_3("Tag error.\n");
   break;

  case 0x12:
   FUNC_3("LDQ access error.\n");
   break;

  default:
   VAR_2 = 0;
  }
 } else if (FUNC_0(VAR_0)) {

  if (!VAR_1)
   FUNC_3("System Read Data Error.\n");
  else
   FUNC_3(" Internal error condition type %d.\n", VAR_1);
 } else if (FUNC_1(VAR_0)) {
  if (VAR_1 <= 0x1f)
   FUNC_3("Hardware Assert.\n");
  else
   VAR_2 = 0;

 } else
  VAR_2 = 0;

 return VAR_2;
}
