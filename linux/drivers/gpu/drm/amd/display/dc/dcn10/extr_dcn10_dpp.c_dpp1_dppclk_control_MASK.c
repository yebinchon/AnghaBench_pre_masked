
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dpp {int dummy; } ;
struct dcn10_dpp {TYPE_1__* tf_mask; } ;
struct TYPE_2__ {scalar_t__ DPPCLK_RATE_CONTROL; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int,int ,int) ;
 struct dcn10_dpp* FUNC_2 (struct dpp*) ;

void FUNC_3(
  struct dpp *VAR_3,
  bool VAR_4,
  bool VAR_5)
{
 struct dcn10_dpp *VAR_6 = FUNC_2(VAR_3);

 if (VAR_5) {
  if (VAR_6->tf_mask->DPPCLK_RATE_CONTROL)
   FUNC_1(VAR_2,
    VAR_0, VAR_4,
    VAR_1, 1);
  else
   FUNC_0(VAR_2, VAR_1, 1);
 } else
  FUNC_0(VAR_2, VAR_1, 0);
}
