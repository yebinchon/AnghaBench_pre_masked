
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct drm_display_mode {scalar_t__ hsync_start; scalar_t__ htotal; scalar_t__ hdisplay; scalar_t__ vsync_start; scalar_t__ vtotal; scalar_t__ vdisplay; } ;
struct sti_dvo {struct dvo_config* config; struct drm_display_mode mode; } ;
struct dvo_config {scalar_t__ (* awg_fwgen_fct ) (struct awg_code_generation_params*,struct awg_timing*) ;} ;
struct awg_timing {int blanking_level; scalar_t__ trailing_pixels; scalar_t__ blanking_pixels; scalar_t__ active_pixels; scalar_t__ total_pixels; scalar_t__ trailing_lines; scalar_t__ blanking_lines; scalar_t__ active_lines; scalar_t__ total_lines; } ;
struct awg_code_generation_params {scalar_t__ instruction_offset; int * ram_code; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct awg_code_generation_params*,struct awg_timing*) ;

__attribute__((used)) static int FUNC_2(struct sti_dvo *VAR_2, u8 *VAR_3, u32 *VAR_4)
{
 struct drm_display_mode *VAR_5 = &VAR_2->mode;
 struct dvo_config *VAR_6 = VAR_2->config;
 struct awg_code_generation_params VAR_7;
 struct awg_timing VAR_8;

 VAR_7.ram_code = VAR_4;
 VAR_7.instruction_offset = 0;

 VAR_8.total_lines = VAR_5->vtotal;
 VAR_8.active_lines = VAR_5->vdisplay;
 VAR_8.blanking_lines = VAR_5->vsync_start - VAR_5->vdisplay;
 VAR_8.trailing_lines = VAR_5->vtotal - VAR_5->vsync_start;
 VAR_8.total_pixels = VAR_5->htotal;
 VAR_8.active_pixels = VAR_5->hdisplay;
 VAR_8.blanking_pixels = VAR_5->hsync_start - VAR_5->hdisplay;
 VAR_8.trailing_pixels = VAR_5->htotal - VAR_5->hsync_start;
 VAR_8.blanking_level = VAR_0;

 if (VAR_6->awg_fwgen_fct(&VAR_7, &VAR_8)) {
  FUNC_0("AWG firmware not properly generated\n");
  return -VAR_1;
 }

 *VAR_3 = VAR_7.instruction_offset;

 return 0;
}
