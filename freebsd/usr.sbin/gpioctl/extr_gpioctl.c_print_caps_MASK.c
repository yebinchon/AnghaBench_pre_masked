
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(int VAR_0)
{
 int VAR_1, VAR_2;

 VAR_2 = 0;
 FUNC_1("<");
 for (VAR_1 = 0; VAR_1 < 32; VAR_1++) {
  if (VAR_0 & (1 << VAR_1)) {
   if (VAR_2)
    FUNC_1(",");
   FUNC_1("%s", FUNC_0(1 << VAR_1));
   VAR_2 = 1;
  }
 }
 FUNC_1(">");
}
