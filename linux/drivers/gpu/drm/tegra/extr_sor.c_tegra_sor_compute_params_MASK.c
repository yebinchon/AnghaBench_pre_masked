
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct tegra_sor_params {int precision; unsigned int ratio; scalar_t__ error; int active_count; int active_polarity; int active_frac; unsigned int tu_size; int num_clocks; } ;
struct tegra_sor {int dummy; } ;
typedef int s64 ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,unsigned int) ;
 int FUNC_2 (int const,int const) ;

__attribute__((used)) static int FUNC_3(struct tegra_sor *VAR_0,
        struct tegra_sor_params *VAR_1,
        unsigned int VAR_2)
{
 u64 VAR_3, VAR_4, VAR_5, VAR_6;
 u32 VAR_7, VAR_8 = 0;
 const u64 VAR_9 = VAR_1->precision;
 s64 VAR_10;

 VAR_3 = VAR_1->ratio * VAR_2;
 VAR_4 = FUNC_2(VAR_3, VAR_9) * VAR_9;
 VAR_5 = VAR_3 - VAR_4;


 if (VAR_5 >= (VAR_9 / 2)) {
  VAR_7 = 1;
  VAR_5 = VAR_9 - VAR_5;
 } else {
  VAR_7 = 0;
 }

 if (VAR_5 != 0) {
  VAR_5 = FUNC_2(VAR_9 * VAR_9, VAR_5);
  if (VAR_5 <= (15 * VAR_9)) {
   VAR_8 = FUNC_2(VAR_5, VAR_9);


   if (VAR_7)
    VAR_8++;
  } else {
   VAR_8 = VAR_7 ? 1 : 15;
  }
 }

 if (VAR_8 == 1)
  VAR_7 = 0;

 if (VAR_7 == 1) {
  if (VAR_8) {
   VAR_6 = VAR_4 + (VAR_8 * (VAR_9 - 1)) * VAR_9;
   VAR_6 = FUNC_2(VAR_6, VAR_8 * VAR_9);
  } else {
   VAR_6 = VAR_4 + VAR_9;
  }
 } else {
  if (VAR_8)
   VAR_6 = VAR_4 + FUNC_2(VAR_9, VAR_8);
  else
   VAR_6 = VAR_4;
 }

 VAR_10 = FUNC_1(VAR_3 - VAR_6, VAR_2);
 VAR_10 *= VAR_1->num_clocks;

 if (VAR_10 <= 0 && FUNC_0(VAR_10) < VAR_1->error) {
  VAR_1->active_count = FUNC_2(VAR_4, VAR_9);
  VAR_1->active_polarity = VAR_7;
  VAR_1->active_frac = VAR_8;
  VAR_1->error = FUNC_0(VAR_10);
  VAR_1->tu_size = VAR_2;

  if (VAR_10 == 0)
   return 1;
 }

 return 0;
}
