
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp {int dummy; } ;
struct dcn20_dpp {int dummy; } ;
typedef enum dc_lut_mode { ____Placeholder_dc_lut_mode } dc_lut_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,int ,int) ;
 struct dcn20_dpp* FUNC_1 (struct dpp*) ;

__attribute__((used)) static void FUNC_2(
  struct dpp *VAR_4,
  enum dc_lut_mode VAR_5,
  bool VAR_6)
{
 struct dcn20_dpp *VAR_7 = FUNC_1(VAR_4);

 FUNC_0(VAR_2,
   VAR_1, VAR_5 == VAR_3 ? 0 : 1,
   VAR_0,
   VAR_6 == 1 ? 0:1);
}
