
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(bool VAR_0, bool VAR_1, bool VAR_2)
{
 bool VAR_3;

 if (VAR_0 || VAR_1 || VAR_2) {
  VAR_3 = 0;
  FUNC_0("    decode     = ");
  if (VAR_0) {
   FUNC_0("ISA");
   VAR_3 = 1;
  }
  if (VAR_1) {
   FUNC_0("%sVGA", VAR_3 ? ", " : "");
   VAR_3 = 1;
  }
  if (VAR_2)
   FUNC_0("%ssubtractive", VAR_3 ? ", " : "");
  FUNC_0("\n");
 }
}
