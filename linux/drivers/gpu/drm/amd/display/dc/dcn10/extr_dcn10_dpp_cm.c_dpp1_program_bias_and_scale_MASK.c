
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp {int dummy; } ;
struct dcn10_dpp {int dummy; } ;
struct dc_bias_and_scale {int bias_blue; int scale_blue; int bias_green; int scale_green; int bias_red; int scale_red; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 struct dcn10_dpp* FUNC_1 (struct dpp*) ;

void FUNC_2(
 struct dpp *VAR_9,
 struct dc_bias_and_scale *VAR_10)
{
 struct dcn10_dpp *VAR_11 = FUNC_1(VAR_9);

 FUNC_0(VAR_8, 0,
  VAR_5, VAR_10->scale_red,
  VAR_2, VAR_10->bias_red);

 FUNC_0(VAR_7, 0,
  VAR_4, VAR_10->scale_green,
  VAR_1, VAR_10->bias_green);

 FUNC_0(VAR_6, 0,
  VAR_3, VAR_10->scale_blue,
  VAR_0, VAR_10->bias_blue);

}
