
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct calc_pll_clock_source {unsigned long long ref_freq_khz; unsigned long long fract_fb_divider_precision_factor; scalar_t__ fract_fb_divider_factor; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,scalar_t__,int*) ;

__attribute__((used)) static bool FUNC_2(
  struct calc_pll_clock_source *VAR_0,
  uint32_t VAR_1,
  uint32_t VAR_2,
  uint32_t VAR_3,
  uint32_t *VAR_4,
  uint32_t *VAR_5)
{
 uint64_t VAR_6;

 VAR_6 =
  (uint64_t)VAR_1 * VAR_2 * VAR_3;
 VAR_6 *= 10;

 VAR_6 *= (uint64_t)(VAR_0->fract_fb_divider_factor);
 VAR_6 = FUNC_0(VAR_6, VAR_0->ref_freq_khz * 10ull);







 VAR_6 += 5ULL *
       VAR_0->fract_fb_divider_precision_factor;
 VAR_6 =
  FUNC_0(VAR_6,
   VAR_0->fract_fb_divider_precision_factor * 10);
 VAR_6 *= (uint64_t)
   (VAR_0->fract_fb_divider_precision_factor);

 *VAR_4 =
  FUNC_1(
   VAR_6,
   VAR_0->fract_fb_divider_factor,
   VAR_5);

 if (*VAR_4 != 0)
  return 1;
 return 0;
}
