
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rv6xx_sclk_stepping {int post_divider; int vco_frequency; } ;
struct rv6xx_power_info {int spll_ref_div; int fb_div_scale; } ;
struct TYPE_3__ {int reference_freq; } ;
struct TYPE_4__ {TYPE_1__ spll; } ;
struct radeon_device {TYPE_2__ clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct radeon_device*,int,int) ;
 int FUNC_1 (struct radeon_device*,int,int) ;
 int FUNC_2 (struct radeon_device*,int,int) ;
 int FUNC_3 (struct radeon_device*,int,int) ;
 int FUNC_4 (struct radeon_device*,int,int) ;
 int FUNC_5 (struct radeon_device*,int,int) ;
 int FUNC_6 (struct radeon_device*,int,int) ;
 struct rv6xx_power_info* FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*,int,int ) ;

__attribute__((used)) static void FUNC_9(struct radeon_device *VAR_2,
      u32 VAR_3, struct rv6xx_sclk_stepping *VAR_4)
{
 struct rv6xx_power_info *VAR_5 = FUNC_7(VAR_2);
 u32 VAR_6 = VAR_2->clock.spll.reference_freq;
 u32 VAR_7;
 u32 VAR_8 = FUNC_8(VAR_2,
          VAR_0 *
          VAR_5->spll_ref_div,
          VAR_1);

 FUNC_0(VAR_2, VAR_3, 1);
 FUNC_2(VAR_2, VAR_3, 0);

 if (VAR_4->post_divider == 1)
  FUNC_1(VAR_2, VAR_3, 0);
 else {
  u32 VAR_9 = (VAR_4->post_divider - 2) / 2;
  u32 VAR_10 = VAR_4->post_divider - 2 - VAR_9;

  FUNC_1(VAR_2, VAR_3, 1);
  FUNC_4(VAR_2, VAR_3, (VAR_10 << 4) | VAR_9);
 }

 VAR_7 = ((VAR_4->vco_frequency * VAR_5->spll_ref_div) / VAR_6) >>
  VAR_5->fb_div_scale;

 FUNC_5(VAR_2, VAR_3,
            VAR_5->spll_ref_div - 1);
 FUNC_3(VAR_2, VAR_3, VAR_7);
 FUNC_6(VAR_2, VAR_3, VAR_8);

}
