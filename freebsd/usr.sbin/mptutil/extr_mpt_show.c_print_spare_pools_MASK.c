
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ U8 ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(U8 VAR_0)
{
 int VAR_1;

 if (VAR_0 == 0) {
  FUNC_0("none");
  return;
 }
 for (VAR_1 = 0; VAR_0 != 0; VAR_1++) {
  if (VAR_0 & 1) {
   FUNC_0("%d", VAR_1);
   if (VAR_0 == 1)
    break;
   FUNC_0(", ");
  }
  VAR_0 >>= 1;
 }
}
