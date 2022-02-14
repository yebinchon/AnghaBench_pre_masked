
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(uint32_t *VAR_0, uint32_t VAR_1)
{
 const char *VAR_2;
 int VAR_3, VAR_4 = 8;

 while (VAR_1) {
  for (VAR_3 = 0; VAR_1 && VAR_3 < VAR_4; VAR_3++, VAR_0++, VAR_1 -= 4) {
   VAR_2 = VAR_3 ? " " : "";
   FUNC_1("%s%08x", VAR_2, FUNC_0(*VAR_0));
  }
  FUNC_1("\n");
 }
}
