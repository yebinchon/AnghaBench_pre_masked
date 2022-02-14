
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct output_pixel_processor {int dummy; } ;
struct dcn10_opp {int dummy; } ;
struct dc_crtc_timing {scalar_t__ timing_3d_format; scalar_t__ v_addressable; scalar_t__ v_total; scalar_t__ h_border_right; scalar_t__ h_addressable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 scalar_t__ VAR_7 ;
 struct dcn10_opp* FUNC_1 (struct output_pixel_processor*) ;

void FUNC_2(
 struct output_pixel_processor *VAR_8,
 bool VAR_9,
 const struct dc_crtc_timing *VAR_10)
{
 struct dcn10_opp *VAR_11 = FUNC_1(VAR_8);

 uint32_t VAR_12 = VAR_10->h_addressable - VAR_10->h_border_right - VAR_10->h_border_right;
 uint32_t VAR_13 = VAR_10->v_total - VAR_10->v_addressable;

 uint32_t VAR_14 = VAR_10->v_total - VAR_10->v_addressable;

 if (!VAR_9) {
  VAR_12 = 0;
  VAR_13 = 0;
  VAR_14 = 0;
 }


 FUNC_0(VAR_0, VAR_1, 0);

 FUNC_0(VAR_6, VAR_5, VAR_12);






 if (VAR_10->timing_3d_format == VAR_7)
  FUNC_0(VAR_2, VAR_4, VAR_14);
 else
  FUNC_0(VAR_2, VAR_3, VAR_13);
}
