
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, size_t VAR_1, const char *VAR_2)
{
 unsigned char *VAR_3;
 u_int VAR_4;

 if (VAR_1 == 0)
  return;
 VAR_3 = VAR_0;
 FUNC_0("%02x", VAR_3[0]);
 for (VAR_4 = 1; VAR_4 < VAR_1; VAR_4++)
  FUNC_0("%s%02x", VAR_2, VAR_3[VAR_4]);
}
