
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp {int dummy; } ;
struct dcn20_dpp {int dummy; } ;
struct dc_bias_and_scale {int scale_blue; int scale_green; int scale_red; int bias_blue; int bias_green; int bias_red; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;
 struct dcn20_dpp* FUNC_1 (struct dpp*) ;

void FUNC_2(
  struct dpp *VAR_6,
  struct dc_bias_and_scale *VAR_7)
{
 struct dcn20_dpp *VAR_8 = FUNC_1(VAR_6);

 FUNC_0(VAR_2, VAR_2, VAR_7->bias_red);
 FUNC_0(VAR_1, VAR_1, VAR_7->bias_green);
 FUNC_0(VAR_0, VAR_0, VAR_7->bias_blue);
 FUNC_0(VAR_5, VAR_5, VAR_7->scale_red);
 FUNC_0(VAR_4, VAR_4, VAR_7->scale_green);
 FUNC_0(VAR_3, VAR_3, VAR_7->scale_blue);
}
