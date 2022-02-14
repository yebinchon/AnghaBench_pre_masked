
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {size_t high_mclk_index; size_t medium_mclk_index; size_t low_mclk_index; int * mclks; } ;
struct rv6xx_power_info {int fb_div_scale; TYPE_3__ hw; scalar_t__ mclk_ss; } ;
struct TYPE_4__ {int reference_freq; } ;
struct TYPE_5__ {TYPE_1__ mpll; } ;
struct radeon_device {TYPE_2__ clock; } ;
struct radeon_atom_ss {int rate; int percentage; } ;
struct atom_clock_dividers {int ref_div; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct radeon_device*,struct radeon_atom_ss*,int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int,int ,int ,int ) ;
 int FUNC_3 (struct radeon_device*,int) ;
 int FUNC_4 (struct radeon_device*,int ,int,struct atom_clock_dividers*,int*) ;
 struct rv6xx_power_info* FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*,int) ;
 int FUNC_7 (struct radeon_device*,int) ;

__attribute__((used)) static void FUNC_8(struct radeon_device *VAR_1)
{
 struct rv6xx_power_info *VAR_2 = FUNC_5(VAR_1);
 u32 VAR_3 = VAR_1->clock.mpll.reference_freq;
 struct atom_clock_dividers VAR_4;
 struct radeon_atom_ss VAR_5;
 u32 VAR_6 = 0, VAR_7, VAR_8;

 FUNC_3(VAR_1, 0);

 if (VAR_2->mclk_ss) {
  FUNC_4(VAR_1,
        VAR_2->hw.mclks[VAR_2->hw.high_mclk_index],
        VAR_3,
        &VAR_4,
        &VAR_6);

  FUNC_4(VAR_1,
        VAR_2->hw.mclks[VAR_2->hw.medium_mclk_index],
        VAR_3,
        &VAR_4,
        &VAR_6);

  FUNC_4(VAR_1,
        VAR_2->hw.mclks[VAR_2->hw.low_mclk_index],
        VAR_3,
        &VAR_4,
        &VAR_6);

  if (VAR_6) {
   if (FUNC_0(VAR_1, &VAR_5,
            VAR_0, VAR_6)) {
    VAR_7 = FUNC_2(VAR_6,
              (VAR_3 / (VAR_4.ref_div + 1)),
              VAR_5.rate,
              VAR_5.percentage,
              VAR_2->fb_div_scale);

    VAR_8 = FUNC_1(VAR_5.rate,
              (VAR_3 / (VAR_4.ref_div + 1)));

    FUNC_7(VAR_1, VAR_7);
    FUNC_6(VAR_1, VAR_8);
    FUNC_3(VAR_1, 1);
   }
  }
 }
}
