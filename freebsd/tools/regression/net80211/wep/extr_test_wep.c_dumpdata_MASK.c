
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_0, const void *VAR_1, size_t VAR_2)
{
 int VAR_3;

 FUNC_0("%s: 0x%p len %u", VAR_0, VAR_1, VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if ((VAR_3 % 16) == 0)
   FUNC_0("\n%03d:", VAR_3);
  FUNC_0(" %02x", ((const u_int8_t *)VAR_1)[VAR_3]);
 }
 FUNC_0("\n");
}
