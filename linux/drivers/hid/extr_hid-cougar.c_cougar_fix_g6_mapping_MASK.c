
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__** VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_3[VAR_5][0]; VAR_5++) {
  if (VAR_3[VAR_5][0] == VAR_0) {
   VAR_3[VAR_5][1] =
    VAR_4 ? VAR_2 : VAR_1;
   FUNC_0("cougar: G6 mapped to %s\n",
    VAR_4 ? "space" : "F18");
   return;
  }
 }
 FUNC_1("cougar: no mappings defined for G6/spacebar");
}
