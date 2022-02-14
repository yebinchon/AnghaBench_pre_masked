
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dpp {int dummy; } ;
struct dcn10_dpp {TYPE_1__* tf_mask; } ;
struct TYPE_2__ {scalar_t__ CM_BYPASS_EN; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 struct dcn10_dpp* FUNC_2 (struct dpp*) ;

void FUNC_3(struct dpp *VAR_10)
{
 struct dcn10_dpp *VAR_11 = FUNC_2(VAR_10);


 FUNC_0(VAR_6, 0,
   VAR_6, 0x8);


 FUNC_1(VAR_7, 0,
   VAR_5, 0,
   VAR_8, 0,
   VAR_9, 0);


 if (VAR_11->tf_mask->CM_BYPASS_EN)
  FUNC_0(VAR_2, 0, VAR_1, 1);






 FUNC_0(VAR_3, 0, VAR_4, 0);
}
