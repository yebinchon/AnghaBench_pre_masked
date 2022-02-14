
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct pll_settings {scalar_t__ adjusted_pix_clk_100hz; int reference_freq; scalar_t__ vco_freq; scalar_t__ calculated_pix_clk_100hz; scalar_t__ pix_clk_post_divider; scalar_t__ fract_feedback_divider; scalar_t__ feedback_divider; scalar_t__ reference_divider; } ;
struct calc_pll_clock_source {int fract_fb_divider_factor; int ref_freq_khz; } ;


 int FUNC_0 (struct calc_pll_clock_source*,scalar_t__,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static bool FUNC_2(
  struct calc_pll_clock_source *VAR_0,
  struct pll_settings *VAR_1,
  uint32_t VAR_2,
  uint32_t VAR_3,
  uint32_t VAR_4)
{
 uint32_t VAR_5;
 uint32_t VAR_6;
 uint32_t VAR_7;
 uint32_t VAR_8;
 uint64_t VAR_9;

 FUNC_0(
   VAR_0,
   VAR_1->adjusted_pix_clk_100hz,
   VAR_2,
   VAR_3,
   &VAR_5,
   &VAR_6);


 VAR_9 = (uint64_t)VAR_5 *
     VAR_0->fract_fb_divider_factor +
       VAR_6;
 VAR_9 *= VAR_0->ref_freq_khz * 10;
 VAR_9 =
  FUNC_1(VAR_9,
   VAR_2 * VAR_3 *
    VAR_0->fract_fb_divider_factor);

 VAR_7 = (uint32_t)(VAR_9);

 VAR_8 = (VAR_7 >
     VAR_1->adjusted_pix_clk_100hz)
   ? VAR_7 -
     VAR_1->adjusted_pix_clk_100hz
   : VAR_1->adjusted_pix_clk_100hz -
      VAR_7;

 if (VAR_8 <= VAR_4) {

  VAR_1->reference_freq = VAR_0->ref_freq_khz;
  VAR_1->reference_divider = VAR_2;
  VAR_1->feedback_divider = VAR_5;
  VAR_1->fract_feedback_divider = VAR_6;
  VAR_1->pix_clk_post_divider = VAR_3;
  VAR_1->calculated_pix_clk_100hz =
   VAR_7;
  VAR_1->vco_freq =
   VAR_7 * VAR_3 / 10;
  return 1;
 }
 return 0;
}
