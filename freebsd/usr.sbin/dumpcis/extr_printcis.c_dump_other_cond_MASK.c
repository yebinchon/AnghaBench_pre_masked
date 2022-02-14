
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (char*) ;

__attribute__((used)) static void
FUNC_1(u_char *VAR_0, int VAR_1)
{
 if (VAR_0[0] && VAR_1 > 0) {
  FUNC_0("\t");
  if (VAR_0[0] & 1)
   FUNC_0("(MWAIT)");
  if (VAR_0[0] & 2)
   FUNC_0(" (3V card)");
  if (VAR_0[0] & 0x80)
   FUNC_0(" (Extension bytes follow)");
  FUNC_0("\n");
 }
}
