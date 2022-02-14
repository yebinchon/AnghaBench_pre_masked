
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp {int dummy; } ;
struct dcn_dpp_state {void* gamut_remap_c33_c34; void* gamut_remap_c31_c32; void* gamut_remap_c23_c24; void* gamut_remap_c21_c22; void* gamut_remap_c13_c14; void* gamut_remap_c11_c12; scalar_t__ gamut_remap_mode; scalar_t__ rgam_lut_mode; scalar_t__ dgam_lut_mode; scalar_t__ igam_input_format; scalar_t__ igam_lut_mode; scalar_t__ is_enabled; } ;
struct dcn10_dpp {int dummy; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,int ,scalar_t__*) ;
 void* FUNC_1 (int ) ;
 struct dcn10_dpp* FUNC_2 (struct dpp*) ;

void FUNC_3(struct dpp *VAR_17,
  struct dcn_dpp_state *VAR_18)
{
 struct dcn10_dpp *VAR_19 = FUNC_2(VAR_17);

 FUNC_0(VAR_16,
   VAR_15, &VAR_18->is_enabled);
 FUNC_0(VAR_10,
   VAR_12, &VAR_18->igam_lut_mode);
 FUNC_0(VAR_10,
   VAR_11, &VAR_18->igam_input_format);
 FUNC_0(VAR_0,
   VAR_1, &VAR_18->dgam_lut_mode);
 FUNC_0(VAR_13,
   VAR_14, &VAR_18->rgam_lut_mode);
 FUNC_0(VAR_8,
   VAR_9, &VAR_18->gamut_remap_mode);

 if (VAR_18->gamut_remap_mode) {
  VAR_18->gamut_remap_c11_c12 = FUNC_1(VAR_2);
  VAR_18->gamut_remap_c13_c14 = FUNC_1(VAR_3);
  VAR_18->gamut_remap_c21_c22 = FUNC_1(VAR_4);
  VAR_18->gamut_remap_c23_c24 = FUNC_1(VAR_5);
  VAR_18->gamut_remap_c31_c32 = FUNC_1(VAR_6);
  VAR_18->gamut_remap_c33_c34 = FUNC_1(VAR_7);
 }
}
