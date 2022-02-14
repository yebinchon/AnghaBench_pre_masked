
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char*,...) ;

void
FUNC_1(uint8_t *VAR_0, size_t VAR_1)
{
 size_t VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (VAR_2 % 16 == 0) {
   if (VAR_2 != 0)
    FUNC_0("\n");
   FUNC_0("%04x: ", (int)VAR_2);
  }
  FUNC_0("%02x ", VAR_0[VAR_2]);
 }
 FUNC_0("\n");
}
