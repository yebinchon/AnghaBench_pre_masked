
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef struct spread_spectrum_data {scalar_t__ freq_range_khz; } const spread_spectrum_data ;
struct dce110_clk_src {scalar_t__ dvi_ss_params_cnt; scalar_t__ hdmi_ss_params_cnt; scalar_t__ lvds_ss_params_cnt; scalar_t__ dp_ss_params_cnt; struct spread_spectrum_data const* dp_ss_params; struct spread_spectrum_data const* lvds_ss_params; struct spread_spectrum_data const* hdmi_ss_params; struct spread_spectrum_data const* dvi_ss_params; } ;
typedef enum signal_type { ____Placeholder_signal_type } signal_type ;
__attribute__((used)) static const struct spread_spectrum_data *FUNC_0(
  struct dce110_clk_src *VAR_0,
  enum signal_type VAR_1,
  uint32_t VAR_2)
{

 uint32_t VAR_3;
 uint32_t VAR_4;
 struct spread_spectrum_data *VAR_5 = ((void*)0);
 struct spread_spectrum_data *VAR_6 = ((void*)0);

 switch (VAR_1) {
 case 132:
 case 133:
  VAR_5 = VAR_0->dvi_ss_params;
  VAR_3 = VAR_0->dvi_ss_params_cnt;
  break;

 case 130:
  VAR_5 = VAR_0->hdmi_ss_params;
  VAR_3 = VAR_0->hdmi_ss_params_cnt;
  break;

 case 129:
  VAR_5 = VAR_0->lvds_ss_params;
  VAR_3 = VAR_0->lvds_ss_params_cnt;
  break;

 case 135:
 case 134:
 case 131:
 case 128:
  VAR_5 = VAR_0->dp_ss_params;
  VAR_3 = VAR_0->dp_ss_params_cnt;
  break;

 default:
  VAR_5 = ((void*)0);
  VAR_3 = 0;
  break;
 }

 if (VAR_5 == ((void*)0))
  return VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4, ++VAR_5) {
  if (VAR_5->freq_range_khz >= VAR_2) {
   VAR_6 = VAR_5;
   break;
  }
 }

 return VAR_6;
}
