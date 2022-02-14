
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int int32_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_1, uint16_t *VAR_2, int VAR_3)
{
 FILE *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_1, "w");
 if (!VAR_4) {
  FUNC_0(1, "fopen");
 }


 for (VAR_5 = 0; VAR_5 < VAR_3 / 2; VAR_5++) {
  if (VAR_5 % VAR_0 == 0)
   FUNC_3(VAR_4, "%.4x: ", VAR_5);
  FUNC_3(VAR_4, "%.4x%s", (int32_t)(VAR_2[VAR_5]), VAR_5 % VAR_0 == (VAR_0 - 1) ? "\n" : " ");
 }
 FUNC_3(VAR_4, "\n");
 FUNC_1(VAR_4);
}
