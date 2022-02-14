
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_lradc_ts {scalar_t__ base; struct mxs_lradc* lradc; } ;
struct mxs_lradc {scalar_t__ soc; scalar_t__ touchscreen_wire; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mxs_lradc_ts *VAR_6)
{
 struct mxs_lradc *VAR_7 = VAR_6->lradc;


 if (VAR_7->soc == VAR_0) {
  FUNC_0(VAR_2,
         VAR_6->base + VAR_1 + VAR_4);

  if (VAR_7->touchscreen_wire == VAR_3)
   FUNC_0(VAR_2,
          VAR_6->base + VAR_1 + VAR_5);
 }
}
