
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_dpll_hw_state {int mg_clktop2_hsclkctl; int mg_clktop2_coreclkctl1; int mg_refclkin_ctl; } ;


 unsigned int FUNC_0 (int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static bool FUNC_7(int VAR_4, bool VAR_5, bool VAR_6,
         u32 *VAR_7,
         struct intel_dpll_hw_state *VAR_8)
{
 u32 VAR_9, VAR_10;
 int VAR_11[] = {7, 5, 3, 2};
 unsigned int VAR_12;
 int VAR_13;

 VAR_9 = VAR_5 ? 8100000 : VAR_6 ? 8000000 : 7992000;
 VAR_10 = VAR_5 ? 8100000 : 10000000;

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_11); VAR_12++) {
  int VAR_14 = VAR_11[VAR_12];

  for (VAR_13 = 10; VAR_13 > 0; VAR_13--) {
   int VAR_15 = VAR_14 * VAR_13 * VAR_4 * 5;
   int VAR_16, VAR_17, VAR_18;
   u32 VAR_19;

   if (VAR_15 < VAR_9 || VAR_15 > VAR_10)
    continue;

   if (VAR_13 >= 2) {
    VAR_16 = VAR_5 ? 10 : 5;
    VAR_17 = 2;
   } else {
    VAR_16 = 5;
    VAR_17 = 0;
   }
   VAR_18 = VAR_5 ? 0 : 1;

   switch (VAR_14) {
   default:
    FUNC_6(VAR_14);

   case 2:
    VAR_19 = VAR_0;
    break;
   case 3:
    VAR_19 = VAR_1;
    break;
   case 5:
    VAR_19 = VAR_2;
    break;
   case 7:
    VAR_19 = VAR_3;
    break;
   }

   *VAR_7 = VAR_15;

   VAR_8->mg_refclkin_ctl = FUNC_5(1);

   VAR_8->mg_clktop2_coreclkctl1 =
    FUNC_1(VAR_16);

   VAR_8->mg_clktop2_hsclkctl =
    FUNC_4(VAR_17) |
    FUNC_2(VAR_18) |
    VAR_19 |
    FUNC_3(VAR_13);

   return 1;
  }
 }

 return 0;
}
