
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef scalar_t__ u_char ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_2(u_char *VAR_0, int VAR_1)
{
 u_int VAR_2, VAR_3 = *VAR_0++;

 --VAR_1;
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  if (VAR_1 < 5) {
   FUNC_0("\tWrong length for long link MFC tuple\n");
   return;
  }
  FUNC_0("\tFunction %d: %s memory, address 0x%x\n",
         VAR_2, (*VAR_0 ? "common" : "attribute"), FUNC_1(VAR_0 + 1));
  VAR_0 += 5;
  VAR_1 -= 5;
 }
}
