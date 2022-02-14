
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dpll_data {int flags; unsigned int max_divider; unsigned int min_divider; } ;
struct clk_hw_omap {int hw; struct dpll_data* dpll_data; } ;
struct TYPE_2__ {long fint_min; long fint_max; long fint_band1_max; long fint_band2_min; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (char*,unsigned int) ;
 TYPE_1__* FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct clk_hw_omap *VAR_5, unsigned int VAR_6)
{
 struct dpll_data *VAR_7;
 long VAR_8, VAR_9, VAR_10;
 int VAR_11 = 0;

 VAR_7 = VAR_5->dpll_data;


 VAR_8 = FUNC_2(FUNC_1(&VAR_5->hw)) / VAR_6;

 if (VAR_7->flags & VAR_2) {
  VAR_9 = VAR_4;
  VAR_10 = VAR_3;
 } else {
  VAR_9 = FUNC_4()->fint_min;
  VAR_10 = FUNC_4()->fint_max;
 }

 if (!VAR_9 || !VAR_10) {
  FUNC_0(1, "No fint limits available!\n");
  return VAR_0;
 }

 if (VAR_8 < FUNC_4()->fint_min) {
  FUNC_3("rejecting n=%d due to Fint failure, lowering max_divider\n",
    VAR_6);
  VAR_7->max_divider = VAR_6;
  VAR_11 = VAR_1;
 } else if (VAR_8 > FUNC_4()->fint_max) {
  FUNC_3("rejecting n=%d due to Fint failure, boosting min_divider\n",
    VAR_6);
  VAR_7->min_divider = VAR_6;
  VAR_11 = VAR_0;
 } else if (VAR_8 > FUNC_4()->fint_band1_max &&
     VAR_8 < FUNC_4()->fint_band2_min) {
  FUNC_3("rejecting n=%d due to Fint failure\n", VAR_6);
  VAR_11 = VAR_0;
 }

 return VAR_11;
}
