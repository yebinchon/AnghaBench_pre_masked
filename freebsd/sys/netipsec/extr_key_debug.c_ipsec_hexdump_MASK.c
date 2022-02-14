
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* caddr_t ;


 int FUNC_0 (char*,...) ;

void
FUNC_1(caddr_t VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (VAR_2 != 0 && VAR_2 % 32 == 0) FUNC_0("\n");
  if (VAR_2 % 4 == 0) FUNC_0(" ");
  FUNC_0("%02x", (unsigned char)VAR_0[VAR_2]);
 }




 return;
}
