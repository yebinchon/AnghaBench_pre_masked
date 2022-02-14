
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dce110_clk_src {int lvds_ss_params_cnt; int lvds_ss_params; int dvi_ss_params_cnt; int dvi_ss_params; int hdmi_ss_params_cnt; int hdmi_ss_params; int dp_ss_params_cnt; int dp_ss_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dce110_clk_src*,int ,int *,int *) ;

__attribute__((used)) static void FUNC_1(
 struct dce110_clk_src *VAR_4)
{
 FUNC_0(
  VAR_4,
  VAR_0,
  &VAR_4->dp_ss_params,
  &VAR_4->dp_ss_params_cnt);
 FUNC_0(
  VAR_4,
  VAR_2,
  &VAR_4->hdmi_ss_params,
  &VAR_4->hdmi_ss_params_cnt);
 FUNC_0(
  VAR_4,
  VAR_1,
  &VAR_4->dvi_ss_params,
  &VAR_4->dvi_ss_params_cnt);
 FUNC_0(
  VAR_4,
  VAR_3,
  &VAR_4->lvds_ss_params,
  &VAR_4->lvds_ss_params_cnt);
}
