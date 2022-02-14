
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rv6xx_sclk_stepping {scalar_t__ vco_frequency; } ;
struct radeon_device {int dummy; } ;



__attribute__((used)) static bool FUNC_0(struct radeon_device *VAR_0,
       struct rv6xx_sclk_stepping *VAR_1,
       struct rv6xx_sclk_stepping *VAR_2,
       bool VAR_3)
{
 return (VAR_3 && (VAR_1->vco_frequency >= VAR_2->vco_frequency)) ||
  (!VAR_3 && (VAR_1->vco_frequency <= VAR_2->vco_frequency));
}
