
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp {int dummy; } ;
struct dcn_dpp_state {void* gamut_remap_c33_c34; void* gamut_remap_c31_c32; void* gamut_remap_c23_c24; void* gamut_remap_c21_c22; void* gamut_remap_c13_c14; void* gamut_remap_c11_c12; scalar_t__ gamut_remap_mode; scalar_t__ dgam_lut_mode; scalar_t__ is_enabled; } ;
struct dcn20_dpp {int dummy; } ;


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
 int FUNC_0 (int ,int ,scalar_t__*) ;
 void* FUNC_1 (int ) ;
 struct dcn20_dpp* FUNC_2 (struct dpp*) ;

void FUNC_3(struct dpp *VAR_12,
  struct dcn_dpp_state *VAR_13)
{
 struct dcn20_dpp *VAR_14 = FUNC_2(VAR_12);

 FUNC_0(VAR_11,
   VAR_10, &VAR_13->is_enabled);
 FUNC_0(VAR_0,
   VAR_1, &VAR_13->dgam_lut_mode);



 FUNC_0(VAR_8,
   VAR_9, &VAR_13->gamut_remap_mode);
 if (VAR_13->gamut_remap_mode) {
  VAR_13->gamut_remap_c11_c12 = FUNC_1(VAR_2);
  VAR_13->gamut_remap_c13_c14 = FUNC_1(VAR_3);
  VAR_13->gamut_remap_c21_c22 = FUNC_1(VAR_4);
  VAR_13->gamut_remap_c23_c24 = FUNC_1(VAR_5);
  VAR_13->gamut_remap_c31_c32 = FUNC_1(VAR_6);
  VAR_13->gamut_remap_c33_c34 = FUNC_1(VAR_7);
 }
}
