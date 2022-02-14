
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rv6xx_sclk_stepping {int post_divider; int vco_frequency; } ;
struct radeon_device {int dummy; } ;
struct atom_clock_dividers {int post_div; scalar_t__ enable_post_div; } ;


 int VAR_0 ;
 int FUNC_0 (struct radeon_device*,int ,int,int,struct atom_clock_dividers*) ;

__attribute__((used)) static int FUNC_1(struct radeon_device *VAR_1,
        u32 VAR_2, struct rv6xx_sclk_stepping *VAR_3)
{
 int VAR_4;
 struct atom_clock_dividers VAR_5;

 VAR_4 = FUNC_0(VAR_1, VAR_0,
          VAR_2, 0, &VAR_5);
 if (VAR_4)
  return VAR_4;

 if (VAR_5.enable_post_div)
  VAR_3->post_divider = 2 + (VAR_5.post_div & 0xF) + (VAR_5.post_div >> 4);
 else
  VAR_3->post_divider = 1;

 VAR_3->vco_frequency = VAR_2 * VAR_3->post_divider;

 return 0;
}
