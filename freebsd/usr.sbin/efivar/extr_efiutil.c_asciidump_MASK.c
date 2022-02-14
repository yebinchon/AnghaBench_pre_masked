
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;

void
FUNC_2(uint8_t *VAR_0, size_t VAR_1)
{
 size_t VAR_2;
 int VAR_3;

 VAR_3 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (FUNC_0(VAR_0[VAR_2])) {
   VAR_3++;
   if (VAR_3 > 80) {
    VAR_3 = 0;
    FUNC_1("\n");
   }
   FUNC_1("%c", VAR_0[VAR_2]);
  } else {
   VAR_3 +=3;
   if (VAR_3 > 80) {
    VAR_3 = 0;
    FUNC_1("\n");
   }
   FUNC_1("%%%02x", VAR_0[VAR_2]);
  }
 }
 FUNC_1("\n");
}
