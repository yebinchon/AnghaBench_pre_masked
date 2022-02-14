
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pipe_ctx {TYPE_3__* stream; } ;
struct integrated_info {int gpu_cap_info; scalar_t__ dp0_ext_hdmi_slv_addr; int dp0_ext_hdmi_6g_reg_num; scalar_t__ dp1_ext_hdmi_slv_addr; int dp1_ext_hdmi_6g_reg_num; scalar_t__ dp2_ext_hdmi_slv_addr; int dp2_ext_hdmi_6g_reg_num; scalar_t__ dp3_ext_hdmi_slv_addr; int dp3_ext_hdmi_6g_reg_num; int dp3_ext_hdmi_6g_reg_settings; int dp3_ext_hdmi_reg_settings; int dp2_ext_hdmi_6g_reg_settings; int dp2_ext_hdmi_reg_settings; int dp1_ext_hdmi_6g_reg_settings; int dp1_ext_hdmi_reg_settings; int dp0_ext_hdmi_6g_reg_settings; int dp0_ext_hdmi_reg_settings; } ;
struct ext_hdmi_settings {scalar_t__ slv_addr; int reg_num; int reg_num_6g; TYPE_4__* reg_settings_6g; TYPE_4__* reg_settings; } ;
typedef enum engine_id { ____Placeholder_engine_id } engine_id ;
struct TYPE_8__ {int i2c_reg_index; } ;
struct TYPE_7__ {TYPE_2__* ctx; } ;
struct TYPE_6__ {TYPE_1__* dc_bios; } ;
struct TYPE_5__ {struct integrated_info* integrated_info; } ;






 int FUNC_0 (TYPE_4__*,int ,int) ;

__attribute__((used)) static bool FUNC_1(struct pipe_ctx *VAR_0,
  enum engine_id VAR_1,
  struct ext_hdmi_settings *VAR_2)
{
 bool VAR_3 = 0;
 int VAR_4 = 0;
 struct integrated_info *VAR_5 =
   VAR_0->stream->ctx->dc_bios->integrated_info;

 if (VAR_5 == ((void*)0))
  return 0;
 if (VAR_5->gpu_cap_info & 0x20) {
  switch (VAR_1) {
  case 131:
   VAR_2->slv_addr = VAR_5->dp0_ext_hdmi_slv_addr;
   VAR_2->reg_num = VAR_5->dp0_ext_hdmi_6g_reg_num;
   VAR_2->reg_num_6g = VAR_5->dp0_ext_hdmi_6g_reg_num;
   FUNC_0(VAR_2->reg_settings,
     VAR_5->dp0_ext_hdmi_reg_settings,
     sizeof(VAR_5->dp0_ext_hdmi_reg_settings));
   FUNC_0(VAR_2->reg_settings_6g,
     VAR_5->dp0_ext_hdmi_6g_reg_settings,
     sizeof(VAR_5->dp0_ext_hdmi_6g_reg_settings));
   VAR_3 = 1;
   break;
  case 130:
   VAR_2->slv_addr = VAR_5->dp1_ext_hdmi_slv_addr;
   VAR_2->reg_num = VAR_5->dp1_ext_hdmi_6g_reg_num;
   VAR_2->reg_num_6g = VAR_5->dp1_ext_hdmi_6g_reg_num;
   FUNC_0(VAR_2->reg_settings,
     VAR_5->dp1_ext_hdmi_reg_settings,
     sizeof(VAR_5->dp1_ext_hdmi_reg_settings));
   FUNC_0(VAR_2->reg_settings_6g,
     VAR_5->dp1_ext_hdmi_6g_reg_settings,
     sizeof(VAR_5->dp1_ext_hdmi_6g_reg_settings));
   VAR_3 = 1;
   break;
  case 129:
   VAR_2->slv_addr = VAR_5->dp2_ext_hdmi_slv_addr;
   VAR_2->reg_num = VAR_5->dp2_ext_hdmi_6g_reg_num;
   VAR_2->reg_num_6g = VAR_5->dp2_ext_hdmi_6g_reg_num;
   FUNC_0(VAR_2->reg_settings,
     VAR_5->dp2_ext_hdmi_reg_settings,
     sizeof(VAR_5->dp2_ext_hdmi_reg_settings));
   FUNC_0(VAR_2->reg_settings_6g,
     VAR_5->dp2_ext_hdmi_6g_reg_settings,
     sizeof(VAR_5->dp2_ext_hdmi_6g_reg_settings));
   VAR_3 = 1;
   break;
  case 128:
   VAR_2->slv_addr = VAR_5->dp3_ext_hdmi_slv_addr;
   VAR_2->reg_num = VAR_5->dp3_ext_hdmi_6g_reg_num;
   VAR_2->reg_num_6g = VAR_5->dp3_ext_hdmi_6g_reg_num;
   FUNC_0(VAR_2->reg_settings,
     VAR_5->dp3_ext_hdmi_reg_settings,
     sizeof(VAR_5->dp3_ext_hdmi_reg_settings));
   FUNC_0(VAR_2->reg_settings_6g,
     VAR_5->dp3_ext_hdmi_6g_reg_settings,
     sizeof(VAR_5->dp3_ext_hdmi_6g_reg_settings));
   VAR_3 = 1;
   break;
  default:
   break;
  }

  if (VAR_3 == 1) {

   if (VAR_2->slv_addr == 0)
    return 0;
   if (VAR_2->reg_num > 9)
    return 0;
   if (VAR_2->reg_num_6g > 3)
    return 0;

   for (VAR_4 = 0; VAR_4 < VAR_2->reg_num; VAR_4++) {
    if (VAR_2->reg_settings[VAR_4].i2c_reg_index > 0x20)
     return 0;
   }

   for (VAR_4 = 0; VAR_4 < VAR_2->reg_num_6g; VAR_4++) {
    if (VAR_2->reg_settings_6g[VAR_4].i2c_reg_index > 0x20)
     return 0;
   }
  }
 }

 return VAR_3;
}
