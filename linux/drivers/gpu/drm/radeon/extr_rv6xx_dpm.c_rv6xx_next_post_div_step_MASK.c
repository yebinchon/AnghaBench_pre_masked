
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rv6xx_sclk_stepping {int post_divider; } ;
struct radeon_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct radeon_device*,struct rv6xx_sclk_stepping*,struct rv6xx_sclk_stepping*) ;

__attribute__((used)) static struct rv6xx_sclk_stepping FUNC_1(struct radeon_device *VAR_0,
          struct rv6xx_sclk_stepping *VAR_1,
          struct rv6xx_sclk_stepping *VAR_2)
{
 struct rv6xx_sclk_stepping VAR_3 = *VAR_1;

 while (FUNC_0(VAR_0, &VAR_3, VAR_2))
  VAR_3.post_divider--;

 return VAR_3;
}
