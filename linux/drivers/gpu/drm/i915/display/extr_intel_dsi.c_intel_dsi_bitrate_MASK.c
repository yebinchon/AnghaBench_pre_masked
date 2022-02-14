
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dsi {int pclk; int lane_count; int pixel_format; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;

int FUNC_2(const struct intel_dsi *VAR_0)
{
 int VAR_1 = FUNC_1(VAR_0->pixel_format);

 if (FUNC_0(VAR_1 < 0))
  VAR_1 = 16;

 return VAR_0->pclk * VAR_1 / VAR_0->lane_count;
}
