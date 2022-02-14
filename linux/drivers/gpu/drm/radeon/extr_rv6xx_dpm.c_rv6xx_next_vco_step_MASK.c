
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rv6xx_sclk_stepping {int vco_frequency; int post_divider; } ;
struct radeon_device {int dummy; } ;



__attribute__((used)) static struct rv6xx_sclk_stepping FUNC_0(struct radeon_device *VAR_0,
            struct rv6xx_sclk_stepping *VAR_1,
            bool VAR_2, u32 VAR_3)
{
 struct rv6xx_sclk_stepping VAR_4;

 VAR_4.post_divider = VAR_1->post_divider;

 if (VAR_2)
  VAR_4.vco_frequency = (VAR_1->vco_frequency * (100 + VAR_3)) / 100;
 else
  VAR_4.vco_frequency = (VAR_1->vco_frequency * 100 + 99 + VAR_3) / (100 + VAR_3);

 return VAR_4;
}
