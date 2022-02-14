
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double u_int8_t ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(const u_int8_t *VAR_0, int VAR_1)
{
 int VAR_2;

 FUNC_0("[ ");
 for (VAR_2 = 0; VAR_2 < VAR_1 && VAR_0[VAR_2]; VAR_2++)
  FUNC_0("%2.1fMbps ", VAR_0[VAR_2] * 0.500);
 FUNC_0("]");
}
