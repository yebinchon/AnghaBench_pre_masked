
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pll_settings {int adjusted_pix_clk_100hz; } ;
struct calc_pll_clock_source {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct calc_pll_clock_source*,struct pll_settings*,int,int,int) ;

__attribute__((used)) static bool FUNC_1(
  struct calc_pll_clock_source *VAR_1,
  struct pll_settings *VAR_2,
  uint32_t VAR_3,
  uint32_t VAR_4,
  uint32_t VAR_5,
  uint32_t VAR_6,
  uint32_t VAR_7)
{
 uint32_t VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;



 VAR_10 = (VAR_2->adjusted_pix_clk_100hz * VAR_7) /
         100000;
 if (VAR_10 < VAR_0)
  VAR_10 = VAR_0;

 for (
   VAR_9 = VAR_6;
   VAR_9 >= VAR_5;
   --VAR_9) {
  for (
    VAR_8 = VAR_3;
    VAR_8 <= VAR_4;
    ++VAR_8) {
   if (FUNC_0(
     VAR_1,
     VAR_2,
     VAR_8,
     VAR_9,
     VAR_10)) {
    return 1;
   }
  }
 }

 return 0;
}
