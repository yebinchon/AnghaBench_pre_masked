
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
typedef enum intel_display_power_domain { ____Placeholder_intel_display_power_domain } intel_display_power_domain ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_i915_private*,int) ;
 int FUNC_2 (int) ;
 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;
const char *
FUNC_3(struct drm_i915_private *VAR_9,
          enum intel_display_power_domain VAR_10)
{
 bool VAR_11 = FUNC_1(VAR_9, 12);

 switch (VAR_10) {
 case 171:
  return "DISPLAY_CORE";
 case 165:
  return "PIPE_A";
 case 163:
  return "PIPE_B";
 case 161:
  return "PIPE_C";
 case 159:
  return "PIPE_D";
 case 164:
  return "PIPE_A_PANEL_FITTER";
 case 162:
  return "PIPE_B_PANEL_FITTER";
 case 160:
  return "PIPE_C_PANEL_FITTER";
 case 158:
  return "PIPE_D_PANEL_FITTER";
 case 136:
  return "TRANSCODER_A";
 case 135:
  return "TRANSCODER_B";
 case 134:
  return "TRANSCODER_C";
 case 133:
  return "TRANSCODER_D";
 case 130:
  return "TRANSCODER_EDP";
 case 129:
  return "TRANSCODER_VDSC_PW2";
 case 132:
  return "TRANSCODER_DSI_A";
 case 131:
  return "TRANSCODER_DSI_C";
 case 155:
  return "PORT_DDI_A_LANES";
 case 153:
  return "PORT_DDI_B_LANES";
 case 151:
  return "PORT_DDI_C_LANES";
 case 149:
  FUNC_0(149 !=
        VAR_4);
  return VAR_11 ? "PORT_DDI_TC1_LANES" : "PORT_DDI_D_LANES";
 case 147:
  FUNC_0(147 !=
        VAR_6);
  return VAR_11 ? "PORT_DDI_TC2_LANES" : "PORT_DDI_E_LANES";
 case 145:
  FUNC_0(145 !=
        VAR_8);
  return VAR_11 ? "PORT_DDI_TC3_LANES" : "PORT_DDI_F_LANES";
 case 143:
  return "PORT_DDI_TC4_LANES";
 case 141:
  return "PORT_DDI_TC5_LANES";
 case 139:
  return "PORT_DDI_TC6_LANES";
 case 156:
  return "PORT_DDI_A_IO";
 case 154:
  return "PORT_DDI_B_IO";
 case 152:
  return "PORT_DDI_C_IO";
 case 150:
  FUNC_0(150 !=
        VAR_3);
  return VAR_11 ? "PORT_DDI_TC1_IO" : "PORT_DDI_D_IO";
 case 148:
  FUNC_0(148 !=
        VAR_5);
  return VAR_11 ? "PORT_DDI_TC2_IO" : "PORT_DDI_E_IO";
 case 146:
  FUNC_0(146 !=
        VAR_7);
  return VAR_11 ? "PORT_DDI_TC3_IO" : "PORT_DDI_F_IO";
 case 144:
  return "PORT_DDI_TC4_IO";
 case 142:
  return "PORT_DDI_TC5_IO";
 case 140:
  return "PORT_DDI_TC6_IO";
 case 138:
  return "PORT_DSI";
 case 157:
  return "PORT_CRT";
 case 137:
  return "PORT_OTHER";
 case 128:
  return "VGA";
 case 188:
  return "AUDIO";
 case 187:
  return "AUX_A";
 case 186:
  return "AUX_B";
 case 185:
  return "AUX_C";
 case 184:
  FUNC_0(184 != VAR_0);
  return VAR_11 ? "AUX_TC1" : "AUX_D";
 case 183:
  FUNC_0(183 != VAR_1);
  return VAR_11 ? "AUX_TC2" : "AUX_E";
 case 182:
  FUNC_0(182 != VAR_2);
  return VAR_11 ? "AUX_TC3" : "AUX_F";
 case 174:
  return "AUX_TC4";
 case 173:
  return "AUX_TC5";
 case 172:
  return "AUX_TC6";
 case 181:
  return "AUX_IO_A";
 case 180:
  return "AUX_TBT1";
 case 179:
  return "AUX_TBT2";
 case 178:
  return "AUX_TBT3";
 case 177:
  return "AUX_TBT4";
 case 176:
  return "AUX_TBT5";
 case 175:
  return "AUX_TBT6";
 case 169:
  return "GMBUS";
 case 167:
  return "INIT";
 case 166:
  return "MODESET";
 case 168:
  return "GT_IRQ";
 case 170:
  return "DPLL_DC_OFF";
 default:
  FUNC_2(VAR_10);
  return "?";
 }
}
